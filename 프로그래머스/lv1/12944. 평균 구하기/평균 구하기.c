#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len) {
    double answer = 0;
    int i = 0;
    while (arr_len - 1 >= i)
    {
        answer += arr[i];
        i++;
    }
    answer /= arr_len;
    return answer;
}