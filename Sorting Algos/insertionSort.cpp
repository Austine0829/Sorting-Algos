#include <iostream>

using namespace std;

int main(){


    // int numbs[5] = {1, 2, 3, 5, 4};
    // int temp = 0;
    int numbs[5] = {5, 1, 3, 2, 4};
    int size = sizeof(numbs) / sizeof(numbs[0]);

    for (int i = 1; i < size; i++)
    {
        int temp = numbs[i];
        int j = i - 1;

        while (j >= 0 && numbs[j] > temp)
        {
            numbs[j + 1] = numbs[j];
            j--; 
        }

        numbs[j + 1] = temp;
    }

    cout << "Insertion Sorted Numbers: ";
    
    for (int i = 0; i < size; i++)
    {
        cout << numbs[i] << " ";
    }
    

    return 0;
}