#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int i = 100000000;
    while (i >= 1)
    {
        answer += n / i;
        n -= (n / i) * i;
        i /= 10;
    }
    return answer;
}