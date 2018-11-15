from math import sqrt

def main():
    n = int(input())
    for i in range(n):
        num = int(input())
        if num**2 - 4*num < 0:
            print("N")
            continue
        x = sqrt(num**2 - 4*num)
        a = (num + x ) / 2;
        b = (num - x) / 2;
        print("Y {} {}".format(a, b))

    return

main()