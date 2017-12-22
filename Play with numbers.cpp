#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
long long n,q,x,y,sum=0;
int main(){
    optimizar_io
    cin>>n>>q;
    long long v[n];
    for(int i=0;i<n;++i){
            cin>>x;
            sum+=x;
            v[i]=sum;
    }
    for(int i=0;i<q;++i){
        cin>>x>>y;
        cout<<(x==1?v[y-1]/y:(v[y-1]-v[x-2])/(y-x+1))<<"\n";
    }
    return 0;
}
