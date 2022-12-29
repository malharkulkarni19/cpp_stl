#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("Malhar");
    s.push("Kulkarni");

    cout << "The top element is -> " << s.top() << endl;  //returns top element, it has last in first out order.

    cout << "The size is -> " << s.size() << endl;

    s.pop();
    cout << "The top element is -> " << s.top() << endl;
}
