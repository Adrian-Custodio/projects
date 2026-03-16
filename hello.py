""""
def censor(sentence):
    # bad with ***
    return sentence.lower().replace("bad", "***")

def main():
    sentence = input("Enter your sentence: ")
    print(censor(sentence))


main()
"""
"""
def main():
    weight = weightFunc(input("Enter weight: "))
    height = heightFunc(input("Enter height: "))
    print(f"Weight in kg: {weight:.2f}")
    print(f"Height in m: {height:.2f}")

def weightFunc(w):
    num = float(w.strip()[:-2])
    return num * 0.453592


def heightFunc(h):
    num = float(h.strip()[:-2])
    return num * 0.0254


main()


#for i in range(1,int(input())): #More than 2 lines will result in 0 score. Do not leave a blank line also
#    print(i * (10**i - 1) // 9)





def main():
    num = int(input("Enter a number: "))
    if is_even(num):
        print("Even")
    else:
        print("Odd")


def is_even(n):
    return n % 2 == 0

    

main()
"""


name = input("What's your name? ")

match name:
    case "Harry" | "Hermione" | "Ron": 
            print("Gryffindor")
    case "Draco":
                print("Slytherin")
    case _:
                print("Who?")


