#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int n;
double x;
int main(){
    optimizar_io
    cin>>n;
    while(n--){
        cin>>x;
        cout<<fixed<<setprecision(3)<<sqrt(x)<<" "<<sqrt(x)<<" "<<2*sqrt(x)+2*sqrt(x)<<"\n";
    }
    return 0;
}
