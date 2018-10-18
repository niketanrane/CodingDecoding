from math import ceil

def main():
    n = int(input())
    drinks = list(map(int, input().split()))
    ans = sum(drinks) / len(drinks)
    print(ans)
    return

main()