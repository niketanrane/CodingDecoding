from math import floor, ceil, log

def main():
    a = int(input())
    ans = a
    if a[0] == "-":
        if int(a[-1]) > int(a[-2]):
            ans = a[:-1]
        else:
            ans = a[:-2] + a[-1]

    if ans == "-0":
        ans = "0"
    print(ans)


main()