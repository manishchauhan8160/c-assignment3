int main()
{
float cost,sell,profit,loss;
printf("enter the cost and selling price");
scanf("%f%f",&cost,&sell);
if(sell>cost)
{
profit=sell-cost;
printf("profit percent is %f%% ",profit);
}
else
{
loss=cost-sell;
printf("loss percent is %f%%",loss);
}
}
