if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().split()))
    arr = list(reversed(sorted(arr)))
    total = sum(arr)
    cur = 0

    cnt = 0
    for coin in arr:
        cur += coin
        cnt += 1
        if cur > total /2:
            break
    print(cnt)