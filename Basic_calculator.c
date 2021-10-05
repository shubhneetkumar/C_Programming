#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
     int num1=0,num2=0,result=0;
     char oper= ' ' ;
     scanf("%c",&oper);
     scanf("%d %d",&num1,&num2);
     if(oper=='+')
     {
         result=num1+num2;
     }
     else if(oper=='-')
     {
         result=num1-num2;
     }
     else if(oper=='*')
     {
         result=num1*num2;

     }
     else if(oper=='/')
     {
         result=num1/num2;
     }
     else 
     {
        result=num1%num2;
      }
     printf("%d",result);
     





    
    return 0;
}
