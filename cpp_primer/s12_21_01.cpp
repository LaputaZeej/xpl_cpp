//
// Created by 项鹏乐 on 2022/12/21.
//
#include <iostream>
#include "Utils.cpp"
#include <cctype>
#include <fstream>

using namespace std;

void case01() {
    char ch = 'a';
    if (isalpha(ch)) {

    }
}

#define MAX 4

void case02() {
    int golf[MAX];
    int i;
    for (i = 0; i < MAX; ++i) {
        cout << " p" << i << ": ";
        while (!(cin >> golf[i])) {
            cin.clear();
            while (cin.get() != '\n') {
                continue;
            }
            cout << "plz enter number: ";
        }
    }
    for (i = 0; i < MAX; i++) {
        cout << "gold " << i << " = " << golf[i] << endl;
    }
    x__________
}


void case03() {
    std::ofstream outFile;
    ofstream fout;
    outFile.open("abcd.txt");
    double wt = 12.5;
    outFile << wt;
//    char filename[50];
    string filename;
    cin >> filename;
    fout.open(filename + "_abcdefg.txt");
    fout << "烟雨下扬州" << endl;


    outFile.close();
    fout.close();
    x__________
}

void case04() {
    string haha;
//    char haha[40];
    ifstream inFile;
    inFile.open("abcd.txt");
    if (!inFile.is_open()){
        exit(EXIT_FAILURE);
    }
    inFile >> haha;
//    inFile.getline(haha,10);
    cout<<"haha : " << haha << endl;
    inFile.close();
    x__________
}

int main() {
    case04();
//    case03();
//    case02();
//    case01();
    x__________

    return 0;
}