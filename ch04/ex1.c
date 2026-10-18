#include<stdio.h>
int main(void) {
   char name[30], xing[30];
   printf("Enter your name:\n");
   scanf("%s",name);
   printf("Enter your xing:\n");
   scanf("%s",xing);
   printf("%s, %s\n",xing, name);
   return 0;
}
