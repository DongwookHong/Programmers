#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int  abc(char **arr, char *dirs, int len)
{
    
    int cnt =0;
    int centerx =5;
    int centery =5;
  
    char spot[15][15]={0,};
    char current[15][15]={0,};
 
            for(int move =0 ; move < len ; move ++)
            {
               
                if(dirs[move] == 'U')
                {      
                   
                    spot[centerx][centery] = 1;
                    centery +=1;
                    current[centerx][centery] = 3;
                   
                }
                else if(dirs[move] == 'D')
                {
      
                      spot[centerx][centery] =1;
                      centery -=1;
                      current[centerx][centery] = 3;
                     
                }
                else if(dirs[move] == 'R')
                { 
                   
                    spot[centerx][centery] =1;    
                      centerx +=1 ;
                      current[centerx][centery] = 3;
                     
                }
                else if(dirs[move] == 'L')
               {
                        spot[centerx][centery] =1; 
                        centerx -= 1;
                         current[centerx][centery] = 3;
                     
                }
                if((centerx >=0 && centerx <= 10) && (centery >=0 && centery <= 10))
                {
                   // if((spot[centerx][centery] == 1 && current[centerx][centery] != 3) ||  
                     //  (spot[centerx][centery] !=1 && current[centerx][centery] == 3) ||
                       //(spot[centerx][centery] !=1 && current[centerx][centery] != 3) )
                    {
                        cnt++;
                    }
                }
             }
    return cnt;
    
}


// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* dirs) {
    int answer = 0;
    char arr[15][15] = {0,};
    int len = strlen(dirs);
      printf("%d" ,len );
    answer = abc(arr, dirs, len);
    return answer;
}
