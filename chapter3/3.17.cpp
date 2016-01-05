#include <iostream>  
#include <string>  
#include <vector>  
using std::cin; using std::cout;  
using std::endl; using std::string;  
using std::vector;  
  
void uppercase(vector<string> &svec)  
{  
    for (auto &v : svec)  
        for (auto &c : v)  
            c=toupper(c);//这里必须重新赋值 toupper是返回大写而不是直接修改  
}  
int main()  
{  
    vector<string> svec;  
    for (string words; cin >> words; svec.push_back(words));  
    uppercase(svec);  
    for (auto sv : svec)  
        cout << sv << endl;  
    getchar();  
    return 0;  
}  