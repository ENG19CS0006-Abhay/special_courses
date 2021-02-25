#include<stdio.h>
struct fract
{
   int  num;
    int  deno;
};
    typedef struct fract fraction;
fraction input()
{
   fraction a;
   printf("Enter the numerator\n");
   scanf("%d",&a.num);
   printf("Enter the denominator\n");
   scanf("%d",&a.deno);
   return a;
}
fraction sum(fraction a,fraction b)
{
  fraction res;
  int gcd=1;
 res.deno=a.deno*b.deno;
res.num=(a.num*b.deno)+(b.num*a.deno);
for(int i=1;i<=(res.num)&&i<=(res.deno);i++)
{
if((res.num)%i==0&&(res.deno)%i==0)
gcd=i;
}
res.deno=(res.deno)/gcd;
res.num=(res.num)/gcd;
return res;
}
int main()
{
int n;
printf(“Enter the number of fractions\n”);
scanf(“%d”,&n); 
fraction c,a[n];
c.num=0;
c.deno=1;
for(int i=0;i<n;i++)
{
printf(“For fraction %d\n“,(i+1));
a[i]=input();
}
for(int i=0;i<n;i++)
{
c=sum(c,a[i]);
}
printf("The final sum is %d/%d ",c.num,c.deno);
return 0;
}
