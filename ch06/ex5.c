#include <stdio.h>
int main(void)
{
   int row, rows, i;
   char c;
   char letter;
   printf("Enter a word(A-Z):\n");
       scanf("%c",&letter);
       rows = letter - 'A' + 1;
   for (row = 0; row < rows; row++)
   {
       for (i = 0; i < (rows - row - 1); i++)
	   putchar(' ');
       for (c = 'A'; c <= 'A'+ row; c++)
	   putchar(c);
       for (c = 'A' + row - 1; c >= 'A'; c--)
	   putchar(c);
       printf("\n");
    }
   return 0;
}
