if __name__ == "__main__":
    k, n, w = map(int, input().split())
    ans = k*w*(w+1)//2 - n
    print(max(0, ans))

