#ifndef _SORT_H_
#define _SORT_H_
#include <iostream>
using namespace std;

void show(int *a, int n) {
  for (int i=0; i<n; ++i) {
    cout << a[i] << " ";
  }
  cout << endl;
}

void bubbleSort(int *a, int n) {
  bool flag = false;
  int i,j;
  for (i=0; i<n-1; ++i) {
    flag = false;
    for (j=0; j<n-1-i; ++j) {
      if (a[j] > a[j+1]) {
        flag = true;
        swap(a[j], a[j+1]);
      }
    }
    if (!flag) break;
  }
}


void selectSort(int arr[], int n) {
    int left=0,right=n-1;
    while(left<right){
        int minIndex=left, maxIndex=right;
        if(arr[minIndex] > arr[maxIndex])
            swap(arr[minIndex], arr[maxIndex]);

        for(int i=left+1; i<right; ++i){
            if(arr[i] < arr[minIndex])
                minIndex = i;
            else if(arr[i] > arr[maxIndex])
                maxIndex = i;
        }

        swap(arr[left], arr[minIndex]);
        swap(arr[right], arr[maxIndex]);
        left ++;
        right --;
    }
    return;
}


#endif