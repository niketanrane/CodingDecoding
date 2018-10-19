from collections import defaultdict

def main():
    n, k = map(int, input().split())
    arr = list(input().split())

    d = defaultdict(int)
    for i in arr:
        d[i] += 1

    ans = 0
    for i in range(5-k+1):
        ans += d[str(i)]

    print(ans//3)

main()