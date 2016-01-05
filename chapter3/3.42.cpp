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
    vector<int> ivec{ 1, 2, 3, 4, 5 };  
    int arr[5];  
    for (auto i = 0; i != ivec.size(); ++i)  
        arr[i] = ivec[i];  
    for (auto i : arr)  
        cout << i << " ";  
    cout << endl;  
    getchar();  
    getchar();  
    return 0;  
}  