//
// Created by 项鹏乐 on 2022/12/21.
//

#include <iostream>
#include "Utils.cpp"
#include <ctime>

using namespace std;


void case01() {
    cout << (1 < 0) << endl;
    cout.setf(ios_base::boolalpha);
    cout << (1 < 0) << endl;

    x__________
}

void case02() {
    const int SZ = 20;
    long long arr[SZ] = {0};
    int i;
    for (i = 2, arr[0] = arr[1] = 1; i < SZ; ++i) {
        arr[i] = arr[i - 1] * i;
    }
    for (i = 0; i < SZ; ++i) {
        cout << i << "! = " << arr[i] << endl;
    }
    x__________
}

void case03() {
    int a = 1001;
    int b = 2001;
//    &(a++); // 右值
//    &(++b); // 左值
    while (a++ < 1005) {
        cout << a << endl;
    }
    while (++b < 2005) {
        cout << b << endl;
    }
    x__________
}

void case04() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int *ptr = arr;
    cout << ptr << " -> ";
    cout << *++ptr << endl; // ptr不变 值为2
    cout << ptr << " -> ";
    cout << *ptr++ << endl; // ptr变成了&arr[1] 值为2

    cout << ptr << " -> ";
    cout << (*ptr)++ << endl; // ptr变成了&arr[2] 值为3


    x__________
}

void case05() {
    string word;
//    cin >> word;
    getline(cin, word);
    char temp;
    int i, j;
    int size = word.size();
    for (i = 0, j = size - 1; i < size, i < j; i++, j--) {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << word << endl;
    x__________
}

void case06() {
    float delay = 3 * CLOCKS_PER_SEC;
    clock_t start = clock();
    cout << "CLOCKS_PER_SEC : " << CLOCKS_PER_SEC << endl;
    cout << "start : " << start << endl;
    while (clock() - start < delay) {

    }
    cout << "done" << endl;
    x__________
}

void case07() {

    double prices[5] = {4, 424.42, 424, 4242, 42};
    for (double x: prices) {
        cout << x << endl;
    }
    for (double &x: prices) { // & 引用
        x = x * 100;
    }
    x__________
    for (double x: prices) {
        cout << x << endl;
    }

    x__________
}

void case08() {
    char ch;
    int count = 0;
    cout << "plz enter(# quit) >:";
    cin.get(ch);
    while (ch != '#') {
        cout << ch;
        ++count;
        cin.get(ch);// 是引用
    }
    cout << endl << count << endl;
    x__________
}

void case09() {
    char ch;
    int count = 0;
    cout << "plz enter(# quit) >:";
    cin.get(ch);
    while (cin) {
//    while (!cin.fail()) {
        cout << ch;
        ++count;
        cin.get(ch);// 是引用
    }
    cout << endl << count << endl;
    x__________
}


int main() {
    case09();
//    case08();
//    case07();
//    case06();
//    case05();
//    case04();
//    case03();
//    case02();
//    case01();
    return 0;
}