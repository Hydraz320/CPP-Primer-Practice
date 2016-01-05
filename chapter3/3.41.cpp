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
    int int_arr[] = { 1, 2, 3, 4, 5 };  
    vector<int> ivec(begin(int_arr), end(int_arr));  
    for (auto i : ivec)  
        cout << i << " ";  
    cout << endl;  
    getchar();  
    getchar();  
    return 0;  
}  