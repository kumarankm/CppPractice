/*

Write a program to find the remainder when an integer A is divided by an integer B.

Input
The first line contains an integer T, the total number of test cases. Then T lines follow, each line contains two Integers A and B.

Output
For each test case, find the remainder when A is divided by B, and display it in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ A,B ≤ 10000
Example
Input
3 
1 2
100 200
40 15

Output
1
100
10
7
*/

#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    for(int i = 0; i < a; i++){
        int b1, b2;
        cin >> b1 >> b2;
        int c;
        c = b1 % b2;
        cout << c << endl;
    }
}
