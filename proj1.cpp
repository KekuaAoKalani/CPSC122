/*
Name: Zion Vaoifi
Class: CPSC 122
Date: 09/09/2022
Assignment: Project 1 (Example 4)
Description: Program illustrates
    void function
    while loop
    modulus
*/

#include <iostream>
using namespace std;

void display(int);
/*
function prototype must be delclared before use. Prototype 
includes return type, function name, parameters type(s).
*/

bool isPrime(int);

int main(){
    int n, c;

    cout << "How many integers do you want to see?" << endl;
    cin >> n;


    cout << "Distributed over how many columns?" << endl;
    cin >>  c;

    display(n);

    cout << endl;

    return 0;
}


void display(int n){
    for(int i = 2; i < n; i++)
    if (isPrime(i)){
        cout << i << " ";
    }
}


bool isPrime(int n){
    bool is_prime = true;

    if (n==0||n==1){
        is_prime = false;
    }
    
    for (int i=2; i<=n/2; ++i){
        if (n % i == 0){
            is_prime = false;
            break;
        }
    }
    return is_prime;
}