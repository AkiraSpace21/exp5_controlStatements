#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 numbers: ";
    cin>>a;
    cin>>b;
    cin>>c;

    if(a > b){
        if(a > c){
            cout << "a is the largest" << endl;
        }
        else if(c > a){
            cout << "c is the largest" << endl;
        }
        else{
            cout << "a and b are greater than c" << endl;
        }
    }
    else if(b > a){
        if(b > c){
            cout << "b is the largest" << endl;
        }
        else if(c > b){
            cout << "c is the largest" << endl;
        }
        else{
            cout << "b and c are greater than a" << endl;
        }
    }
    else {
        if(a > c){
            cout << "a and c are greater than b"<< endl;
        }
        else if(c > a){
            cout << c << " is the largest" << endl;
        }
        else{
            cout << "All numbers are equal" << endl;  
        }
    }
    return 0;
}

   
