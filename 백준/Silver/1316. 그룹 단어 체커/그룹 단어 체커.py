n = int(input())
cnt = 0
for i in range(n):
    w = input()
    for j in range(len(w)-1):
        if w[j] != w[j+1]:
            if w[j+1] in w[:j+1]:
                cnt += 1
                break

print(n-cnt)