#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    char name[20];
    int initial,current,usage;
    float bill;
    char ch,allow;
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    do{
    system("cls");
    printf("\n\t\t Tamilnadu Electricity Board");
    printf("\n\n Enter the customer name:");
    scanf("%s",name);
    fflush(stdin);
    printf("\n User Type:\n 1. Domestic user \n 2. Office \n 3. Factory\n");
    printf("\n Please Enter the user type(1/2/3 or D/O/F):");
    scanf("%c",&ch);
    printf("\n Enter the initial meter reading :");
    scanf("%d",&initial);
    printf("\n Enter the current meter reading :");
    scanf("%d",&current);

    if(ch=='1'||ch=='D')
    {
        usage=current-initial;
        if(usage<=500)
        {
            bill=usage*0.25;
        }
        else
        {
            bill=(500*0.25)+(usage-500)*0.37;
        }
    }
    if(ch=='2'||ch=='O')
    {
        usage=current-initial;
        if(usage<=1000)
        {
            bill=usage*0.50;
        }
        else
        {
            bill=(1000*0.50)+(usage-1000)*0.63;
        }
    }
    if(ch=='3'||ch=='F')
    {
        usage=current-initial;
        if(usage<=1500)
        {
            bill=usage*0.65;
        }
        else
        {
            bill=(1500*0.65)+(usage-1500)*0.75;
        }
    }

    printf("\n\t\t Tamilnadu Electricity Board");
    printf("\n\t\t\t Date of payment: %d/%d/%d",stime.wDay,stime.wMonth,stime.wYear);
    printf("\n\n Customer Name:%s",name);
    printf("\n Initial Reading : %d,   Current reading: %d", initial,current);
    printf("\n Total Usage: %d",usage);

    printf("\n Total amount to be paid: Rs %.2f\n",bill);
    fflush(stdin);
    printf("\n\n Do you want to continue(y/n):");
    scanf("%c",&allow);
    }while(allow=='y'||allow=='Y');

    return 0;
}
