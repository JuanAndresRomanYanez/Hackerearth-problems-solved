#include <stdio.h>
int n;
int fact(int n){
    if(n==0 || n==1)return 1;
    return n*fact(n-1);
}
int main(){
    scanf("%i", &n),printf("%i\n", fact(n));
}
