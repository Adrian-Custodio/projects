def main():
    difficulty = input("Enter difficulty: ")
    if not (difficulty == "Difficult" or difficulty == "Casual"):
        print("Enter valid difficulty.")
        return
    
    players = input("Enter number of players: ")
    if not (players == "Single-player" or players == "Multiplayer"):
        print("Enter valid number of players")
        return
    

    if difficulty == "Difficult":
        if players == "Multiplayer":
            recommend("Poker")
        elif players == "Single-player":
            recommend("Klondike")
    elif difficulty == "Casual":
        if players == "Multiplayer":
            recommend("Hearts")
        elif players == "Single-player":
            recommend("Spades")
            

def recommend(s):
    print("I think you would like,", s)


main()