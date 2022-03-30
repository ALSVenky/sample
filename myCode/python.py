def bubbleSorts(nums):
    for i in range(len(nums)-1,0,-1):
        for j in range(i):
            if nums[j]>nums[j+1]:
                nums[j],nums[j+1]=nums[j+1],nums[j]

nums=[1,2,5,1,0,8,9,7,4,5]

bubbleSorts(nums)
print(nums)
