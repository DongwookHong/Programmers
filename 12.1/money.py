def solution(price, money, count):
    sum =0
    for i in range(1,count+1): // 파이썬 for문  1 부터 cnt -1 까지돈다 
        sum += price * i
    if sum >= money:
        answer = sum - money
    else :
        answer =0
        
    return answer

