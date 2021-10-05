#include<stdio.h>
#include<string.h>
void main()
{
    char st[100],reg[50];
    int count = 0,i,j;
    puts("Enter the string:");
    gets(st);

    int flag,index = 0;
    for(i=0;st[i]!='\0';i++)
    {
        flag = 1;
        for(int k=0;k<index;k++)
        if(st[i] == reg[k])
        {
            flag = 0;
            break;

        }
        if (flag)
        {
            reg[index++] = st[i];
            count = 0;
            for(j=0;st[j]!='\0';j++)
            if(st[i] == st[j])
             count++;
             printf("char%c:%d\n",st[i],count);
        }
    }
}