c = int(input())
for i in range(c):
    total = 0
    a = 0
    lst = list(map(int, input().split()))
    for j in range(1, lst[0] + 1):
        total += lst[j]
    #print(total)
    avg = float(total / lst[0])
    #print(avg)
    for k in range(1,lst[0]+1):
        if float(lst[k]) > avg:
            a += 1
    print(f"{a / lst[0] * 100:.3f}%")