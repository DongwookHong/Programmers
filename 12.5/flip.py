def solution(n):
    answer = ''

    while n > 0:			
        n, b = divmod(n,3)	# n을 3으로 나눈 몫과 나머지 a , b에저장
        answer += str(b) # 배열에 저장 
    return int(answer, 3) # 진법변환 