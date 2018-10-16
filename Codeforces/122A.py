__author__ = "niketanrane"

if __name__ == "__main__":
    n = int(input())
    s = {4 ,7}
    luckyNum = []
    for i in range(1001):
        a = set([int(x) for x in str(i)])
        if a.issubset(s):
            luckyNum.append(i)
    #print(luckyNum)

    for num in luckyNum:
        if not (n % num):
            print("YES")
            break
    else:
        print("NO")

