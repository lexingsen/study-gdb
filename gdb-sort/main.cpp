#include "sort.h"


int main() {
  int a[] = {3,1,5,2,4,9,6,8,7};
  int n = sizeof(a)/sizeof(int);
  show(a, n);
  bubbleSort(a, n);
  show(a, n);
  return 0;
}