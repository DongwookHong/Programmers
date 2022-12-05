def solution(numbers):
    answer = list()
    
    for i in range(len(numbers)):
        for j in range(i+1,len(numbers)): #i +1 넘에길이만큼돌기 
            if (numbers[i]+numbers[j]) not in answer: #만약에 두수의 합이 answer list 배열에 없으면
                    answer.append(numbers[i]+numbers[j]) #append -> 배열마지막에   추가 
    answer.sort()             #sort 정렬  
    return answer