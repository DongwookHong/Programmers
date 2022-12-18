def solution(n):
    answer = -1
    num = n **(0.5) # 파이썬 제곱근
    
    if(num == int(num)):
        answer = (num+1) **2 # 제곱 함수
    return answer