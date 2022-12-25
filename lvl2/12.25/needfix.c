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



int main() {
  char *trb=trans(437674,3);
  char num[100000] ={0,};
  int len = strlen(trb);
  int answer =0;
  int y =0;
   int z =0;
//   printf("%s", trb);
  for(int i = 0; i < len; i++)
  {
      int count=0; 
      int cnt =0;
      
      if (i == '0')
        z = i+1; 
     
      while(trb[z] != '0')
      {
          cnt++;
          z++;
      }
       printf("%d\n",cnt);
      memcpy(num,trb,cnt);
      y = atoi(num);
     
      // printf("%d\n",y);
      for(int j =1; j <= y; j++)
      {
            if(y%j==0)
              count++;
      }
     
      if(count ==2)
            answer++;
      memset(num,0,cnt);

  }
   printf("%d",answer);
   return answer;
}
