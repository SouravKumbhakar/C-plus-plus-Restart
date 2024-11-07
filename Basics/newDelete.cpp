#include <iostream>
using namespace std;

int main(){
    int *a = new int(50);
    int *b = new int[5];
    int i;
    cout<<"enter the array elements: ";
    for(i = 0; i < 5; i++){
        cin>>*(b + i);
    }

    cout<<"the array elements are: ";
    for(i = 0; i < 5; i++){
        cout<<*(b + i)<<" ";
    }
    cout<<"the value of a is: "<<*a<<endl;
    delete a;
    delete[] b;
    cout<<"the value of a is: "<<*a<<endl;  
    return 0;
}

