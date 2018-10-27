
def main():
    n = int(input())
    a = list(map(int, input().split()))
    mn = a[0]
    mx = a[-1]

    print(a[1]- a[0], mx - a[0], sep = " ")
    for i in range(1, n-1):
        x1 = a[i] - a[i-1]
        x2 = a[i+1] - a[i]
        print(min(x1, x2), max(a[i] - mn, mx - a[i]), sep = " ")

    print(a[-1] - a[-2], a[-1] - mn, sep = " ")
    return


main()