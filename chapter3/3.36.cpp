#include <iostream>  
#include <string>  
#include <vector>  
#include <iterator>  
  
using std::cin; using std::cout;  
using std::endl;   
using std::string;using std::vector;   
using std::begin; using std::end;  
  
  
bool compare(const int *const a1_begin, const int *const a1_end, const int *const a2_begin, const int *const a2_end)  
{  
    if ((a1_end - a1_begin) != (a2_end - a2_begin))  
        return false;  
    else  
    {  
        for (auto i = 0; i != a1_end - a1_begin; ++i)  
            if (*(a1_begin + i) != *(a2_begin + i))  
                return false;  
        return true;  
    }  
}  
int main()  
{  
    int a1[] = { 1, 2, 4, 5 };  
    int a2[] = { 1, 2, 4, 5 };  
    int a3[] = { 1, 2 };  
    int a4[] = { 1, 2, 4, 6 };  
    if (compare(begin(a1), end(a1), begin(a2), end(a2)))  
        cout << "this two arrs are same." << endl;  
    else  
        cout << "this two arrs are different." << endl;  
      
    cout << "============================" << endl;  
  
    vector<int> ivec1{ 1, 2, 3, 4 };  
    vector<int> ivec2{ 1, 2, 3, 5 };  
    if (ivec1 == ivec2)  
        cout << "same" << endl;  
    else  
        cout << "different" << endl;  
    getchar();  
    getchar();  
    return 0;  
}  