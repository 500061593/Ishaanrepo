#include<stdio.h>
#include<math.h>
int main()
{
    float principle,rate,time,SI,amount,CI;
    printf("Enter principle,rate and time");
    scanf("%f %f %f",&principle,&rate,&time);
    SI=(principle*rate*time)/100;
    printf(" The calculated Simple Interest %f",SI);
    amount=1+(rate/100);
    CI=principle*pow(amount,time)-principle;
    printf("Calculated compound interest %f",CI);
    return 0;
}
