#include <stdio.h>

int main()
{
    int n = 10;
    int m;
    int numbers[10];
    int i, j, k;

    // 读入给定的数字
    for (j = 0; j < n; j++) {
        scanf("%d", &numbers[j]);
    }
    for (j = 0; j < 9; j++) { // bubble sort
        for (k = 0; k < 9 - j; k++) {
            if (numbers[k] < numbers[k + 1]) {
                m              = numbers[k];
                numbers[k]     = numbers[k + 1];
                numbers[k + 1] = m;
            }
        }
    }
    for (i = 0; i < 10; i++) { // print sorted numbers[]
        printf("%d", numbers[i]);
        if (i < 9) {
            printf(" ");
        }
    }
    return 0;
}