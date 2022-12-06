#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int prime(int n)
{
   int i = 0;
   int len = n/2;
   if(n <=1)
        return 0;
    for(int i =2 ; i <= len; i++)
    {
        if(n %i == 0)
            return 0;
    }
    return 1;
}

// nums_len은 배열 nums의 길이입니다.
int solution(int nums[], size_t nums_len) {
    int answer = 0;
    int sum =0;
    for(int i=0; i<nums_len-2;i++)
    {
        for(int j =i+1; j< nums_len-1; j++)
        {
            for(int c= j+1; c<nums_len; c++)
            {
                sum = nums[i]+nums[j]+ nums[c];
                if(prime(sum) == 1)
                    answer++;
            }
        }
    }
    return answer;
}

int main(){
    int arr[10] = {1,2,3,4};

    printf("%d" , solution(arr,4));
}