lst = []
l = []

for i in range(10):
    a = int(input())
    lst.append(a)
for i in range(10):
    b = int(lst[i] % 42)
    if b not in l:
        l.append(b)
print(len(l))
