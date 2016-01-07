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
  
int sum_list(initializer_list<int> ini)  
{  
    int sum = 0;  
    for (auto i : ini)  
        sum += i;  
    return sum;  
}  
int main()  
{  
    initializer_list<int> ini({ 1, 2, 3, 4, 5, 6, 7, 8, 9 });  
    cout << sum_list(ini) << endl;  
    getchar();  
    getchar();  
    return 0;  
}  