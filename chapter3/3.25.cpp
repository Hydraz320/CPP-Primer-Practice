#include <iostream>  
#include <string>  
#include <vector>  
using std::cin; using std::cout;  
using std::endl; using std::string;  
using std::vector;  
  
int main()  
{  
    vector<int> ivec1(10);//此处我忘记设定项数10了，要根据github上的答案改进  
    int iv = 0;  
    for (int i = 0; i < 10 && cin >> iv; ++i)//注意此处先判断i<10  
        ivec1.push_back(iv);  
    for (auto i : ivec1)  
        cout << i << " ";  
    cout << endl;  
  
    vector<int>ivec2(ivec1);  
    for (auto i : ivec2)  
        cout << i << " ";  
    cout << endl;  
      
    getchar();  
    getchar();  
    return 0;  
}  