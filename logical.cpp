#include<iostream>
using namespace std;
int main(){

    bool cond1 = (10>5);
    bool cond2 = (5>=5);
    bool cond3 = (2!=0);

    if(cond1 && cond2 && cond3){
        cout<<"all conditions are true"<<endl;
    }
    else {
        cout<<"all conditions are not true"<<endl;
    }
    return 0;
}