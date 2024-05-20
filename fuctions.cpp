#include <bits/stdc++.h> //Contains all the library functions
using namespace std; //makes us free for writing std on each line

void print(){  //void fiction does not return anything
   cout << "SP" << endl;
}
int sum(int a, int b){ //return type function
    return a+b;
}

int main() {

    // Your code here
    //string i;
    //cin >> i;
    //cout << i << endl;

    print(); //calling void functions

    int s =sum(2,4);
    cout<< s;

    return 0;
}