
def main():
    s = input()
    a = s.find("AB")
    b = s.find('BA')
    if a == -1 or b == -1:
        print("NO")
        return
    #print(s[a+2:], s[b+2:])
    if s[a+2:].find("BA") != -1 or s[b+2:].find("AB") != -1:
        print("YES")
        return

    print("NO")
    return

main()