#include <stdio.h>
#define min_left  60
int main(void)
{
   int min, left;
   printf("Please enter the number of mins(<=0 to quit):\n ");
   scanf("%d", &min);
   while(min > 0)
   {
	 left = min / min_left;
	 printf("now is %d hours  and %d mins\n",left, min % min_left);
	 printf("enter next value (<=0 to quit):\n");
	 scanf("%d", &min);
   }
   printf("Done!\n");
   
   return 0;
}

    
