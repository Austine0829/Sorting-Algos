#include <iostream>
#include <vector>

using namespace std;

void Merge(vector<int> &leftArray, vector<int> &rightArray, vector<int> &array)
{
    int leftSize = array.size() / 2;
    int rightSize = array.size() - leftSize;

    int index = 0, left = 0, right = 0;

    while (left < leftSize && right < rightSize)
    {
        if (leftArray[left] < rightArray[right])
        {
            array[index] = leftArray[left];
            index++;
            left++;
        }

        else
        {
            array[index] = rightArray[right];
            index++;
            right++;
        }
    }
    
    while (left < leftSize)
    {
        array[index] = leftArray[left];
        index++;
        left++;
    }

    while (right < rightSize)
    {
        array[index] = rightArray[right];
        index++;
        right++;
    }
}

void MergeSort(vector<int> &array)
{
    int length = array.size();

    if (length == 1)
        return ;

    int middle = length / 2;
    
    vector<int> leftArray(middle);
    vector<int> rightArray(length - middle);

    int left = 0, right = 0;

    for (int i = 0; i < length; i++)
    {
        if (i < middle)
        {
            leftArray[left] = array[i];
            left++;
        }
        
        else
        {
            rightArray[right] = array[i];
            right++;
        }
    }

    MergeSort(leftArray);
    MergeSort(rightArray);
    Merge(leftArray, rightArray, array);
}

void DisplayArray(vector<int> array)
{
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    vector<int> numbers = {1, 5, 4, 2, 3};

    MergeSort(numbers);
    DisplayArray(numbers);

    return 0;
}