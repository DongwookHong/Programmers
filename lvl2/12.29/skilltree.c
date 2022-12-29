#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* skill, const char* skill_trees[], size_t skill_trees_len) {
    int ans = 0;
    int len = strlen(skill);
    
    for (int i=0; i<skill_trees_len; i++)
    {
        int k=0;
        int y=0;
        int j =0;
         while (skill_trees[i][j])
        {
            
            if (skill_trees[i][j] == skill[k])
            { 
                if(j >= y)
                {
                    k++;
                    y = j;
                    j=-1;
                }
                else
                {
                    k=0;
                    break;
                }
                
            }
            j++;   
         }
        printf("k : %d\n", k);
        if (k <= len && k > 0)
            ans++;
    }    
    return ans;
}
