if __name__ == "__main__":
    n = int(input())
    home = [0] * 101
    guest = [0] * 101

    for i in range(n):
        a, b = map(int, input().split())
        home[a] += 1
        guest[b] += 1

    ans = 0
    for h, g in zip(home, guest):
        ans += h*g

    print(ans)







