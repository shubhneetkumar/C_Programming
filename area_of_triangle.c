#include <stdio.h>
#include<math.h>
#include<conio.h>
 
int main(){
    int a,b,c,s,area;
    printf("Enter the length of three sides of triangle\n");
    scanf("%d %d %d", &a, &b, &c);
    
    s = (a + b + c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle : %d", area);
     
    
}