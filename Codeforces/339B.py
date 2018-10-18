if __name__ == "__main__":
    n, m = map(int, input().split())
    house = list(map(int, input().split()))
    house.insert(0, 1)
    ans = 0
    for i in range(1, m+1):
        if house[i] >= house[i-1]:
            ans += house[i] - house[i-1]
        else:
            ans += (n - house[i-1] + house[i])

    print(ans)