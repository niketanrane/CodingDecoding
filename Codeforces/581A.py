from math import floor, ceil, log

def main():
    a, b = map(int, input().split())
    print(min(a,b), (max(a, b)- min(a,b))//2)

main()