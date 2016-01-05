#include <iostream>  
#include <string>  
#include <vector>  
using std::cin; using std::cout;  
using std::endl; using std::string;  
using std::vector;  
  
int main()  
{  
    string v;  
    vector<decltype(v)> vec;  
    while (cin >> v)  
        vec.push_back(v);  
    for (auto vv : vec)  
        cout << vv << endl;  
    getchar();  
    getchar();  
    return 0;  
}  