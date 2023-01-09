from collections import deque
from sys import stdin

num = int(stdin.readline())
for _ in range(num):
    N, M = map(int,stdin.readline().split())
    list = deque(map(int,stdin.readline().split()))
    cnt = 0
    while list:
        top = max(list)
        M -= 1
        pop = list.popleft()
        if top != pop:
            list.append(pop)
            if M < 0:
                M = len(list)-1
        else:
            cnt+=1
            if M == -1:
                print(cnt)
                break