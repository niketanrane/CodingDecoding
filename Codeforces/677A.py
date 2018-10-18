from math import ceil

if __name__ == "__main__":
    n, h = map(int, input().split())
    ans = 0
    heights = map(int, input().split())
    ans = sum([ceil(x/h) for x in heights])
    print(ans)







