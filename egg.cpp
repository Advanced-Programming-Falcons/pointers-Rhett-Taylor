#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
int size;
cout << "how many numbers?" << endl;
cin >> size;
int* array = new int[size];
for(int i = 0; i < size; i++){
    array[i] = i*2;
    cout << array[i] << endl;
}
for(int i = 0; i < size; i++){
    array[i] += 5;
    cout << array[i] << endl;
}
for(int i = 0; i < size; i++){
    array[i] = array[i-1];
    cout << array[i] << endl;
}
cout << array <<": memory location" << endl;
cout << *array << ": value";

for(int* ptr = array; ptr < array + size; ptr++){
cout << "Memory address: " << ptr << endl;
}
delete[] array;
return 0;
}
