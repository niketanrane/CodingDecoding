
if __name__ == "__main__":
    n = int(input())
    x = set(list(map(int, input().split()))[1:])
    y = set(list(map(int, input().split()))[1:])
    total = x | y

    print(["I become the guy.", "Oh, my keyboard!"][not len(total) == n])




