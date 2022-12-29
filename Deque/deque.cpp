#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> a;

    a.push_back(1);            //added in deque a
    a.push_front(2);           //added in deque a but before of 1
    a.push_back(3);
    a.push_front(4);

    for(int i : a){
        cout << i << " " ;
    }
    cout << endl;

    a.pop_back();             //removes last element
    for(int i : a){
        cout << i << " " ;
    }
    cout << endl;

    cout << "First element is -> " << a.at(0) << endl;
}
