#include <stdio.h>
int n;
const int MAX=1001;
bool primos[MAX];
void generar(){
    primos[0]=primos[1]=true;
    for(int i=2;i<=MAX;++i)if(primos[i]==false)for(int j=i+i;j<=MAX;j+=i)primos[j]=true;
}
int main(){
    generar();
    scanf("%i", &n);
    for(int i=2;i<=n;++i)if(primos[i]==false)printf("%i ", i);
}
