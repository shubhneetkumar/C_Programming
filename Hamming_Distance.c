#include<stdio.h>
int Hamming_distance(int,int);
void main()
{
   int num1, num2,hd;
   printf("Enter the numbers num1 & num2");
   scanf("%d %d",&num1,&num2);
   hd = Hamming_distance (num1, num2);
   printf("Hamming_distance between %d and %d is %d" ,num1,num2,hd);
}
int Hamming_distance(int x, int y)
{
    int count = 0;
    int re = x^y;
    while(re>0)
    {
        count += re&1;
        re >>= 1;
    }
    return count;
}