#include <iostream>

int main()
{
    int array[] = {6,3,2,5,7,4,1,9,8,0}; // 0-9

    for (int i = 1; i < 10; i++)    {

        int temp = array[i];
        int j = i-1;
        while (j >= 0 && array[j] > temp)
        {
            array[j+1] = array[j];
            j--;
        }

        array[j+1] = temp;
    }
    
    for (int i = 0; i < 10; i++)
    {
        std::cout << array[i] << " ";
        /* code */
    }
    getchar();

}