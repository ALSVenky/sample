def mergeSort(arr):
    if len(arr) <=1:
        return arr
    mid =len(arr)//2
    left = arr[:mid]
    right = arr[mid:]

    left = mergeSort(left)
    right= mergeSort(right)
    return mergeTwoSortedLists(left,right)   


def mergeTwoSortedLists(a,b):
    sortedList=[]
    len_a=len(a)
    len_b=len(b)
    i=j=0  
    while i< len_a and j<len_b:
        if a[i]<=b[j]:
            sortedList.append(a[i])
            i+=1
        else :
            sortedList.append(b[j])
            j+=1
    while i<len_a:
        sortedList.append(a[i])
        i+=1
    while j<len_b:
        sortedList.append(b[j])
        j+=1    
    return sortedList
    

if __name__ == '__main__':
    arr=[2,1,5,3]
    print(mergeSort(arr))
    








