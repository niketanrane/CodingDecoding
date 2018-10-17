if __name__ == "__main__":
    n = int(input())
    seq = list(map(int, input().split()))

    ans = 1
    cnt = 1
    for i in range(n-1):
        if seq[i+1] < seq[i]:
            ans = max(ans, cnt)
            cnt = 1
        else:
            cnt += 1
    ans = max(ans, cnt)
    print(ans)





