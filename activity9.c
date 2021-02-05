//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int main()
{
int n,sum=0;
printf(“Enter the total number of numbers\n”);
scanf(“%d”,&n);
for(int i=0;i<n;i++)
sum=sum+i;
printf(“The final sum is %d\n”,sum);
return 0;
}
