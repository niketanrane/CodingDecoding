from collections import defaultdict

def main():
    n = int(input())
    rating = list(map(int, input().split()))

    mn = rating[0]
    mx = rating[0]
    cnt = 0
    for rate in rating[1:]:
        if rate > mx:
            cnt += 1
            mx = rate
        elif rate < mn:
            cnt += 1
            mn = rate

    print(cnt)
main()