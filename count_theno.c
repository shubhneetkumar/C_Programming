#include <stdio.h>

int main() {
int num,i,p=0,n=0,z=0;
    printf("Enter the Number");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the element of array");
    for(i=0;i<=num-1;i++)
        scanf("%d",&arr[i]);
     for(i = 0; i < num; i ++)
 {
     if(arr[i] > 0)
     {
        p++;
     }
     else if(arr[i] < 0)
     {
        n++;
     }
     else
     {
        z++;
     }
 } 
    printf("p=%d n=%d z=%d",p,n,z);
       
    return 0;
}
