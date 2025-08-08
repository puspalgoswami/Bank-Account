#include <iostream>

using namespace std;

class BankAccount {

private:	
	string owner;
	double balance;
	
public:	
	BankAccount(string name, double initialBalance){
		owner = name;
		balance = initialBalance;
		cout << "Account created for " << owner << " with balance INR" << balance << endl;
	}
		


void deposit(double amount){
	balance = balance + amount;
	cout << "Deposited INR" << amount << " New Balance: INR" << balance << endl;
};

void withdraw(double amount){
	if (amount <= balance) {
		balance -= amount;
	    cout << "Withdrawn INR" << amount << " New Balance: INR" << balance << endl;
	}
	else {
		cout << "Insufficient balance\n";
	}
};

BankAccount() {
	cout << "Account of " << owner << " is now closed. Final balance was INR" << balance << endl;
}
};


int main() {
	BankAccount acc("Puspal", 7429.33);
	acc.deposit(1000);
	acc.withdraw(200);
	return 0;
}
