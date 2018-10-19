from math import floor, ceil, log

def main():
    n = int(input())

    total = 0
    i = 0
    while total <= n:
        i += 1
        total += i*(i+1)//2
    print(i-1)

main()