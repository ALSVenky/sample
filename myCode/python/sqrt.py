
import math

# Recursive function that returns square root of a number with precision upto 5 decimal places
def Square(n, i, j):

	mid = (i + j) / 2
	mul = mid * mid

	# If mid itself is the square root,return mid
	if ((mul == n) or (abs(mul - n) < 0.00001)):
		return mid

	# If mul is less than n, recur second half
	elif (mul < n):
		return Square(n, mid, j)

	# Else recur first half
	else:
		return Square(n, i, mid)

# Function to find the square root of n
def findSqrt(n):
	if n<=0:
		print("Please enter a positive value")
	else:
		j = 1

		# While the square root is not found
		found = False
		while (found == False):

			# If n is a perfect square
			if (j * j == n):
				print(j)
				found = True
			
			elif (j * j > n):

				# Square root will lie in the interval i-1 and i
				result = Square(n, j - 1, j)
				print ("{0:.5f}".format(result))
				print("%.5f" %result)
				print(round(result,5))
				found = True
			j += 1

# Driver code
if __name__ == '__main__':
	n = 3

	findSqrt(n)


