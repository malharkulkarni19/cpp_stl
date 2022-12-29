#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a;
    cout << "capacity is -> " << a.capacity() << endl;   //returns size of vector

    a.push_back(1);                                  //push_back() used for fill vector with any element
    cout << "capacity is -> " << a.capacity() << endl;   //capacity() function used for size

    a.push_back(2);
    cout << "capacity is -> " << a.capacity() << endl;

    a.push_back(3);
    cout << "capacity is -> " << a.capacity() << endl;    //return 4 because vector doubled its size for storing element

    cout << "Size is -> " << a.size() << endl;
    //we can also use front() and back() for return the first and last element.

    a.pop_back();                                        //deletes last element from vector
    for(int i:a){
        cout << i << " ";
    }
    cout << endl;

    cout << "Size before clear is -> " << a.size() <<endl;
    a.clear();
    cout << "Size after clear is -> " << a.size() <<endl;

    //predefine vector
    vector<int> b(5, 1);              //5 is size and 1 is initialized to all 5 elements of vector
    //cout << "vector b -> " << endl;
    //for(int i:b){
        //cout << i << " ";
    //}
    //cout << endl;

    //copy vector
    vector<int> c(b);
    cout << "vector c -> " << endl;
    for(int i:c){
        cout << i << " ";
    }
    cout << endl;

    //all have o(1).
}
