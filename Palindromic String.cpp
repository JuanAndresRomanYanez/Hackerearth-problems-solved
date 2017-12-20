#include <stdio.h>
#include <string.h>
char a[101];
int main(){
    scanf("%s", a);
    for(int i=0,j=strlen(a)-1;i<strlen(a);++i,--j)if(a[i]!=a[j]){printf("NO\n");return 0;}
    printf("YES\n");
}
