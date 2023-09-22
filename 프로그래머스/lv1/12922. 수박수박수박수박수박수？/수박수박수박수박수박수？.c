#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(sizeof(char) * 3 * n + 1);
    int i = 1;
    answer[0] = '\0';
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            strcat(answer, "박");
            i++;
        }
        else
        {
            strcat(answer, "수");
            i++;
        }
    }
    return answer;
}