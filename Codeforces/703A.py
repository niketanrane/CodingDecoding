from math import ceil
def main():
    n = int(input())
    ans = 0
    for i in range(n):
        a, b = map(int, input().split())
        if a > b:
            ans += 1
        elif a < b:
            ans -= 1
        else:
            pass
    if ans > 0:
        print("Mishka")
    elif ans < 0:
        print("Chris")
    else:
        print("Friendship is magic!^^")

main()