#include <iostream>

using namespace std;

int main(){

    int nums[5] = {5, 1, 4, 2, 3};
    int size = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < size; i++)
    {
        int minNumIndex = i;

        for (int j = i + 1; j < size; j++) // j = 1; minNumIndex = 1; temp = ;
        {              
            if (nums[minNumIndex] > nums[j]) // j = 2;
            {
                cout << j << " ";
            }       
        }
        
        int temp = nums[i];
        nums[i] = nums[minNumIndex];
        nums[minNumIndex] = temp;
    }

    cout << "Selection Sorted: ";
       
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    
    

    return 0;
}