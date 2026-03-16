def main():
    x = input("What time is it? ")
    comp = convert(x)
    if 7 <= comp <= 8:
        print("breakfast time")
    elif 12 <= comp <= 13:
        print("lunch time")
    elif 18 <= comp <= 19:
        print("dinner time")

def convert(time):
    hrs, mins = time.split(":")
    hrs = int(hrs)
    mins = int(mins)
    mins = mins / 60
    return hrs + mins


if __name__ == "__main__":
    main()
