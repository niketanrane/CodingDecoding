
def main():
    n, c = map(int, input().split())
    words = list(map(int, input().split()))
    ans = 1
    for i, word in enumerate(words[1:], 1):
        if words[i] - words[i-1] > c:
            ans = 1
        else:
            ans += 1

    print(ans)
    return

main()