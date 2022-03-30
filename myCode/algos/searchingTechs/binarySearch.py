
def binarySearch(target):
    min=0
    max=len(array)-1
    guess=0
    while max>=min:
        guess=int(round((max+min)/2))
        if array[guess]==target:            
            return guess        
        elif array[guess]<target:
            min=guess+1
        else:
            max=guess-1
            
array = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97]        
        
result=binarySearch(7)
print(result)
print(array[result])
