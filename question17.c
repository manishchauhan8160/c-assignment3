int main()
{
float a,b,c;
printf("enter the three sides of triangle");
scanf("%f%f%f",&a,&b,&c);
if(a+b>c||a+c>b||b+c>a)
printf("valid triangle");
else
printf("invalid triangle");
}
