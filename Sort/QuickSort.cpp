#include <iostream>

int Partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    while (low < high)
    {
        while (low < high && arr[high] > pivot)
        {
            high--;
        }
        arr[low] = arr[high];

        while (low < high && arr[low] < pivot)
        {
            low++;
        }

        arr[high] = arr[low];
    }

    arr[low] = pivot;

    return low;
}

void QuickSort(int arr[], int low, int high)
{
    if(low < high)
    {
       int pi = Partition(arr, low, high);

       QuickSort(arr, low, pi - 1);
       QuickSort(arr, pi+1, high);

    }

}

int main()
{
    int array[] = {6,3,12,5,7,74,21,9,48,40}; // 0-9

    QuickSort(array, 0, 9);
    for (int i = 0; i < 10; i++)
    {
        std::cout << array[i] << " ";
        /* code */
    }
    getchar();

}