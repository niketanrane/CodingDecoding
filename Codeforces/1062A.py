from math import sqrt

def main():
    n = int(input())
    a = list(map(int, input().split()))

    l = 0
    maxlen = 0
    i = 0
    while i < n:
        b = [a[i]]
        cnt = 1
        j = i + 1
        while j < n and a[j] - a[j-1] == 1:
            b.append(a[j])
            j += 1
        cnt = len(b) - 2
        if b[0] == 1:
            cnt += 1
        if b[-1] == 1000:
            cnt += 1
        if cnt > maxlen:
            maxlen = cnt
        b = []
        i = j

    print(maxlen)


    return

main()