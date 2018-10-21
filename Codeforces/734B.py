
def main():
    n1, n2, n3, n4 = map(int, input().split())

    ans = 0
    ans += 256 * min(n1, n3, n4)
    n1 -= min(n1, n3, n4)
    ans += 32 * min(n1, n2)
    print(ans)
    return

main()