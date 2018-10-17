if __name__ == "__main__":
    str = input()
    str = str.split("WUB")
    ans = [s for s in str if s]
    str = " ".join(ans)
    print(str)

