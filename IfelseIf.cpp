#include <iostream>
using namespace std;
class Solution {
public:
    void studentGrade(int marks) {
        if(marks>=90){
            cout<<"Grade A";
        }
        else if(marks>=70){
            cout<<"Grade B";
        }
        else if(marks>=35){
            cout<<"Grade C";
        }
        else{
            cout<<"Fail";
        }
    }
};
int main(){
    cout<<"Enter a number:";
    int x;
    cin>>x;
    Solution s;
    s.studentGrade(x);
}