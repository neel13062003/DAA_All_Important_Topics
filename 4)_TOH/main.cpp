// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

// O(2^n) =  Time Complexity
void TOH(int n,char A,char C,char B){

    if(n==0){
        return;
    }

    TOH(n-1,'A','B','C');
    cout<<"Disk Transfer "<<n<< "From "<< A << "To "<< C<<" via"<<B<< endl;
    TOH(n-1,'B','C','A');

}

int main() {
    int n;
    cin>>n;
    char A,B,C;
    TOH(n,'A','C','B');
    //A=From  C=To   B=Aux
    return 0;
}
