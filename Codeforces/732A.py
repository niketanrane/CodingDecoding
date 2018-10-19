from math import floor, ceil, log

def main():
    k, r = map(int, input().split())
    k = k % 10
    i = 1
    change = k
    while change != r and change:
        i += 1
        change = (k * i) % 10

    print(i)



main()