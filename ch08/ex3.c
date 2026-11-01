#include <stdio.h>
#include <ctype.h>
int main(void)
{
   int ch;
   unsigned long upper = 0, lower = 0;
   while ((ch = getchar()) != EOF)
   {
       if (isupper(ch))
           upper++;
       else if (islower(ch))
	   lower++;
   }
   printf("大写字母:%lu\n", upper);
   printf("小写字母:%lu\n", lower);
   return 0;
}
