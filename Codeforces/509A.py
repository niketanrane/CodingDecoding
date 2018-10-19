from math import ceil

def val(r, c):
    if r < 1 or c < 1:
        return 0
    if r == 1 or c == 1:
        return 1

    return val(r, c-1) + val(r-1, c)

def main():
    n = int(input())
    print(val(n,n))

main()