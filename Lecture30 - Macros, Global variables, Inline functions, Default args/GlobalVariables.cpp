/*
    Bad practice to use global variable because any function can access and change 
    its value
    hence if you want to share variables among different blocks and functions
    use reference variables
    
*/

#include<iostream>
using namespace std;

int score = 15;


void a(int& i) {

    cout << score << " in a" << endl;
    score++;
    char ch = 'a';
    cout << i << endl;
}

void b(int& i) {
    cout << score << " in b" << endl;
    cout << i << endl;
}

int main() {
    cout << score << " in main" << endl;
    int i = 5;
    a(i);
    b(i);

    return 0;
}