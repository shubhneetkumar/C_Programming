#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[1000],n,i=0,j;
    printf("Enter the number");
    scanf("%d",&n);
    while(n>0){
        arr[i]=n%2;
        i++;
        n=n/2;
    }
    for(j=i-1;j>=0;j--)
        printf("%d",arr[j]);
    return 0;
}
