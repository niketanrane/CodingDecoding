from math import floor, ceil

def main():
    n, m, a, b = (map(int, input().split()))
    ans = min(a*n, ceil(n/m)*b, floor(n/m)*b + a*(n - m*floor(n/m)))
    print(ans)
main()