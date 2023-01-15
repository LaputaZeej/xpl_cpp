//
// Created by 项鹏乐 on 2022/12/19.
//

#include <iostream>
#include <cstring>

using namespace std;

#define x______ cout << "--------------" <<endl;

void case01() {

    // hello  aaaaaaaaa 换行有问题
    const int SIZE = 15;

    char name1[SIZE];
    char name2[SIZE] = "c ++ body";
    cout << "h  i ' am " << name2;
    cout << "what's u name?";
    cin >> name1;
    cout << "hello " << name1 << ",len = " << strlen(name1) << endl;
    name2[3] = '\0';
    cout << "hello " << name2 << ",len = " << strlen(name2) << endl;
}

void case02() {
    const int SZ = 10;
    char name[SZ];
    char dessert[SZ];
    cout << "enter name:";
    cin >> name; // 1234567890
    cout << endl << "enter dessert:";
    cin >> dessert; // abcdefghijk
    cout << "i have some delicious " << dessert;
    cout << " for u :" << name << "  ,name.len = " << strlen(name) << ",d.len = " << strlen(dessert) << endl; // ?
    x______
}

void case03() {
    // getline()
    // hello  aaaaaaaaa 换行无问题
    char name[5];
    cout << "plz intput name :";
    cin.getline(name, 20);
    cout << name << " , len = " << strlen(name) << endl;
    x______
}

void case04() {
    // get()
    // 123456
    // 1234 4
    // 6    1
    const int SIZE = 5;
    char name1[SIZE];
    char name2[SIZE];
//    cin.get(name1,SIZE).get();
////    cin.get();
//    cin.get(name2,SIZE);

    cin.get(name1, SIZE).get(name2, SIZE);

//    cin.get(name1,SIZE).get();
    cout << name1 << " ," << name2 << endl;
    cout << strlen(name1) << " ," << strlen(name2) << endl;
    x______
}

void case05() {
    // string
    string str1;
    string str2 = " hello kotlin.";
    string str3 = {" hello kotlin."};
    string str4[]{" hello kotlin."};
    cin >> str1;
    string str5 = str1 + str2;
    cout << "str1 = " << str1 << endl;
    cout << "str2 = " << str2 << endl;
    cout << "str3 = " << str3 << endl;
    cout << "str4 = " << str4 << endl;
    cout << "str5 = " << str5 << endl;
    string str6 = R"(""hello wolrd !")";
    cout << "str6 = " << str6 << endl;
    string str7 = R"+*( ("""hello wolrd !")+* )+*";
    cout << "str7 = " << str7 << endl;
    x______
}


int check_sys() {
    union Un {
        char c;
        int i;
    } u{};
    u.i = 1;
    return u.c;
}

void case06() {
    union {
        int a; // 0000 0000 0000 0001
        char c;//
    } a{};
    a.a = 1;
//    if (a.c == 1) {
    if (check_sys()) {
        cout << "小端" << endl;
    } else {
        cout << "大端" << endl;
    }
    x______
}

enum {
    red, orange, yellow, green, blue, voliet, indigo, ultraviolet
};

void case07() {
    int a = 10;
    int *ptr_a = &a;
    int *ptr_int = new int;
    cout << ptr_a << endl;
    cout << ptr_int << endl;
    delete ptr_int;
    x______
}

void case08() {
    int *a = new int[10];

    char chs[] = "hello";


    struct things {
        int good;
        int bad;
    };
    things grub = {3, 131};
    things *pt = &grub;

    cout << "good = " << pt->good << " , bad = " << (*pt).bad << endl;

    things *ptr = new things{21, 2121};
    cout << "good = " << ptr->good << " , bad = " << ptr->bad << endl;
    delete ptr;

    delete[] a;
}

char *get_name() {
    char temp[80];
    cout << "input ur name>:";
    cin >> temp;
    char *str1 = new char[strlen(temp) + 1];
    strcpy(str1, temp);
    return str1;
}

void case09() {
    char *ch1;
    ch1 = get_name();
    cout << &ch1 << endl;
    delete[] ch1;
    char *ch2;
    ch2 = get_name();
    cout << &ch2 << endl;
    delete[]ch2;
    x______
}

int main() {
    case09();

    case08();
//    case07();
    cout << red << endl;
    case06();
//    case05();
//    case04();
//    case03();
    //case02();
    int arr[8] = {1, 3, 4};
    cout << arr[7] << endl;
    short things[] = {12, 3131, 31, 32};
    cout << things[3] << " size = " << sizeof things / sizeof(short) << endl;

    char ti[4]{'h', 'i'};
//    char ti1[4] {'h','i',121341}; //列表初始化禁止缩窄转换
//    char ti2[4] = {1,2,3,11111};

//char sh = "s";// error



    return 0;
}