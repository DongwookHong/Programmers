#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char *trans(int n , int k)
{
    int a = n;
    int cnt =0;
    char *base;
    
    while(a > 0)
    {
        a/= k;
        cnt++;
    }
   
    
    base = (char *)malloc(sizeof(char)* cnt+1);
    
    base[cnt--] = '\0';
  
    while(n > 0)
    {
        base[cnt--]= (n % k) + '0';
        n /= k;
    }
    return base; 
}

int prime(long long num)
{
   
    if( num < 2)
        return 0;
    for(long long i =2; i *i<= num; i++)
    {
        if(!(num%i))
            return 0;
    }
    return 1;
}


int solution(int n, int k) {
  char *trb=trans(n,k);
  char copy[20]; //포인터가 아니라 배열 선언을 하는이유느 시간복잡도 단축 
  int len = strlen(trb);
  int answer =0;
  int cnt =0;
    
      
  for(int i = 0; i < len; i++)
  {
      memset(copy,0,20); // calloc 이아니라 memset 사용 시간단축
      cnt=i;
      while (trb[i] != '0'&& trb[i])
          i++;
      
      memcpy(copy,&trb[cnt],i-cnt);
    
      if (prime(atoll(copy)))
        answer++;       
  }
  return answer;
}
