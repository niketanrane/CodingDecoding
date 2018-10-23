

def main():
    n, m, k = map(int, input().split())
    armies = []
    for i in range(m+1):
        armies.append(int(input()))

    fedor = armies[-1]
    cnt = 0
    for army in armies[:-1]:
        if bin(fedor ^ army).count("1") <= k:
            cnt += 1
    print(cnt)
    return

main()


