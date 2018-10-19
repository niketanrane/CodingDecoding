
def main():
    n, t = map(int, input().split())

    ans = t * (10**(n-1))
    if t == 10:
        ans = ans // 10

    if ans % t:
        print("-1")
    else:
        print(ans)

main()