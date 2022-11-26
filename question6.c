#include<stdio.h>
int main()
{
int x,y;
printf("enter two numbers");
scanf("%d%d",&x,&y);
if(x>y)
printf("%d number is greater",x);
else if(x==y)
printf("both number are same=%d",x);
else
printf("%d number is greater",y);
}
