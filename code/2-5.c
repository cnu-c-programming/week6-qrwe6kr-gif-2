#include <stdio.h>

int main() {
   int arr[6] = { 1, 2, 3, 4, 5, 6 };
   int* p = arr; // &arr[0]
   int** pp = &p; // arr[0]
   
   for (int i=0; i<6; i++) {
       printf("%d ", *(*pp + i)); //*pp==p 배열시작주소
   }
}
