#include <stdio.h>
int main(void)
{  double height, inches, total_inches;
   int feet;
   printf("Enter a height in centimetes:");
   scanf("%lf",&height);
   while (height > 0)
   {
   total_inches = height / 2.54;   
   feet = (int)(total_inches / 12);   
   inches = total_inches - feet * 12;
   printf("%.1f cm = %d feet, %.1f inches\n",height, feet, inches);
   printf("Enter a height in centimeters(<=0 to quit):");
   scanf("%lf",&height);
   }
   printf("bye\n");
   return 0;
}
