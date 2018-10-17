if __name__ == "__main__":
    n = int(input())
    steps = 0
    for i in range(5, 0, -1):
        curStep = n // i
        n -= curStep * i
        steps += curStep

    print(steps)