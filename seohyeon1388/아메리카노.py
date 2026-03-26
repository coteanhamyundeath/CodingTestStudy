def solution(money):
    answer = [0,0]
    won=5500
    while won <= money:
        answer[0]+=1
        money-=won
    answer[1]=money
    return answer