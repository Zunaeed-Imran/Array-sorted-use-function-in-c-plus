#include <iostream>
using namespace std;

  int sort(int temp, int j, int i) {
int arr[10] = {1,9,6,2,52,784,54,11,23,95};

      cout << "Unsorted: ";
    for (int i = 1; i < 10; i++) {
      cout  << arr[i] << "\t";
    }

    for (int i = 0; i <10; i++){
      for (int j = 0; j < 10; j++) {
        if (arr[i] > arr [j]) {
          temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
        }
      }
    }
    cout << "Sorted Element " ;
    for (int i = 0; i < 10; i++) {
      cout << arr[i] << "\t";
    }
}


int main() {
  int temp, j, i;

  sort(temp, j, i);  
  return 0;
}