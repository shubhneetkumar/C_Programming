#include <stdio.h>
int main() {
    int a,rev=0,rem,m;
    printf("Enter a number:");
    scanf("%d",&a);
    m=a;
    while(a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
        
    }
    if(m==rev)
    {
        printf("True");
    }
    else
        printf("False");
       
    return 0;
}