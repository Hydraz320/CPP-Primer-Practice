#include <iostream>  
#include <string>  
#include <vector>  
#include <iterator>  
  
using std::cin; using std::cout;  
using std::endl;   
using std::string;using std::vector;   
using std::begin; using std::end;  
  
int main()  
{  
    int arr[] = { 1, 2, 3, 4, 5 };  
    int *p = arr;  
    for (int i = 0; i != 5; ++i)//for (auto ptr = arr; ptr != arr + size; ++ptr) *ptr = 0;  
        *(p + i) = 0;  
    for (auto a : arr)  
        cout << a << " ";  
    cout << endl;  
    getchar();  
    getchar();  
    return 0;  
}  