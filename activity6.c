//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float input()
{
    float a; 
    printf("Enter a number\n");
    scanf("%f",&a);
    return a;
}

float find_distance(float x1, float x2 ,float y1,float y2)
{
    float d;
   d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return d;
}

void output(float a)
{
    printf("The result is %f”,a);
}

int main()
{
    float x,y,x1,y1;
    x=input();
    y=input();
    x1=input();
    y1=input();
    z=find_distance(x,x1,y,y1);
    output(z);
    return 0;
}
