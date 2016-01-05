#include <iostream>  
#include <string>  
#include <vector>  
#include <iterator>  
#include <cstring>  
using std::cin; using std::cout;  
using std::endl;   
using std::string;using std::vector;   
using std::begin; using std::end;  
using std::strcat; using std::strcpy;  
  
int main()  
{  
    int ia[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };  
    //version 1: range for  
    for (int (&row)[4] : ia){  
        for (int col : row)  
            cout << col << " ";  
        cout << endl;  
    }  
    //version 2: common for, []  
    for (unsigned i = 0; i != 3; ++i){  
        for (unsigned j = 0; j != 4; ++j)  
            cout << ia[i][j] << " ";  
        cout << endl;  
    }  
    //version 3: common for, pointer  
    for (int(*p)[4] = ia; p != ia + 3; ++p){  
        for (int *q = *p; q != *p + 4; ++q)  
            cout << *q << " ";  
        cout << endl;  
    }  
    getchar();  
    getchar();  
    return 0;  
}