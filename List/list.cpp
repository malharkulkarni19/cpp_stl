#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> a;

    a.push_back(1);
    a.push_front(2);

    for(int i : a){
        cout << i << " ";
    }
    cout << endl;

    list<int> b(10, 19);
    cout << "New list is " << endl;
    for(int i:b){
        cout << i << " ";
    }
    cout << endl;
    // all have o(1) but for erase function, it is o(n).
}

