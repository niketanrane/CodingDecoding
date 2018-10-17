if __name__ == "__main__":
    n, m = map(int, input().split())
    puzzles = sorted(list(map(int, input().split())))

    ans = 1000
    for i in range(0, m - n + 1):
        ans = min(ans, puzzles[i+n-1] - puzzles[i])

    print(ans)






