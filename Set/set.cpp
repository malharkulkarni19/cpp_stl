#include<iostream>
#include<set>
using namespace std;

int main()
{
    //sets store only unique elements, if you entered 5 on 5 times it will store 5 only once.
    set<int> s;

    s.insert(5);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(5);
    s.insert(6);   //for insert complexity is o(log n)

    for(auto i:s){
        cout << i << " ";     //returns in ascending order.(it is quite slow process)
    }
    cout << endl;

    s.erase(s.begin());

    for(auto i:s){
        cout << i << " ";
    }
    cout << endl;

    cout << "5 is present or not -> " << s.count(5) << endl;

    set<int>::iterator itr = s.find(5);

    for(auto it = itr; it!=s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    //insert, find, erase, count = o(log n)
    //size, begin, end, empty = o(1)
}
