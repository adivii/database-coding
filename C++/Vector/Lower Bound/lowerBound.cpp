/*
Syntax 1: 
ForwardIterator lower_bound (ForwardIterator first, ForwardIterator last, const T& val); 
Syntax 2: 
ForwardIterator lower_bound (ForwardIterator first, ForwardIterator last, const T& val, Compare comp); 

Ket : 
- first, last: The range used is [first, last), which contains all the elements between first and last, including the element pointed by first but not the element pointed by last. First and last were pointer.
- val: Value of the lower bound to be searched for in the range.
- comp: Binary function that accepts two arguments (the first of the type pointed by ForwardIterator, and the second, always val), and returns a value convertible to bool. The function shall not modify any of its arguments. This can either be a function pointer or a function object.
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, const char** argv) {
    int n,x;
    cout << "Array Length : "; cin >> n;

    //Create vector array
    vector<int> array;

    cout << "Insert " << n << " value(s) : " << endl;
    for (int i = 0; i < n; i++){
        cin >> x;
        array.push_back(x); //push_back(x) used to insert value x into last index of array (size increased by 1)
    }

    //Sort Array
    sort(array.begin(),array.end());

    //Show array
    cout << "Sorted Array : ";
    int k = 1;
    do{
        cout << array[k-1] << ", ";
        k++;
    }while(k < array.size());
    cout << array.back() << endl << endl;

    //Create iterators
    vector<int>::iterator lower;

    //Input value to be checked
    cout << "Value to be checked : ";cin >> x;

    //Search index of the lower_bound
    lower = lower_bound(array.begin(),array.end(),x);

    //Write index of the lower_bound
    //To return it's index, we must subtract the iterator with array beginning (both are pointer :v)
    cout << "lower_bound is at index " << (lower-array.begin())-1 << " and position of " << (lower-array.begin()) << endl;

    return 0;
}