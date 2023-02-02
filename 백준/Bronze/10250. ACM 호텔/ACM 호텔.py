T = int(input())

for i in range(T):
    H, W, N = map(int, input().split())
    h = (N % H) * 100
    w = N // H + 1
    if N % H == 0:
        h = H * 100
        w = N // H
    print(h+w)