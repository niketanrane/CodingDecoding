if __name__ == "__main__":
    str = input()
    if max([ord(x) for x in str]) <= 90:
        str = str.swapcase()
    elif ord(str[0]) > 90 and max([ord(x) for x in str[1:]+"A"]) <= 90:
        str = str.swapcase()

    print(str)