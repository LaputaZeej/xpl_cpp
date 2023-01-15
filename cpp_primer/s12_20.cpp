//
// Created by 项鹏乐 on 2022/12/20.
//
#include <iostream>
#include <vector>
#include <array>

using namespace std;

#define x_______ cout << "------------------" << endl;


void case01(){
    vector<int> vi;
    int n;
    cin>>n;
    vector<double> vd(n);
    x_______
}

void case02(){

    array<int ,5> ai{1};
    array<double,4> ad = {12,131,414,41,};

    cout<< ai[1]<<" , "<< ai.size()<<endl;
    cout<< ad[4]<<" , "<< ad.size()<<endl;
    x_______

}

void case03(){

}

int main() {
    case02();
    case01();

    struct end_year {
        int year;
    };
    end_year year1{}, year2{}, year3{};
    year1.year = 1998;
    end_year *ptr1 = &year2;
    ptr1->year = 1999;
    end_year *years[3]{&year3, &year1, &year2};
    years[0]->year = 2003;

    auto ptr = years;
    cout << (*ptr)->year << endl;

    return 0;
}
