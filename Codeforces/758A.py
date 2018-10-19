from collections import defaultdict
def main():
    n = int(input())
    welfare = list(map(int, input().split()))
    print(len(welfare)*max(welfare) - sum(welfare))

main()