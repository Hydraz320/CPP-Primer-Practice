#include <iostream>    
#include <string>    
#include <vector>    
#include <iterator>    
#include <cstring>    
using std::cin; using std::cout;  
using std::endl;  
using std::string; using std::vector;  
using std::begin; using std::end;  
using std::strcat; using std::strcpy;  
  
int main()  
{  
    vector<int> ivec = { 1, 2, 3, 4, 5, 6, 7 };  
    for (auto &i : ivec)  
        i = (i % 2) ? (2 * i) : i;  
    for (auto i : ivec)  
        cout << i << " ";  
    cout << endl;  
    getchar();  
    getchar();  
    return 0;  
}  