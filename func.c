#include <stdio.h>

int max3(int a, int b, int c);

int main(void) {
    printf("%d\n", max3(3, 7, 2));
    printf("%d\n", max3(10, 1, 5));

    int scores[5] = {90, 85, 77, 60, 100};
    printf("%d\n", scores[0]);
    printf("%d\n", scores[4]);

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum = sum + scores[i];
    }
    printf("平均分：%.1f\n", sum / 5.0);

    char name[50];
    printf("请输入名字:");
    fgets(name, 50, stdin);
    printf("你好, %s", name);

    return 0;
}

int max3(int a, int b, int c) {
    int m = a;
    if (b > a) m = b;
    if (c > m) m = c;
    return m;
}
