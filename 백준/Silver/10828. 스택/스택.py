import sys
N = int(sys.stdin.readline())
l = []
for i in range(N):
    a = sys.stdin.readline().split()
    if a [0] == 'push':
        l.append(a[1])
    elif a[0] == 'pop':
        if len(l) == 0:
            print(-1)
        else:
            print(l.pop(-1))
    elif a[0] == 'size':
        print(len(l))
    elif a[0] == 'empty':
        if len(l) == 0:
            print(1)
        else:
            print(0)
    elif a[0] == 'top':
        if len(l) == 0:
            print(-1)
        else:
            print(l[-1])