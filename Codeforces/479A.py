if __name__ == "__main__":
    a = int(input())
    b = int(input())
    c = int(input())

    ans = max(a + b*c, (a+b)*c, a*b*c, a*(b+c), a+b+c, a*b + c)
    print(ans)






