#include <iostream>        
#include <string>        
#include <vector>        
#include <iterator>        
  
using std::cin; using std::cout;  
using std::endl;  
using std::string; using std::vector;  
using std::begin; using std::end;  
  
void print(const int *pi)//显示整型变量  
{     
    if (pi)  
        cout << *pi << endl;  
}  
void print(const char *pc)//显示字符数组  
{  
    if (pc)  
        while (pc)  
            cout << *pc++;  
}  
void print(const int *beg, const int *end)//利用标准库函数begin、end来显示整型数组  
{  
    while (beg != end)  
        cout << *beg++ << endl;  
}  
void print(const int ia[], size_t size)//显式传递长度显示整型数组  
{  
    for (size_t i = 0; i != size; ++i)  
        cout << ia[i] << endl;  
}  
void print(int (&arr)[2])//数组引用形参显示整型数组  
{  
    for (auto i : arr)  
        cout << i << endl;  
}  
int main()  
{  
    char ch[5] = "abcd";  
    int i = 0, j[2] = { 0, 1 };   
  
    print(&i);  
    print(ch);   
    print(begin(j), end(j));  
    print(j, end(j) - begin(j));  
    //print(j);  
    getchar();  
    getchar();  
    return 0;  
}  