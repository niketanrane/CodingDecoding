

def main():
    n, d = map(int, input().split())
    t = list(map(int, input().split()))
    total = (n - 1)* 10 + sum(t)
    if total > d:
        print("-1")
        return

    ans = (n - 1) * 2 + (d - total)//5
    print(ans)



main()