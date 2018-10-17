
if __name__ == "__main__":
    str = input()
    lower = sum([1 for c in str if c.islower()])
    upper = sum([1 for c in str if c.isupper()])
    #print(lower, upper)

    if upper > lower:
        print(str.upper())
    else:
        print(str.lower())

