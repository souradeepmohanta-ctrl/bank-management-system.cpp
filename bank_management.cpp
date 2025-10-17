#include <iostream>
using namespace std;

class Bank {
    int accountNumber;
    string name;
    float balance;

public:
   
    void openAccount() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Initial Balance: ";
        cin >> balance;
        cout << "\nAccount created successfully!\n";
    }

   
    void deposit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited successfully!\n";
    }

   
    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > balance)
            cout << "Insufficient balance!\n";
        else {
            balance -= amount;
            cout << "Amount withdrawn successfully!\n";
        }
    }

   
    void display() {
        cout << "\nAccount Details:\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Bank b;
    int choice;

    do {
        cout << "\n----- BANK MANAGEMENT SYSTEM -----\n";
        cout << "1. Open Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Account\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                b.openAccount();
                break;
            case 2:
                b.deposit();
                break;
            case 3:
                b.withdraw();
                break;
            case 4:
                b.display();
                break;
            case 5:
                cout << "Thank you for using Bank Management System!\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
