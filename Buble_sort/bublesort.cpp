#include <iostream> 
using namespace std;

class Buble_Sort {
public:
void bublesort (int array[], int size) {
  int temp;
  for(int step = 0; step < size - 1; ++step) {
    for(int i = 0; i < size - step - 1; ++i) {
      if(array[i] > array[i + 1]) {
        temp = array[i];
        array[i] = array[i+1]; 
        array[i + 1] = temp; 
        }
      }
    } 
  }
};


void input(int array[], int size) {
  for (int i = 0; i < size; i++) { 
    cin >> array[i];
}
cout <<endl;
}
void sorted (int array[], int size) {
for (int i = 0; i < size; i++)
{
cout << array[i] << " ";
}
cout <<endl;
}
int main() {
int size; 
cout << "Enter the number of elements: ";
cin >>size; 
int *arr = new int[size]; 
  Buble_Sort Sort;
input(arr, size);
Sort.bublesort(arr, size);
sorted(arr, size);
  return 0;
}