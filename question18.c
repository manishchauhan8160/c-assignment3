int main()
{
int x;
printf("enter the month number");
scanf("%d",&x);
switch(x)
{
case 1: printf("31 days");
        break;
case 2: printf("29 days");
break;
case 3: printf("31 days");
break;
case 4: printf("30 days");
break;
case 5: printf("31 days");
break;
case 6: printf("30 days");
break;
case 7: printf("31 days");
break;
case 8: printf("31 days");
break;
case 9: printf("30 days");
break;
case 10: printf("31 days");
break;
case 11: printf("30 days");
break;
case 12: printf("31 days");
default: printf("invalid choice");
}
}
