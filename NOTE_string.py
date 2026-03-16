"""
capitalize() = first letter
casefold() = convert string to lower case
center() = return centered string
count() = returns number of times a specified value occurs in string
encode() = return encoded version of string
endswith() = return true if string ends with specified value
expandtabs() = sets tab size of string
find() = searches string for specified value and returns position
format() = formats specified value in string
format_map() = formats specified value from a dictionary in a string
index() = searches string for specified value and returns position
isalnum() = true if all char in string are alphanumeric
isascii() = true if all char are alphabet
isdecimal()
isdigit()
isidentifier() 
islower() = true if all char are lower case
isnumeric() = true if all char are numeric
isprintable() = true if all char is printable
isspace() = true if all chars are whitespaces
istitle() = true if strings follows rules of a title
isupper() = true if all chars are upper
join() = converts elements of an iterable into a string
ljust() = left justified version of string
lower() = converts string into lower case
maketrans() = translation table to be used in translations
partition() = tuple where string is parted into three parts
replace = returns string where specified value is replaced with specified value
rfind() = searches string for specified value and returns last position
rindex() = search string for a specified value and returns the last position it was found
rjust() = right justified version of string
rpartition() = tuple where string parted into 3 parts
rsplit() = splits string at specified separator, returns list
rstrip() = right trim version
split() = splits string at specified separator, returns list
splitness() = splits string at line breaks and returns list
startswith() = returns true if string starts with the specified value
strip() = removes spaces left and right
swapcase() = swaps cases
title() = firs char to upper case
translate() = returns translated string
upper() = upper case
zfill() = fill string with specified number of 0 values at the beginning



All string methods returns new values!
They do not change the original string. 
Always assign to variable the return value.


  print(f"{compute(x,y,z):.1f}") 
                        # to print 1 decimal point
                        # using f string, dont need to convert 
                        # to string anymore to print


SPLIT!!
    x, y, z = input("Enter: ").split()                        
or
    equation = input("Enter: ").split()
    x = int(equation[0])
    y = equation[1]
    z = int(equation[2])


return " ".join(w[:1].upper() + w[1:] for w in s.split(" "))
    join strings with " ",
            w[:1] take first char
            w[:1].upper(), after take first char, upper

             w[1:], take everything after first char,
            + w[1:], add them
    
"""

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
    return s.title()

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()






