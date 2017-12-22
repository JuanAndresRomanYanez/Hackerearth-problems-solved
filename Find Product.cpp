#include <stdio.h>
int n,x;
long long sum=1;
int main(){
    scanf("%i", &n);
    for(int i=0;i<n;++i){
        scanf("%i", &x);
        sum=(sum*x)%1000000007;
    }
    printf("%lld\n", sum);
}
