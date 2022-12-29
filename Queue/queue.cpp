#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> s;

    s.push("Malhar");
    s.push("Kulkarni");

    cout << "The top element is -> " << s.front() << endl;  //returns top element, it has last in first out order.

    cout << "The size is -> " << s.size() << endl;

    s.pop();
    cout << "The top element is -> " << s.front() << endl;
    cout << "The size is -> " << s.size() << endl;
}
