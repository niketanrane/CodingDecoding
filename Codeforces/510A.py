if __name__ == "__main__":
    n, m = map(int, input().split())

    for i in range(1, n+1):
        if i % 2:
            print("#"*m)
        elif i % 4:
            print("." * (m-1), end = "")
            print("#")
        else:
            print("#", end = "")
            print("." * (m - 1))


