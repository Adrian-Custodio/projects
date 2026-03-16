def censor(sentence):
    # bad with ***
    return sentence.lower().replace("bad", "***")

def main():
    sentence = input("Enter your sentence: ")
    print(censor(sentence))


main()











