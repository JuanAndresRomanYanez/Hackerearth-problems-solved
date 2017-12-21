#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int test;
string a,b;
int main(){
    optimizar_io
    cin>>test;
    while(test--){
        cin>>a>>b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        cout<<(a==b?"YES\n":"NO\n");
    }
}
