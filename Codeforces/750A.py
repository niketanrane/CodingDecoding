from math import floor, ceil, log

def main():
    n, k = map(int, input().split())
    left = 240 - k
    minUsed = 0
    tasks = 0
    while minUsed + (tasks+1)*5 <= left and tasks < n:
        minUsed += (tasks + 1) * 5
        tasks += 1

    print(tasks)



main()