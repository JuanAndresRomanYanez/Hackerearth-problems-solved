#include <stdio.h>
int l,test,x,y;
int main(){
    scanf("%i%i", &l,&test);
    while(test--){
            scanf("%i%i", &x, &y);
            if(x>=l && y>=l){
                    if(x==y)printf("ACCEPTED\n");
                    else printf("CROP IT\n");
            }
            else printf("UPLOAD ANOTHER\n");
    }
}
