import sys
import collections
N = int(sys.stdin.readline())
#for i in range(N):
#    list.append(i+1)
    #print(list[i])
dequelist = collections.deque([i for i in range(N)])
while len(dequelist) > 1:
    dequelist.popleft()
    dequelist.append(dequelist[0])
    dequelist.popleft()
print(dequelist[0]+1)