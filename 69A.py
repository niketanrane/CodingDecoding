if __name__ == "__main__":
    n = int(input())
    arr = []
    for _ in range(n):
        arr.append(list(map(int, input().split())))

    x = sum([a[0] for a in arr])
    y = sum([a[1] for a in arr])
    z = sum([a[2] for a in arr])
    if not (x | y | z):
        print("YES")
    else:
        print("NO")

