from math import ceil
def main():
    n = list(map(int, input().split()))
    s = sum(n)

    if s % len(n) or s== 0:
        print("-1")
    else:
        print(s//len(n))



main()