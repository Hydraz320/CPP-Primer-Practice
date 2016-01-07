#include <iostream>        
#include <string>        
#include <vector>        
#include <iterator>        
#include <initializer_list>  
  
using std::cin; using std::cout;  
using std::endl;  
using std::string; using std::vector;  
using std::begin; using std::end;  
using std::initializer_list;  
  
using iter = vector<int>::const_iterator;  
void display(iter beg, iter end)  
{  
    if (beg != end)  
    {  
        cout << *beg << " ";  
        return display(++beg, end);  
    }  
    cout << endl;  
    return;  
}  
int main()  
{  
    vector<int> ivec{ 1, 2, 3, 4, 5 };  
    display(ivec.cbegin(),ivec.cend());  
    getchar();  
    getchar();  
    return 0;  
}