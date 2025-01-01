#include <iostream>

using namespace std;

int main(){

   int nums[5] = {3, 5, 2, 4, 1};
   int size = sizeof(nums) / sizeof(nums[0]);

   cout << size;

   for (int i = 0; i < size - 1; i++)
   {
        for (int j = 0; j < size - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp =  nums[j];
                
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }    
        }
   }
   
   cout << "Bubble Sorted Numbers: ";

   for (int i = 0; i < size; i++)
   {
        cout << nums[i] << " ";
   }

    return 0;
}