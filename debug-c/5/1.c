#include <stdio.h>
#include <string.h>
void swap(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int i;//intermediate variable
    int j;
    int k;
    int l;
    char name[10][21];
    char temp;
    for (i = 0; i < 10; i++) {//input
        scanf("%s", name[i]);
    }
    for (j = 0; j < 10; j++) {
        for (k = 0; k < 9 - j; k++) {
            if (strcmp(name[k], name[k + 1]) >= 0) {
                for (l = 0; l < 21; l++) {//swap one by one
                    swap(&name[k][l], &name[k + 1][l]);
                }
            }
        }
    }
    int m;
    for (m = 0; m < 10; m++) {//output
        printf("%s", name[m]);
        if (m != 9) {
            printf("\n");
        }
    }
    return 0;
}