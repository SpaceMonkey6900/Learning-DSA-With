def duplicateRemover(arr):
    new_arr = []
    for i in range(0,len(arr)):
        count=0
        for j in range(i, len(arr)):
            if arr[i]==arr[j]:
                count+=1
        if count>=1 and len(new_arr)==0:
            new_arr.append(arr[i])
        elif count>=1 and new_arr[-1]!=arr[i]:
            new_arr.append(arr[i])
    print(new_arr)

list = [1,1,4,6,6,6,9,9,31,31,31,31,45,67]
duplicateRemover(list)