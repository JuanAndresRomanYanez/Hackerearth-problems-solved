#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int test,ans;
string a,b;
int main(){
    optimizar_io
    cin>>test;
    while(test--){
        cin>>a>>b;
        int a1[26]={0},b1[26]={0};
        ans=0;
        for(int i=0;i<(int)a.size();++i)a1[a[i]-'a']++;
        for(int i=0;i<(int)b.size();++i)b1[b[i]-'a']++;
        for(int i=0;i<26;++i)ans+=abs(a1[i]-b1[i]);
        cout<<ans<<"\n";
    }
    return 0;
}
