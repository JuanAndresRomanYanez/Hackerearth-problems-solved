#include <stdio.h>
int n,m,k,cont=0;
int main(){
    scanf("%i%i%i", &n, &m, &k);
    for(int i=n;i<=m;++i)if(i%k==0)cont++;
    printf("%i\n", cont);
}
