#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    
    if(a % 2==0)
    {
        printf("Even");
    
    }
    else
    {
        printf("Odd");
    }
    
    return 0;
}
