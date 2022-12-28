#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int check[8] = {0,};

int	check_f(int *arr, int row, int tire)
{
    if (arr[0] > tire || arr[1] > tire)
			return (0);

	return (1);
}

int back(int **arr, int row,int dep,int tire)
{
    int cnt;
    int temp;
   
       
    if(cnt < dep)
        cnt = dep;
    
    if(cnt == row)
        return cnt;
    
    for(int i =0; i < row; i++)
    {
        
        
         while (i < row && check[i])
             i++;


        temp = check_f(arr[i],row,tire);
        
        if(temp)
        {
            check[i] =1;
            back(arr,row,dep+1,tire-arr[i][1]);
            check[i] = 0;
            cnt++;
        }
        else if(!temp)
        {
            if(i == row-1)
                return 0;
        }
        
    }
    
    
    return cnt;         
}            
               
      
// dungeons_rows는 2차원 배열 dungeons의 행 길이, dungeons_cols는 2차원 배열 dungeons의 열 길이입니다.
int solution(int k, int** dungeons, size_t dungeons_rows, size_t dungeons_cols) 
{
    int answer = 0;
    answer = back(dungeons,dungeons_rows,0,k);
    return answer;
}
