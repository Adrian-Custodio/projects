"""
len()
range()




def main():
    number = get_number()
    meow(number)


def get_number():
    while True:
        n = int(input("What's n? "))
        if n > 0:
            return n



def meow(n):
    for _ in range(n):
        print("meow")


main()

~~~~~~~~~~~~~~~~~
# LIST
# useful code
students = ["Hermione", "Harry", "Ron"]
for i in range(len(students)):
    print(i+1, students[i])
~~~~~~~~~~~~~~~~~~

# DICT, associate one value with another, {}
# keys and values
# something with something else

students = {
            "Hermione": "Gryffindor",
            "Harry": "Gryffindor",
            "Ron": "Gryffindor",
            "Draco": "Slytherin",
            }

for student in students:
    print(student, students[student], sep=", ")
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# list of dicts
students = [
    {"name": "Hermione", "house" : "Gryffindor", "patronus": "Otter"},
    {"name": "Harry", "house": "Gryffindor", "patronus": "Stag"},
    {"name": "Ron", "house": "Gryffindor", "patronus": "Jack Russel terrier"},
    {"name": "Draco", "house": "Slytherin", "patronus": None}
]

for student in students:
    print(student["name"], student["house"], student["patronus"], sep=", ")    



"""
def main():
    print_square(3)


def print_square(size):
    for i in range(size):
        print("#" * size)


main()


