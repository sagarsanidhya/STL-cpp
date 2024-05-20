#include <bits/stdc++.h>
using namespace std;
//vector work as a container
int main() {

    // Your code here
    vector<int> v; //declaration of vector 

    //push back vector
    v.push_back(1);  //increase the size of vector and add elements at the end

    //emplace back vector //emplace back is faster than push back
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);

    //pairs in vector
    vector<pair<int, int>> vp;
    vp.push_back({1, 2});
    vp.emplace_back(3, 4);
    vp.emplace_back(5, 6);
    vp.emplace_back(7, 8);

    //size of vector

    vector<int> vsize(5,100); // created 5 instances on 100

    vector<int> vs(5); // created a space of 5 elements in vector

    vector<int> v1(5,20);
    vector<int> v2(v1); //copy the same elements from v1

    //iterator-------------------points to the memory

    vector<int>::iterator it = v.begin(); //printing the memory address
    it++; 
    cout<< *it<< endl;

    it = it + 2; //shifted 2 position
    cout<< *it<< endl;

    //vector<int>::iterator it = v.end(); //points right after last element

    //vector<int>::iterator it = v.rend(); //reverse end point before the 1st element

    //vector<int>::iterator it = v.rbegin(); //reverse begin point at end element

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " "; // element at the back of the vector

    //for printing the elements of the vector jsut acess it via the index looping like

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " " <<endl;
    }
    //datatype is automatic assign the data type same as element type
    for(auto it = v.begin(); it != v.end(); it++){ // protect us from writing long syntax
        cout << *it << " ";
    }

    for (auto it: v){  //auto means iterate over the elements
        cout << it << " ";
    }

    //------------------------------

    //deletion in a vector

    v.erase(v.begin()+1); //begin + 1 address

    //erase multiple elements

    v.erase(v.begin()+1, v.begin()+3); //begin + 1 address to begin + 3 address //start and end address



    return 0;
}