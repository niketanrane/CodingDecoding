from collections import defaultdict

def main():
    length = 10**6
    isPrime = [True] * length

    isPrime[0] = isPrime [1] = False
    primeSqList = defaultdict(str)
    for i in range(2, 10**6):
        if isPrime[i]:
            primeSqList[(str(i*i))] = 1
            for k in range(2*i, 10**6, i):
                isPrime[k] = False

    n = int(input())
    arr = list(input().split())

    for i in arr:
        if i in primeSqList:
            print("YES")
        else:
            print("NO")

main()