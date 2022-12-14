#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// ascii  65-90  대문자 97 122 소문자 
char *swap(char *s)
{   int i =0;
    int temp=0;
    for(int i =0; i<strlen(s);i++)
    {
        for(int j =i+1; j<strlen(s);j++)
            {
                if(s[i]<s[j])
                {
                    temp = s[i];
                    s[i] = s[j];
                    s[j]= temp;
                }
            }
    }
 return s;
}
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    swap(s);
    char* answer = (char*)malloc(s+1);
    answer =s;
    return answer;
}