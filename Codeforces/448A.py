from math import ceil

def main():
    a = sum(map(int, input().split()))
    b = sum(map(int, input().split()))
    n = int(input())

    if ceil(a/5) + ceil(b/10) <= n:
        print("YES")
    else:
        print("NO")

    return

main()