
#include <stdio.h>
#define wage 10
int main(void)
{
   int hours;
   float tax, net, gross; //税，净赚，总额
   float tax1, tax2, tax3;
   printf("Enter your work hour:\n");
   scanf("%d", &hours);
   float gross1, gross2;
   gross1 = wage*hours;
   gross2 = 40*10 + (hours - 40)*15;
      if (hours <= 40)
          gross = gross1;
      else
          gross = gross2;
   tax1 = gross*0.15;
   tax2 = 300*0.15 + (gross - 300)*0.2;
   tax3 = 300*0.15 + 150*0.2 + (gross - 450)*0.25;
      if (gross <= 300)
          tax = tax1;
      else if (gross <= 450)
          tax = tax2;
      else
          tax = tax3;
   printf("Your gross is $%.1f\n", gross);
   printf("Your tax is $%.1f\n", tax);
   net = gross - tax;
   printf("Your wage net is $%.1f\n", net);
   return 0;
}

