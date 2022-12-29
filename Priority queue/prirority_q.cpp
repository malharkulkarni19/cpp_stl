#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(5);
    maxi.push(4);
    maxi.push(7);
    maxi.push(3);

    int n = maxi.size();
    for(int i = 0; i < n ; i++){
        cout << maxi.top() << " ";       //returns max element because it is declared as get maximum first
        mini.pop();
        maxi.pop();
    }
    cout << endl;

    mini.push(5);
    mini.push(4);
    mini.push(7);
    mini.push(3);

    int n1 = mini.size();
    for(int i = 0; i < n1 ; i++){
        cout << mini.top() << " ";       //return minimum first because it is declared as get minimum first
        mini.pop();
    }
    cout << endl;

    cout << "It is empty or not -> " << mini.empty() << endl;
}
