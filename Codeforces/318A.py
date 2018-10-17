from math import floor, ceil

if __name__ == "__main__":
    n, k = map(int, (input().split()))
    c = ceil(n/2)
    if k <= c:
        print(2*k - 1)
    else:
        print(2 * (k - c))

