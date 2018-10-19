from collections import defaultdict
def main():
    n, m  = map(int, input().split())
    d = defaultdict(int)
    for i in range(n):
        r = input().split()
        for k in r:
            d[k] += 1

    if d['C'] or d['M'] or d['Y']:
        print("#Color")
    else:
        print("#Black&White")

main()