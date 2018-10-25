from collections import defaultdict

if __name__ == '__main__':
    n, m = map(int, input().split())
    d = defaultdict(list)
    for i in range(m):
        X = input().split()
        A = X[0]
        B = X[1]
        if len(A) > len(B):
            d[A] = B
            d[B] = B
        else:
            d[A] = A
            d[B] = A

    string = list(input().split())
    for word in string:
        print(d[word],end=" ")
