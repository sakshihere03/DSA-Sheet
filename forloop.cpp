#include <iostream>
using namespace std;
class Solution {
public:
    int forLoop(int low, int high) {
        int count = 0;
        int i;
        for(i = low; i<=high ;i++){
            count += i;
        }
    cout<<count;
    return 0;
    }
};
int main(){
    cout<<"Enter low and high:";
    int a,b;
    cin>>a>>b;
    Solution s;
    s.forLoop(a,b);
}