#include <iostream>


void push_back(int*& old_array, int value, int& size)
{
    int* new_array = new int[size + 1];
    for (int i = 0; i < size; i++) 
    {
        new_array[i] = old_array[i];
    }

    new_array[size] = value;

    size++;
    delete[] old_array;
    old_array = new_array;
}


int main() 
{
    int number;
    int array_size = 1;
    int* array = new int[array_size];

    std::cin >> array[0];
    std::cout << "Array: " << array[0] << std::endl;

    while (std::cin >> number) 
    {
        if (number >= 0) 
        {
            push_back(array, number, array_size);

            std::cout << "Array: ";
            for (int i = 0; i < array_size; i++) 
            {
                std::cout << array[i] << " ";
            }
            std::cout << std::endl;
        }
        else 
        {
            break;
        }
    }
}
