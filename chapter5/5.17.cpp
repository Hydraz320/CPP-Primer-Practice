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
  
bool prefix(vector<int> ivec1, vector<int> ivec2)  
{  
    if (ivec1.size() > ivec2.size())  
        return prefix(ivec2, ivec1);  
    else  
    {  
        bool flag = true;  
        for (unsigned int i = 0; i != ivec1.size(); ++i)  
            if (ivec1[i] != ivec2[i])  
                flag = false;  
        return flag;  
    }  
}  
int main()  
{  
    vector<int> ivec1{ 1, 2, 1, 3 }, ivec2{ 1, 2, 1, 3, 5 };  
    if (prefix(ivec1, ivec2))  
        cout << "true" << endl;  
    else  
        cout << "false" << endl;  
    getchar();  
    getchar();  
    return 0;  
}  