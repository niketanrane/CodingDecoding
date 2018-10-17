
if __name__ == "__main__":
    n = input()
    m = input()

    length = len(n)
    ans = []
    for i in range(length):
        ans.append(int(n[i])^int(m[i]))

    ans = "".join(str(x) for x in ans)
    print(ans)





