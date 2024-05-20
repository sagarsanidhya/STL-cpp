#include <bits/stdc++.h>
using namespace std;

int main() {

    // Your code here
    pair<int, int> p ={1,3};

    cout<<p.first<<" "<<p.second<<endl;
    

    p.first = 2; //changing the value of p.first

    cout<<p.first<<" "<<p.second<<endl;

    //----------------------------------------------------------------

    //nested pair
    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    //pair array
    pair<int,int> arr[] = {{1,2}, {1,3}}; //it resides under the utility library

    cout<< arr[0].first<<" "<<arr[1].first<<endl; // acessing the pair array

    return 0;
}