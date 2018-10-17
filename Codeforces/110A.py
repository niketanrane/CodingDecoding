if __name__ == "__main__":
    num = input()
    cnt = num.count('4') + num.count('7')
    if cnt in [4, 7]:
        print("YES")
    else:
        print("NO")



