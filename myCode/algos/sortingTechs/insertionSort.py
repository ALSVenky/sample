
def insertionSort(arr):
    for i in range(1,len(arr)):
        anchor=arr[i] 
        j=i-1
        while j>=0 and anchor<arr[j]:
            arr[j+1]=arr[j] 
            j=j-1
        arr[j+1]=anchor    
        # print(arr)


if __name__ == '__main__':

    arr=[21,38,29,17,4,25,11,32,9,0]
    insertionSort(arr)
    print(arr)

    # arrOfLists=[
    #     [2,1,5,4,8,9,8,7,5,1],
    #     [25,45,12,91,43,14],
    #     [],
    #     [8],
    #     [1,2,3,4,5,6]
    # ]
    # for List in arrOfLists:
    #     insertionSort(List)
    #     print(f'sorted array: {List}')
