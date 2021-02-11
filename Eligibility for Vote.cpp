#include<iostream>
using namespace std;

int main() {

    int age;
    cout << "Enter the age of user:\n";
    cin>>age;

    if (age >= 18) {
        cout << "Congrats! You're eligible to vote!";
    } else {
        cout << "Oops! You aren't eligible yet. Please, wait for "<<18-age<<" yrs to vote.";
    }

    return 0;
}
