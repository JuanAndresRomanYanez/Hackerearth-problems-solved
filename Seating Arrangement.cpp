#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int test,x;
int solve(int z){
    x=z%12;
    if(x==1)cout<<z+11<<" WS\n";
    if(x==2)cout<<z+9<<" MS\n";
    if(x==3)cout<<z+7<<" AS\n";
    if(x==4)cout<<z+5<<" AS\n";
    if(x==5)cout<<z+3<<" MS\n";
    if(x==6)cout<<z+1<<" WS\n";
    if(x==7)cout<<z-1<<" WS\n";
    if(x==8)cout<<z-3<<" MS\n";
    if(x==9)cout<<z-5<<" AS\n";
    if(x==10)cout<<z-7<<" AS\n";
    if(x==11)cout<<z-9<<" MS\n";
    if(x==0)cout<<z-11<<" WS\n";
}
int main(){
    optimizar_io
    cin>>test;
    while(test--){
        cin>>x;
        solve(x);
    }
    return 0;
}
