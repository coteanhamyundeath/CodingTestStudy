N, L = map(int, input().split())

for k in range(L, 101):
    temp = N - k * (k - 1) // 2

    if temp < 0:
        break

    if temp % k == 0:
        x = temp // k
        if x >= 0:
            for i in range(k):
                print(x + i, end=' ')
            break
else:
    print(-1)