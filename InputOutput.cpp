#include <iostream>
using namespace std;
class Solution {
public:
    void printNumber() {
    cout<<"Enter a number:";
    int x;
    cin>>x;
    cout<<"You entered: "<<x<<endl;
    }
};
int main(){
    Solution s;
    s.printNumber();
}