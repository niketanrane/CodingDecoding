def main():
    n = int(input())
    children = list(map(int, input().split()))
    batch = [[] for i in range(4)]
    for index, child in enumerate(children,1):
        batch[child].append(index)
    ans = min([len(batch[child]) for child in range(1,4)])
    print(ans)
    for a, b, c in zip(batch[1], batch[2], batch[3]):
        print(a, b, c)


main()