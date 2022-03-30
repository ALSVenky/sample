# def bubbleSort(nums):
#     for i in range(len(nums)):
#         for j in range(len(nums)-i-1):
#             if nums[j]>nums[j+1]:
#                 nums[j],nums[j+1]=nums[j+1],nums[j]

#                  #OR 

# def bubbleSorts(nums):
#     for i in range(len(nums)-1,0,-1):
#         for j in range(i):
#             if nums[j]>nums[j+1]:
#                 nums[j],nums[j+1]=nums[j+1],nums[j]

#                #OR

def bubsorting(nums):
    sizeOfList=len(nums)
    swapped=False
    for i in range(sizeOfList-1):
        for j in range(sizeOfList-1-i):
            if nums[j]>nums[j+1]:
                nums[j],nums[j+1]=nums[j+1],nums[j]
                swapped=True
        #print(nums)
        if not swapped:
            break


nums=[1,2,3,4,5,6,7]
#nums=[2,5,4,8,3,4]
# bubbleSort(nums)
# print(nums)
# bubbleSorts(nums)
# print(nums)
bubsorting(nums)
print(nums)               
