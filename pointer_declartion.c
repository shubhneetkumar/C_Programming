#include<stdio.h>
int main()
{
    int a = 20;
    *ptr = &a;
    **dptr = &ptr;
    printf("%d",**dptr);
}


