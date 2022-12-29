#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};
    array<int, 5> arr2 = {6, 7, 8, 9, 10};

    cout << "Size of array is -> " << arr.size() << endl;  //retrun size of array

    int i;
    for(i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //element at 2nd index
    cout << "Element at 2nd index is -> " << arr.at(2) << endl;   //o(1)

    //element size in boolean
    cout << "Empty or not -> " << arr.empty() << endl;     //returns 0(false)   //o(1)

    //1st element
    cout << "First element -> " << arr.front() << endl;    //o(1)

    //last element
    cout << "Last element -> " << arr.back() << endl;      //o(1)

    //swapping arrays
    arr.swap(arr2);
    for(int j = 0; j < arr.size(); j++){
        cout << arr[j] << " ";
    }
    cout << endl;
}
