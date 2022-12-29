#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "Malhar";
    m[12] = "Kulkarni";

    m.insert({5, "MK"});

    for(auto i:m){
        cout << i.first << " " << i.second << endl;    //returns in order
    }
    cout << endl;

    cout << "Finding 12 -> " << m.count(12) << endl;

    //insert. erase, find, count -> o(log n)
}
