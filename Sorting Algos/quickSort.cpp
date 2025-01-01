#include <iostream> 
#include <vector>

using namespace std;

int Partition(vector<int> &array, int start, int end)
{
    int pivot = array[end];
    int i = start - 1;

    for (int j = start; j < end; j++)
    {
        if (array[j] < pivot)
        {   
            i++;
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

    i++;
    int temp = array[i];
    array[i] = array[end];
    array[end] = temp;

    return i;
}

void QuickSort(vector<int> &array, int start, int end)
{
    if (end <= start)
        return ;

    int pivot = Partition(array, start, end);
    QuickSort(array, start, pivot - 1);
    QuickSort(array, pivot + 1, end);
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
    vector<int> numbers = {5, 1, 3, 2};
    QuickSort(numbers, 0, numbers.size() - 1);
    DisplayArray(numbers);

    return 0;
}