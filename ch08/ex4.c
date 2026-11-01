#include <stdio.h>
#include <ctype.h>
int main(void)
{
   int ch;
   int in_word = 0;
   unsigned long words = 0;
   unsigned long letters = 0;
   while((ch = getchar()) != EOF)
   {
      if (isalpha(ch))
      {
	letters++;
        if (!in_word)
        {
          words++;
	  in_word = 1;
	}
      }
      else
      {
	in_word = 0;
      }
   }
   if (words > 0)
     printf("平均每个单词的字母数：%.2f\n", (double)letters / words);   
   printf("字母总数：%lu\n", letters);
   printf("单词总数：%lu\n", words);
   return 0;
}   
