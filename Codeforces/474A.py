from math import ceil
def main():
    s = list("qwertyuiopasdfghjkl;zxcvbnm,./")
    side = input()
    if side == "R":
        adjust = -1
    else:
        adjust = 1

    str = input()
    ans = ""
    for ch in str:
        num = s.index(ch)
        ans += s[num+adjust]

    print(ans)

main()