
def main():
    n = int(input())
    cnt = n // 2
    print(cnt)
    if n % 2:
        print(3, end = " ")
        n -= 3

    print("2 "*(n//2))
    return


main()