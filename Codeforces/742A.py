n = int(input())
last = [8,4,2,6]
if n== 0:
    print(1)
    exit()

rem = n % 4
if n % 4 == 0:
    print(last[3])
    exit()
print(last[rem-1])
exit()