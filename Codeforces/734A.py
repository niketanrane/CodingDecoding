
if __name__ == "__main__":
    n = int(input())
    chess = input()
    anton = chess.count("A")
    danik = chess.count("D")

    if anton > danik:
        print("Anton")
    elif danik > anton:
        print("Danik")
    else:
        print("Friendship")






