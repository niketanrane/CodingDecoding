
def main():
    s, n = map(int, input().split())

    dragons = []
    for i in range(n):
        (a, b) = map(int, input().split())
        dragons.append((a, b))

    dragons.sort()

    if dragons[0][0] > s:
        print("NO")
        return

    for strength, bonus in dragons:
        if strength < s:
            s += bonus
        else:
            break
    else:
        print("YES")
        return

    print("NO")
    return



main()