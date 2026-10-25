#include <stdio.h>
int main(void)
{
   int num1, num2, i;
   printf("Enter lower and upper integer limits:\n");
   scanf("%d %d",&num1, &num2);
   while (num1 < num2)
 {
     long long sum = 0;
     for (i = num1; i <= num2; i++)
	sum += (long long)i*i;
     printf("The sums of the squares from %lld to %lld is %lld\n",(long long)num1*num1,(long long)num2*num2,sum);   
     printf("Enter next set of limits: ");
     if (scanf("%d %d", &num1, &num2) != 2 )
	 break;
 }   
   printf("Done\n");
   return 0;
}
