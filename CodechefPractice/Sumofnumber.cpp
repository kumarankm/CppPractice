/*
Input
3 
1 2
100 200
10 40

Output
3
300
50
*/

//Program

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i <n; i++){
        int a;
        int b;
        cin >> a >> b;
        int final;
        final = a + b;
        cout << final << endl;
    }
}
