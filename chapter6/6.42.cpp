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
  
string making_plural(size_t ctr, const string &word, const string &ending = "s")  
{  
    return (ctr > 1) ? word + ending : word;  
}  
int main()  
{  
    cout << making_plural(1, "success", "es") << endl;  
    cout << making_plural(2, "success", "es") << endl;  
    cout << making_plural(1, "failure") << endl;  
    cout << making_plural(2, "failure") << endl;  
    getchar();  
    getchar();  
    return 0;  
}  