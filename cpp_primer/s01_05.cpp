//
// Created by 项鹏乐 on 2023/1/5.
//

#include "Utils.cpp"
#include <iostream>

using namespace std;

//void sum(int *[4], int); // 数组
//void sum(int (*)[4], int); // 指针
void sum(int [][4], int);

void case0001() {
    int age = 39;
//    const int *pt = &age;
    int const *pt = &age;
    // *pt = 12; // error
    pt = &age;
    int *const ptr = &age;
    //ptr = &age; // error
    *ptr = 121;

    int data[3][4] = {{1,   2,   3,   4},
                      {11,  22,  33,  44},
                      {111, 222, 333, 444}};
    sum(data, 3);
    x__________
}


int main() {
    case0001();
    return 0;
}

void sum(int arr[][4], int size) {
    cout << "size -> " << size << endl;
    cout << "arr[0] -> " << arr << endl;
    cout << "arr[1] -> " << arr + 1 << " = " << (*(arr + 1))[0] << endl;
    cout << "arr[2] -> " << arr + 2 << " = " << *(*(arr + 2)) << endl;
}
