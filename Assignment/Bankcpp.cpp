#include<iostream>
using namespace std;

class BankAccount {
    private:
        int accountNumber;
        string accountHolderName;
        double balance;
    public:
        //Constructor
        BankAccount(int accNum, string accHolder, double initialBalance=0.0) {
            accountNumber = accNum;
            accountHolderName = accHolder;
            balance = initialBalance;
        }

        void deposit(double amount){
            balance += amount;
            cout << "Deposited " << amount << ". New balance: " << balance << endl;
        }
        void withdraw(double amount){
            if (amount > balance) {
            cout << "Insufficient funds!" << endl;
            }   else {
                balance -= amount;
                cout << "Withdrew " << amount << ". New balance: " << balance << endl;
                    }
        }
        void display() const{
            cout << "Account Number: " << accountNumber << endl;
            cout << "Account Holder: " << accountHolderName << endl;
            cout << "Balance: " << balance << endl;
        }
        void add_data(int accNum, string accHolder, double initialBalance=0.0){
            accountNumber = accNum;
            accountHolderName = accHolder;
            balance = initialBalance;
        }
        friend void transferMoney(BankAccount &fromAccount, BankAccount &toAccount, double amount);

};

void transferMoney(BankAccount &fromAccount, BankAccount &toAccount, double amount){
    if (fromAccount.balance >= amount) {
        fromAccount.balance -= amount;
        toAccount.balance += amount;
        cout << "Transferred " << amount << " from Account " << fromAccount.accountNumber
             << " to Account " << toAccount.accountNumber << endl;
    } else {
        cout << "Insufficient balance to transfer!" << endl;
        }
}

int main() {

    // Create two BankAccount objects
    BankAccount account1(101, "John Doe", 5000.0);
    BankAccount account2(102, "Jane Smith", 3000.0);
    
    // Display initial account details
    account1.display();
    account2.display();

    // Perform deposit, withdraw, and transfer operations
    account1.deposit(1000);
    account2.withdraw(500);

    transferMoney(account1, account2, 2000);

    // Display final account details
    cout << "\nFinal account details:" << endl;
    account1.display();
    account2.display();

    return 0;
}
