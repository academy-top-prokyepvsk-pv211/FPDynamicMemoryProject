#include <iostream>

using namespace std;

int main()
{
    /*int size{ 10 };
    int* array = new int[size];

    int n;
    float x = 123;

    void* vptr = array;

    *(int*)vptr = 100;
    *((float*)vptr + 1) = 123.45;
    *((char*)vptr + 2) = '$';

    float y = *((float*)vptr + 2);*/

    /*n = *((int*)vptr);
    cout << n;*/

    /*int a = 0;
    float x = 0;
    bool f = false;
    char ch = '\0';*/

    /*int size;
    int* array = nullptr;
    
    if(array)
        delete[] array;*/

    /*int arr[10];

    int size;
    cout << "input size of array: ";
    cin >> size;
    int* array = new int[size];*/

    /*int rows = 4;
    int cols = 5;

    int** matrix = new int* [rows];
    for (int i = 0; i < rows; i++)
        matrix[i] = new int[cols];

    srand(time(nullptr));
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            matrix[i][j] = rand() % 100;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << matrix[i][j] << "\t";
        cout << "\n";
    }


    for (int i = 0; i < rows; i++)
        delete[] matrix[i];

    delete[] matrix;*/

    int rows{ 4 };

    srand(time(nullptr));

    int* sizes = new int[rows];
    int** jagged = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        //sizes[i] = 2 + rand() % 5;
        //jagged[i] = new int[sizes[i]];
        int size = 2 + rand() % 5;
        jagged[i] = new int[size];
        jagged[i][0] = size;
    }

    for (int i = 0; i < rows; i++)
        //for (int j = 0; j < sizes[i]; j++)
        for (int j = 1; j < jagged[i][0]; j++)
            jagged[i][j] = rand() % 100;
    
    for (int i = 0; i < rows; i++)
    {
        //for (int j = 0; j < sizes[i]; j++)
        for (int j = 0; j < jagged[i][0]; j++)
            cout << jagged[i][j] << "\t";
        cout << "\n";
    }
        
    
}
