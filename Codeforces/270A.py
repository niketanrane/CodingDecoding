
def main():
    n = int(input())
    for _ in range(n):
        A = int(input())
        if 360 % ( 180 - A):
            print("NO")
        else:
            print("YES")
main()