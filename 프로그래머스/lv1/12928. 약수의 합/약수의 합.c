#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int i = 1;
    while (n >= i)
    {
        if (n % i == 0)
        answer += i;
        i++;
    }
    return answer;
}