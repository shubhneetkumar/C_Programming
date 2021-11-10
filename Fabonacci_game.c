#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    int a=0;
    int b=1;
    if(n==0){
        return 0;
    }
    else if(n==1){
        printf("%d ",a);
        return 0;
    }
    int c;
    printf("%d %d ",a,b);
    for(int i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}
