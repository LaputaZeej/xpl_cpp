//
// Created by 项鹏乐 on 2022/12/21.
//

#include <stdio.h>
const int SZ = 16;
int arr[16] = {0};
void case02() {

    arr[0] = 1;
    arr[1] = 1;
    int i = 0;
    for ( i = 2,arr[0]=3; i < SZ; ++i) {
        arr[i] = arr[i - 1] * i;
    }
    for ( i = 0; i < SZ; ++i) {
        printf("%d! = %d", i, arr[i]);
    }
}
