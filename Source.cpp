#include <iostream>

int main()
{
    // one dimensional dynamic array]
    int size;
    std::cout << "Size: ";
    std::cin >> size;
    int *arr = new int[size]();
    // hanle
    arr[0] = 2;
    std::cout << arr[0] << std::endl;
    // free memory
    delete arr;
    arr = NULL;

    // Multidimensional dynamic array
    int rows, cols;
    std::cout << "Rows, Cols: ";
    std::cin >> rows >> cols;
    int **table = new int *[rows];
    for (int i = 0; i < rows; ++i)
        table[i] = new int[cols]();
    // handle
    table[1][1] = 1;
    std::cout << table[1][1] << std::endl;
    // free memory
    for (int i = 0; i < rows; ++i)
        delete[] table[i];
    delete table;
    table = NULL;
    return 0;
}