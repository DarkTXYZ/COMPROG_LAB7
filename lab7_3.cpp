/*
"Enter your age: "
"Enter your height: "
"Enter your property: "
"Your status = "
"UNFRIEND"
"FRIEND"
"BEST FRIEND"
"ONE-NIGHT-STAND"
"MARRIED"
*/

#include <iostream>

using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    string status;
    if(age <= 20){
        int height; 
        cout << "Enter your height: ";
        cin >> height;
        if(height < 160){
            status = "UNFRIEND";
        }
        else if(height < 175){
            status = "FRIEND";
        }
        else{
            int money; 
            cout << "Enter your property: ";
            cin >> money;
            if(money > 69000000){
                status = "MARRIED";
            }
            else{
                status = "ONE-NIGHT-STAND";
            }
        }
    }
    else{
        if(age < 30){
            int money ;
            cout << "Enter your property: ";
            cin >> money ;
            if(money > 10000000){
                status = "BEST FRIEND";
            }
            else{
                status = "UNFRIEND";
            }
        }
        else{
            status = "UNFRIEND";
        }
    }
    cout << "Your status = " << status;
}
