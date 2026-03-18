#include <stdio.h>

int main(){
    int n,f1=0,f2=1,f,i;
    printf("Enter the no");
    scanf("%d",&n);
    printf("%d %d ",f1,f2);
    for(i=3;i<=n;i++){
        f=f1+f2;
        printf("%d ",f);
        f1=f2;
        f2=f;
    }
    return 0;
}
