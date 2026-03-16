"""
score = int(input("Score: "))
if score >= 90 and score <= 100:
    print("You got an A!")
elif score >= 80 and score < 90:
    print("You got a B!")
elif score >= 70 and score < 80:
    print("You got a C!")
else:
    print("You failed.")

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

score = int(input("Score: "))
if 90 <= score <= 100:
    print("Grade: A")
elif 80 <= score <= 90:
    print("Grade: B")
elif 70 <= score <= 80:
    print("Grade: C")
elif 60 <= score <= 70:
    print("Grade: D")
else: 
    print("Grade: F")
"""



counts = {}


