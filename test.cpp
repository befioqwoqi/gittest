#include <bits/stdc++.h>
class Solution {
friend void func();
private:
    int a,b;
};
void func(){
    Solution s;
    s.a=1;
    cout<<s.a<<endl; //hell
    s.b=2; 
    cout<<s.b<<endl;
}
using namespace std;
int main() {
    cout << "Hello World!" << endl;
    cout<<"你好世界"<<endl;
    cout<<"Hello World!"<<endl; //hell
    func();
}