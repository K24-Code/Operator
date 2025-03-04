#include<iostream>
using namespace std;
int main(){
    int a=5;
    cout<< (++a) <<endl;
    //a ki value 6 ho gaie hai
    cout<< (a++)<<endl;
    // a ki value 7 to ho gaie but 6 print huie qki post increment hua hai to check this move to next step
    cout<< a << endl;

    //now decrement
    cout<<(--a)<<endl; // a ki value 6 ho gaie

    cout<< (a--)<<endl; // a ki value print 6 huie hai but ho 5 gaie hai post decrement ki wajah se

    cout<< a <<endl;
    return 0;
}