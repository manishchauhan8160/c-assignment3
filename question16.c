int main()
{
char a;
printf("enter an character");
scanf("%c",&a);
if(a>=65&&a<=90)
printf("uppercase");
else if(a>=97&&a<=121)
printf("lowercase");
else if(a>=48&&a<=57)
printf("digit");
else
printf("special symbol");
}
