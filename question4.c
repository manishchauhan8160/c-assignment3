int main()
{
int x,count=0;
printf("enter the number");
scanf("%d",&x);
while(x)
{
x=x/10;
count++;
}
if(count==3)
printf("no is 3 digit number");
else
printf("no is not 3 digit number");
}
