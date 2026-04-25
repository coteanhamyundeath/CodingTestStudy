n = int(input())
year = list(map(int, input().split()))
x = year[1] - year[0]

print(year[-1]+x)