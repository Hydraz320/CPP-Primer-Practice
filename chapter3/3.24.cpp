#include <iostream>  
#include <string>  
#include <vector>  
using std::cin; using std::cout;  
using std::endl; using std::string;  
using std::vector;  
  
void input(vector<int> &ivec)  
{  
    int i = 0;  
    while (cin >> i)  
        ivec.push_back(i);  
    for (auto i : ivec)  
        cout << i << " ";  
    cout << endl;  
}  
void sum_of_near(vector<int> ivec)  
{  
    for (auto beg = ivec.cbegin(); beg != ivec.cend()-1; ++beg)  
        cout << (*beg) + *(beg + 1)<<" ";  
    cout << endl;  
}  
void sum_of_side(vector<int> ivec)  
{  
    auto beg = ivec.cbegin(), end = ivec.cend()-1;  
    for (; beg <= end; ++beg, --end)  
        cout << (*beg) + (*end) << " ";  
    cout << endl;  
}  
int main()  
{  
    vector<int> ivec;  
    input(ivec);  
    sum_of_near(ivec);  
    sum_of_side(ivec);  
    getchar();  
    getchar();  
    return 0;  
}  