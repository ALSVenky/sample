def shellSort(arr):
    size = len(arr)
    gap=size//2
    while gap>0:
        for i in range (gap,size):
            anchor=arr[i]
            j=i-gap
            while j>=0 and anchor<arr[j]:
                arr[j+gap]=arr[j]
                j=j-gap
            arr[j+gap]=anchor 
        gap=gap//2    


if __name__ == "__main__":
    arr=[3,7,11,2,6,10,1,5,9]
    shellSort(arr)
    print(arr)
    arrOfLists=[
            [2,1,5,4,8,9,8,7,5,1],
            [25,45,12,91,43,14],
            [],
            [8],
            [1,2,3,4,5,6]
        ]
    for List in arrOfLists:
        shellSort(List)
        print(f'sorted array: {List}')
