#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
// want_len은 배열 want의 길이입니다.
// number_len은 배열 number의 길이입니다.
// discount_len은 배열 discount의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int change_str(char * abc)
{
    
    int sum =0;
    for(int i = 0; i < 3; i ++)
    {
        sum += abc[i];
        sum -= 96;
    }
    return sum;
}
int solution(const char* want[], size_t want_len, int number[], size_t number_len, const char* discount[], size_t discount_len) 
{
    int answer = 0;
    int want_num[100] ={0,};
    int totalneed[100] = {0,};
    char * copy;
    for(int i =0 ; i< want_len; i++)
    {
        copy = strdup(want[i]);
        want_num[change_str(copy)]++;
        totalneed[change_str(copy)] = want_num[change_str(copy)] * number[i];
    }
    int t =0;
    while(t < 100)
    {
        if(totalneed[t] != 0)
            printf("%d 토탈 필요한값 ... %d\n", t, totalneed[t]);
        t++;
    }
   
    for(int i =0 ; i<=discount_len - 10; i++)
    {
       
        int *disc = (int *)calloc(100,sizeof(int));
        
        for(int j =i ; j < i + 10; j++)
        {
            copy = strdup(discount[j]);
            disc[change_str(copy)]++;
        }
        t =0; 
        printf("i 의 값은 %d \n",i);
         while(t < 100)
        {
            if( disc[t] != 0)
                printf(" %d주어진값 ... %d\n",t, disc[t]);
            t++;
        }
        int k =0;
        while(k <= 100)
        {
            if(totalneed[k] != 0)
            {
                printf("total %d값은%d\n", k,totalneed[k]);
                 printf("disc %d값은%d\n", k,disc[k]);
                if(totalneed[k] <= disc[k])
                    answer++;
            }
            k++;
        }
       
    }
    return answer;
}


