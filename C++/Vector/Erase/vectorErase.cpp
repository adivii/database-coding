#include <iostream>
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

    //Show array
    cout << "Array Before Erased : ";
    int k = 1;
    do{
        cout << array[k-1] << ", ";
        k++;
    }while(k < array.size());
    cout << array.back() << endl << endl;

    //Delete part of array
    int start,end;
    cout << "First position to be deleted : ";cin >> start;
    cout << "Last position to be deleted  : ";cin >> end;
    array.erase(array.begin()+start-1,array.begin()+end-1); //erase(start,end) menghapus nilai pada rentang start sampai end (index) dimana start dan end adalah alamat memori

    //Show erased array
    cout << "Array After Erased : ";
    k = 1;
    do{
        cout << array[k-1] << ", ";
        k++;
    }while(k < array.size());
    cout << array.back() << endl << endl;

    return 0;
}