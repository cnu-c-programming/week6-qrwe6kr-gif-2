#include <stdio.h>

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}}; 
    //메모리에 연속적으로 저장됨
    
    int (*p1)[2][3] = &arr;
    //2곱하기3배열 전체 가리키는 포인터
    int (*p2)[3]    = &arr[0];
    // 1행 int[3] 가리키는 포인터
    int *p3 = &arr[0][0];
    // int하나 가리키는 포인터
    
    printf("%p\n", (void*)p1);
    printf("%p\n", (void*)p2);
    printf("%p\n", (void*)p3);
    printf("\n");
    printf("%1u\n", (unsigned long long)(p1+1) - (unsigned long long)(p1));
    printf("%1u\n", (unsigned long long)(p2+1) - (unsigned long long)(p2));
    printf("%1u\n", (unsigned long long)(p3+1) - (unsigned long long)(p3));
}
