
def main():
    n = int(input())
    lock = input()
    desired = input()
    ans = 0
    for src, dest  in zip(lock, desired):
        x = min(abs(int(src) - int(dest)), abs(10 + int(dest) - int(src)), abs(10 + int(src) - int(dest)) )
        ans += x

    print(ans)
main()