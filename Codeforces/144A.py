
if __name__ == "__main__":
    n = int(input())
    soldiers = list(map(int, input().split()))

    maxHeight = 0
    minHeight = 101

    maxIndex = 0
    minIndex = 0
    for i, height in enumerate(soldiers):
        if height > maxHeight:
            maxIndex = i
            maxHeight = height

        if height <= minHeight:
            minIndex = i
            minHeight = height

    #print(maxHeight, maxIndex, minHeight, minIndex)
    ans = maxIndex + (n-1-minIndex)

    if maxIndex > minIndex:
        ans -= 1

    print(ans)






