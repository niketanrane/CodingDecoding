from math import ceil

def main():
    n = int(input())
    ans = ["Sheldon", "Leonard", "Penny", "Rajesh", "Howard"]
    start = 0
    prev = start
    slot = 0
    while n > start:
        prev = start
        start += 5 * (2**slot)
        slot += 1

    n -= prev
    peopleCnt = 2 ** (slot - 1)
    print(ans[ceil(n/peopleCnt) - 1])


main()