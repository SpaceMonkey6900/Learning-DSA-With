def duplicateRemover(arr):
    j=0
    cnt=1
    for i in range(1,len(arr)):
        if arr[j]==arr[i]:
            pass
        else:
            j+=1
            arr[j]=arr[i]
            cnt+=1
    print(arr[:cnt])

list = [1,1,4,6,6,6,9,9,31,31,31,31,45,67]
duplicateRemover(list)