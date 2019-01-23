#include <iostream>
#include <vector>

using namespace std;

int main() {
    int choice, num1, num2, total;
    cout << "Please choose an option:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division"
            "\n5. Square";
    cin >> choice;
    if(choice == 1){
        cout << "Enter your first number\n";
        cin >> num1;
        cout << "Enter your second number\n";
        cin >> num2;
        total = num1 + num2;
        cout << "Your total is " << total << endl;
    }else if(choice == 2){
        cout << "Enter your first number\n";
        cin >> num1;
        cout << "Enter your second number\n";
        cin >> num2;
        total = num1 - num2;
        cout << "Your total is " << total << endl;
    }else if(choice == 3){
        cout << "Enter your first number\n";
        cin >> num1;
        cout << "Enter your second number\n";
        cin >> num2;
        total = num1 * num2;
        cout << "Your total is " << total << endl;
    }else if(choice == 4){
        cout << "Enter your first number\n";
        cin >> num1;
        cout << "Enter your second number\n";
        cin >> num2;
        total = num1 / num2;
        cout << "Your total is " << total << endl;
    }else if(choice == 5){
        total = 0;
        cout << "Enter your first number\n";
        cin >> num1;
        //cout << "Enter your power";
        //cin >> num2;
        //int num1tot = num1;
        //for(int i = 1;i < num2; i++){
        //    num1tot = num1 * num1;
        //    total = total + num1tot;
        //}
        //cout << "Your total is " << total << endl;
        total = num1 * num1;
        cout << "Your total is " << total << endl;
    }
}