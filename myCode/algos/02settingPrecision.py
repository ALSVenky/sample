# Python code to demonstrate ceil(), trunc()
# and floor()

# importing "math" for precision function
import math

# initializing value
a = 3.9556

# using trunc() to print integer after truncating
# print("The integral value of number is : ", end="")
print(math.trunc(a),"trunc")

# using ceil() to print number after ceiling
# print("The smallest integer greater than number is : ", end="")
print(math.ceil(a),"ceil")

# using floor() to print number after flooring
# print("The greatest integer smaller than number is : ", end="")
print(math.floor(a),"floor")


# using "%" to print value till 2 decimal places
print ("The value of number till 2 decimal place(using %) is : ",end="")
print ('%.2f'%a)

# using format() to print value till 2 decimal places
# print ("The value of number till 2 decimal place(using format()) is : ",end="")
print ("{0:.2f}".format(a),"formatting to two decimal places")

# using round() to print value till 2 decimal places
# print ("The value of number till 2 decimal place(using round()) is : ",end="")
print (round(a,2),"round")

print(math.floor(5.57))
print(11//3)  #gives quotient 
print(9/3)  #result a float always
print(10%3) #gives remainder