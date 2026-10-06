#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {
    srand(time(NULL));
    int secret = rand() % 100 + 1;
    int guess = 0;
    int count = 0;
while (guess != secret){
    count = count + 1;
    scanf("%d", &guess); 
    if (guess < secret) {
    printf("猜小了\n");
}   else if (guess == secret) {
    printf("猜中了!用了%d次\n",count);
}    else  {
    printf("猜大了\n");
}
}
}
