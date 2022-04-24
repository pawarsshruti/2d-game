/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i=1,sum=0;
scanf("%d",&n);
while(i<n)
{
if(n%i==0)
sum=sum+i;
i++;
}
if(n==sum)
printf("%d,perfect",n);
else
printf("%d,not perfect",n);

    return 0;
}
