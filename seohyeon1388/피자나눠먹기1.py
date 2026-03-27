def solution(n):
    answer = 0
    for i in range(n):
        answer += 1
        if answer * 7 >= n:
            break
    return answer

        