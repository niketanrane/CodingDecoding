from math import sqrt
def main():
    n = int(input())
    ans = bin(n).count('1')
    print(ans)
main()