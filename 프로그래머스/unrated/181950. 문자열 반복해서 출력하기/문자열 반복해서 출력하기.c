#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int a;
    scanf("%s %d", s1, &a);
    while (a > 0)
    {
        printf(s1);
        a--;
    }
    return 0;
}