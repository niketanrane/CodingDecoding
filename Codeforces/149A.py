from math import ceil

def main():
    k = int(input())
    month = list(reversed(sorted(map(int, input().split()))))
    #print(month)

    h = 0
    for i,m in enumerate(month):
        if h >= k:
            print(i)
            break
        h += m
    else:
        if h >=k:
            print(len(month))
        else:
            print("-1")

    return

main()