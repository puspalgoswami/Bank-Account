#include <iostream>
#include <string>

using namespace std;

class BankAccount {

private:	
	string owner;
	double balance;
	
public:	
	BankAccount(const string& name, double initialBalance){
		owner = name;
		balance = initialBalance;
		cout << "Account created for " << owner << " with balance INR" << balance << endl;
	}
		
	void deposit(double amount){
		balance += amount;
		cout << "Deposited INR" << amount << " New Balance: INR" << balance << endl;
	}

	void withdraw(double amount){
		if (amount <= balance) {
			balance -= amount;
			cout << "Withdrawn INR" << amount << " New Balance: INR" << balance << endl;
		}
		else {
			cout << "Insufficient balance\n";
		}
	}

	~BankAccount() {
		cout << "Account of " << owner << " is now closed. Final balance was INR" << balance << endl;
	}
};

int main() {
	string s;
	double n1, n2, b;
	
	cout << "Enter your name: ";
	getline(cin >> ws, s); 
	
	cout << "Enter balance: ";
	cin >> b;
	
	cout << "Deposit: ";
	cin >> n1;
	
	cout << "Withdraw: ";
	cin >> n2;
	
	BankAccount acc(s, b);
	acc.deposit(n1);
	acc.withdraw(n2);
	
	return 0;
}

