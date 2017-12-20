#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int test,x,y,z,conti=0;
long long lol[100001];
bool primos[100001],loli[100001];
vector<int>pri;
void generar(){
    primos[0]=primos[1]=true;
    for(int i=2;i<=100001;++i){
        if(primos[i]==false){
                pri.push_back(i);
                for(int j=i+i;j<=100001;j+=i){
                    primos[j]=true;
                }
        }
    }
    for(int i=0;i<9592;++i){
        for(int j=i+1;j<9592;++j){
            z=pri[i]+pri[j];
            if(z<=100000)loli[z]=true;
            else break;
        }
    }
    for(int i=0;i<=100000;++i){
        if(loli[i]==true)conti++;
        lol[i]=conti;
    }
}
int main(){
    optimizar_io
    generar();
    cin>>test;
    while(test--){
        cin>>x>>y;
        cout<<(x==0?lol[y]:lol[y]-lol[x-1])<<"\n";
    }
    return 0;
}
