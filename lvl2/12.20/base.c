char *base(int n)
{
    char *base_2;
    int cnt =0;
    int t = n;
    while (t > 0)
	{
		t /= 2;
		cnt++;
	}

    base_2 = (char *)malloc(sizeof(char) * cnt+1);

    base_2[cnt] = '\0';
    cnt--;
    while (n > 0)
	{
        base_2[cnt--] = (n % 2) + '0';
		n /= 2;
	}
  
    return base_2;
}


int* solution(const char* s) {
    int* answer = (int*)malloc(sizeof(int) * 2);
    char *copy_s = strdup(s);

    int c_len =0;
    int cnt =0;
    int k = 0;
    int remove =0;
    int c_cnt;
   while(1)
   {
        c_len = strlen(copy_s);
        c_cnt =0;
        for(int i =0 ; i < c_len; i++)
        {
            if(copy_s[i] == '0')
            {
                cnt++;
                c_cnt++;
            }
        }
        remove = c_len -c_cnt;
        copy_s = strdup(base(remove));
        if(c_len ==1)
            break;
        k++;     
   }
    answer[0] =k;
    answer[1]= cnt; 
    return answer;
}