if __name__ == "__main__":
    n = int(input())
    cnt = 0
    for _ in range(n):
        p, q = (map(int, input().split()))
        if q - p > 1:
            cnt += 1

    print(cnt)

