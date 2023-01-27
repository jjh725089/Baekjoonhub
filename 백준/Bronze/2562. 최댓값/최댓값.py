lst =[]
for i in range(9):
    l = int(input())
    lst.append(l)

for i in range(9):
    if max(lst) == lst[i]:
        print(max(lst))
        print(i+1)
