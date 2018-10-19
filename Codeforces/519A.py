
def main():
    chess = {'Q':9, 'R':5, 'B':3, 'N':3, 'P':1, 'K':0, 'q':-9, 'r':-5, 'b':-3, 'n':-3, 'p':-1, 'k':0, '.':0}
    ans = 0
    for i in range(8):
        row = input()
        for r in row:
            ans += chess[r]

    if ans == 0:
        print("Draw")
    elif ans > 0:
        print("White")
    else:
        print("Black")

main()