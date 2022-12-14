num = int(input())
#if num < 10:
#    num = num * 10
newnum = num
i = 0
while True:
    num1 = newnum // 10
    num2 = newnum % 10
    if (num1 + num2 >= 10):
        newnum = num2 * 10 + (num1 + num2 - 10)
    else:
        newnum = num2 * 10 + (num1 + num2)
    i += 1
    #print(newnum)
    if newnum == num:
        print(i)
        break
