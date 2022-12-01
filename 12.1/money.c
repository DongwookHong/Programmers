#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    int i =0;
    long long sum=0;
    while(++i<= count)
         sum += (price * i);
    return  sum > money ? sum- money :0;
}