if __name__ == "__main__":
    n = int(input())
    friends = map(int, input().split())
    gifts = [-1] * (n+1)

    for index, friend in enumerate(friends):
        gifts[friend] = index + 1

    for gift in gifts[1:]:
        print(gift, end = " ")





