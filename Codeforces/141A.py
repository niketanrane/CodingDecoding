if __name__ == "__main__":
    guest = input()
    host = input()
    total = sorted(input())

    guest += host
    guest = sorted(guest)
    if guest == total:
        print("YES")
    else:
        print("NO")