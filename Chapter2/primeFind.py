
# sortedNumber = number.sort()
# print(sortedNumber)

def printArray(n):
    for item in n:
        print(item, end=' ')
    
def selectionSort(n):
    for i in range(0, len(n), 1):
        min_idx = i
        for j in range(i + 1, len(n), 1):
            if n[min_idx] > n[j]:
                min_idx = j
        n[i], n[min_idx] = n[min_idx], n[i]

        # print(i, end=' ')
        
    # for index, item in enumerate(number):
    #     # print(index, end=" ")
    #     min_idx = index



number = [2, 13, 15, 27, 12]
print(len(number))
printArray(number)
print("")
selectionSort(number)
print("")
printArray(number)



