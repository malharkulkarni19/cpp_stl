#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);

    cout << "Finding 7 -> "<< binary_search(v.begin(), v.end(), 7) << endl;

    //finding lower bound of vector
    cout << "Lower bound -> " << lower_bound(v.begin(), v.end(), 7)-v.begin() << endl;

    //finding upper bound of vector
    cout << "Lower bound -> " << upper_bound(v.begin(), v.end(), 5)-v.begin() << endl;

    //rotate a vector
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "Rotated vector is ";
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;

    //sorting of vector -> sorting is based of 3 sorting algorithm i.e. intro sort(quick sort + heap sort + insertion sort)
    sort(v.begin(), v.end());
    cout << "vector after sort ->" ;
    for(int i:v){
        cout << i << " " ;
    }
    cout << endl;

    int a = 5, b = 7;

    cout << "Value of a is -> " << a << endl;
    cout << "Value of b is -> " << b << endl;

    cout << "Max is -> " << max(a, b) << endl;
    cout << "Min is -> " << min(a, b) << endl;

    swap(a, b);
    cout << "The value of a after swapping is -> " << a << endl;

    //reverse a string
    string s1 = "Hello";
    reverse(s1.begin(), s1.end());
    cout << "Reversed string of Hello is -> " << s1 << endl;
}
