def main():
    n = int(input())
    s = []
    for i in range(n):
        strng = input()
        s.append(list(strng))

    for row in s:
        seatleft = "".join(row[:2])
        seatright = "".join(row[3:])
        if seatleft == 'OO':
            row[:2] = '++'
            break
        elif seatright == 'OO':
            row[3:] = '++'
            break
    else:
        print("NO")
        return

    print("YES")
    for row in s:
        print("".join(row))
main()