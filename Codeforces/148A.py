if __name__ == "__main__":
    a = int(input())
    b = int(input())
    c = int(input())
    d = int(input())
    n = int(input())

    ans = 0
    for i in range(1, n+1):
        if not ((i % a) and (i % b) and (i % c) and ( i % d)):
            ans += 1
    print(ans)






