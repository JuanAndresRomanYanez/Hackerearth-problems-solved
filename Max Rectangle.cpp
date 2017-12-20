#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
long long test;
double x;
int main(){
    optimizar_io
    cin>>test;
    while(test--){
        cin>>x;
        cout<<fixed<<setprecision(3)<<(x/4)<<" "<<(x/4)<<" "<<(x/4)*(x/4)<<"\n";
    }
    return 0;
}
