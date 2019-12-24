#include<stdio.h>

void incomeTax(int annualIncome)
{
    float tax=0;
    if(annualIncome<1200000)
    {
        printf("\nTax is not applicable on you as you have annual Income less than 1200000");
        return;
    }
    else if(annualIncome>=1200000 && annualIncome<1400000)
    {
          tax=annualIncome*0.05;
    }
     else if(annualIncome>=1400000 && annualIncome<1600000)
    {
          tax=annualIncome*0.07;
    }
     else if(annualIncome>=1600000 && annualIncome<1800000)
    {
          tax=annualIncome*0.09;
    }
    else if(annualIncome>=1800000 && annualIncome<2000000)
    {
          tax=annualIncome*0.11;
    }
     else
     {
          printf("\nSorry this program is unable to calculate income tax : ");
          return;
     }
     printf("\n Tax on your income is : %f",tax);
     return;
}
int main()
{
    float monthlyIncome=0,annualIncome;
    printf("Enter your monthly Income : ");
    scanf("%f",&monthlyIncome);

    annualIncome=monthlyIncome*12;

    incomeTax(annualIncome);


}
