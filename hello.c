# include <stdio.h>
int main(void) {
    int age = 20;
    double pi = 3.14;
    char grade = 'A';
    printf("age = %d\n", age);
    printf("pi = %f\n", pi);
    printf("grade = %c\n",grade);
    printf("sizeof(int) = %zu\n",sizeof(int));
    printf("sizeof(double) = %zu\n", sizeof(double));
    printf("sizeof(char) = %zu\n",sizeof(char)); 
    return 0;
}
