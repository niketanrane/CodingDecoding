
def main():
    n = int(input())
    tasks = map(int, input().split())

    police = 0
    crimes = 0
    for task in tasks:
        if task == -1:
            if police > 0:
                police -= 1
            else:
                crimes += 1
                police = 0
        else:
            police += task

    print(crimes)

main()