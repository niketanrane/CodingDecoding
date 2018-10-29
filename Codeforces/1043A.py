from math import ceil
def main():
    n = int(input())
    a = list(map(int, input().split()))
    s = sum(a)
    m = max(a)
    if m*n - s > s:
        print(m)
        exit()
    else:
        ans = ceil((2*s + 1)/n)
        print(ans)
        exit()

    return


main()