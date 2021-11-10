#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int res=0,num,i=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    
    for(i=1;i<num;i++)
    
        if(num%i==0)
        
            res=res+i;
            
        if (num==res)
        
            printf("True");
        else
            printf("False");
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
