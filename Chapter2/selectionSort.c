#include <stdio.h>

void printArray(int arr[], size_t size);
void selectionSort(int arr[], size_t size);
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
// void printArray(int arr[], int size);
int main()
{
    int arr[] = {21, 33, 6, 7, 1};
    // size_t size = sizeof(arr) / sizeof(arr[0]);
    int size = sizeof(arr) / sizeof(arr[0]);
    // printf("%zd", size);
    printArray(arr, size);
    printf("=========\n");
    selectionSort(arr, size);
    printf("=========\n");
    printArray(arr, size);

}

// void printArray(int arr[], int size)
void printArray(int arr[], size_t size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionSort(int arr[], size_t size)
{
    for (int i = 0; i < size; ++i)
    {
        int min_idx = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (arr[min_idx] > arr[j])
            {
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
    printf("\n");
}
