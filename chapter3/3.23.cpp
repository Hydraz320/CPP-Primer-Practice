#include <iostream>  
#include <string>  
#include <vector>  
using std::cin; using std::cout;  
using std::endl; using std::string;  
using std::vector;  
  
void read(vector<int> &ivec)  
{  
    int iv = 0, time = 10;  
    while (time != 0 && cin >> iv)//此处应注意不把cin>>iv写在前，  
    {                             //防止出现等待输入的情况，应该在输入10个数后直接结束循环   
        ivec.push_back(iv);  
        --time;  
    }  
}  
void twoTimes(vector<int> ivec)  
{  
    for (auto iter = ivec.begin(); iter != ivec.end(); ++iter)  
        (*iter) *= 2;  
}  
void display(vector<int> ivec)  
{  
    for (auto iter : ivec)  
        cout << iter << " ";  
    cout << endl;  
}  
  
int main()  
{  
    vector<int> ivec;  
    read(ivec);  
    twoTimes(ivec);  
    display(ivec);  
    getchar();  
    getchar();  
    return 0;  
}  