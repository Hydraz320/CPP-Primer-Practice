#include <iostream>  
#include <string>  
#include <vector>  
using std::cin; using std::cout;  
using std::endl; using std::string;  
using std::vector;  
  
void sum_of_near(vector<int> ivec)//并未考虑空、只有一个元素的情形  
{  
    for (auto index = 0; index != ivec.size() - 1; ++index)  
        cout << ivec[index] + ivec[index + 1] << " " ;  
    cout << endl;  
}  
  
void sum_of_side(vector<int> ivec)  
{  
    for (unsigned i = 0; i <= ivec.size()-i-1;++i)  
        cout << ivec[i] + ivec[ivec.size() - i - 1] << " " ;  
    cout << endl;  
}  
int main()  
{  
    vector<int> ivec;  
    for (auto i = 0; cin >> i; ivec.push_back(i));//读入  
    sum_of_near(ivec);  
    sum_of_side(ivec);  
    getchar();  
    return 0;  
} 