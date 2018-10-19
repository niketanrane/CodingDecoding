from math import floor, ceil, log

def gcd(a, b):
    if a < b:
        a, b = b, a
    if a%b == 0:
        return b
    return gcd(b, a%b)

def main():
    a, b, n = map(int, input().split())
    game = [a, b]
    turn = 0
    while(n > 0):
        if turn % 2:
            g = gcd(n, b)
            if g > n:
                break
            n -= g
        else:
            g = gcd(n, a)
            if g > n:
                break
            n -= g
        turn += 1

    if turn % 2:
        print(0)
    else:
        print(1)


main()