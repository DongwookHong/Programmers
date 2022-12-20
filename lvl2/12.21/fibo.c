#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int nums[1000000] = {0,};
    nums[0] = 0;
    nums[1] = 1;
    nums[2] = 1;

    for (int i = 3; i <= n; i++) {
        nums[i] = (nums[i-1] + nums[i-2]) %1234567;
    }
    return nums[n];
}