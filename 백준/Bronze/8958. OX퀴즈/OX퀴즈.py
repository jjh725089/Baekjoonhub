n = int(input())
for i in range(n):
    cnt = 0
    lst = list(str(input())) #str을 리스트로
    total = 0
    for i in range(len(lst)): #리스트의 길이로
        if lst[i] == 'O':
            cnt += 1
            total += cnt
        else:
            cnt = 0
    print(total)