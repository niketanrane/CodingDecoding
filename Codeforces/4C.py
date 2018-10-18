from collections import defaultdict

def main():
    n = int(input())
    d = defaultdict(str)
    for i in range(n):
        string = input()
        if d[string] == '':
            print("OK")
            d[string] = 0
        else:
            d[string] += 1
            print(string, d[string], sep = "")

main()