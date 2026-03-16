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