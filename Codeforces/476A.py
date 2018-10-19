from math import ceil
def main():
    n, m = map(int, input().split())
    minSteps = ceil(n/2)

    if m > n:
        print(-1)
        return

    print(ceil(minSteps/m)*m)


main()