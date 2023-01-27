lst = []
for i in range(28):
    a = int(input())
    lst.append(a)

for i in range(1,31):
    if i not in lst:
        print(i)
