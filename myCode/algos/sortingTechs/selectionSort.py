
def selectionSort(arr):
    size=len(arr)
    for i in range (size-1):
        pivot=i
        
        for j in range(pivot+1,size):

            if arr[j]<arr[pivot]:
                pivot=j 
            
        if i != pivot:
            arr[pivot],arr[i]=arr[i],arr[pivot]
    print(arr)
if __name__ == "__main__":
    arr=[2,5,2,4,1,9,1]
    selectionSort(arr)
    # print(arr)

