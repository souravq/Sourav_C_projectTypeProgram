#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ticketNum,totalCost,discount=0,discount2=0,finalCost,cost;
    char refreshment,circle,coupon;
    printf("\n Enter the No of Ticket:");
    scanf("%f",&ticketNum);
    fflush(stdin);
    printf("\n Do You want refreshment(y/n):");
    scanf("%c",&refreshment);
    fflush(stdin);
    printf("\n Do you have coupon Code(y/n):");
    scanf("%c",&coupon);
    fflush(stdin);
    printf("\n Enter the Circle(k/q):");
    scanf("%c",&circle);

    if(circle=='k')
    {
        if(ticketNum>20.0)
        {
            totalCost=75*ticketNum;
            discount=(totalCost*10)/100;
            cost=totalCost-discount;

        }
        else
        {

           cost=75*ticketNum;
        }
    }
    if(circle=='q')
    {
        if(ticketNum>20)
        {
            totalCost=150*ticketNum;
            discount=(totalCost*10)/100;
            cost=totalCost-discount;
        }
        else
        {
           cost=150*ticketNum;
        }
    }
    if(coupon=='y')
    {
        discount2=(cost*2)/100;
        cost=cost-discount2;
    }
    if(refreshment=='y')
    {
        cost=cost+(ticketNum*50);

    }

    printf("\n The Total/FinalCost is :%.2f\n",cost);


    return 0;
}
