
def main():
    n , l = map(int, input().split())
    lanterns = list(map(int, input().split()))
    lanterns.sort()
    maxDist = 0
    for i in range(n-1):
        maxDist = max(lanterns[i+1] - lanterns[i], maxDist)

    ans = max(lanterns[0], l - lanterns[n-1], maxDist/2)
    print(ans)
    return


main()