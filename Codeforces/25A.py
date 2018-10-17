
if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().split()))

    lastEven = -1
    lastOdd = -1
    countEven = 0
    countOdd = 0

    for i, a in enumerate(arr):
        if a % 2:
            countOdd += 1
            lastOdd = i
        else:
            countEven += 1
            lastEven = i


    if countEven > countOdd:
        print(lastOdd+1)
    else:
        print(lastEven+1)






