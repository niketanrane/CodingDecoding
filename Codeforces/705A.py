from math import ceil

def main():
    n = int(input())
    hateEnd = "I hate it"
    loveEnd = "I love it"
    hate = "I hate that "
    love = "I love that "

    ans = ""
    for i in range(n-1):
        if i % 2:
            ans += love
        else:
            ans += hate

    if n % 2:
        ans += hateEnd
    else:
        ans += loveEnd

    print(ans)
    return

main()