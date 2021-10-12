#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int a;
    scanf("%d",&a);
    
    if(a % 400==0){
        printf("True");
    
    }
    else if(a % 100==0){
        printf("False");
    }
    else if(a%4==0){
        printf("True");
    
    }
    else{
        printf("False");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
