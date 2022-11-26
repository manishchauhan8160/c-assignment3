int main()
{
int a,b,c,d;
printf("enter the a,b,c number of quarditic equation");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
if(d>0)
printf("roots are real and distinct");
if(d<0)
printf("roots are imaginary");
if(d==0)
printf("roots are real and equal");
}
