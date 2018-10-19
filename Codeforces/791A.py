from math import floor, ceil, log

def main():
    a, b = (map(int, input().split()))
    ans = floor(log(b/a)/log(3/2) + 1)
    print(ans)
main()