//structure and class
#include<iostream>
using namespace std;
class BankAccount{
	private:
		string name;
		int acc_num;
		float balance;
	public:
		BankAccount(){  //default constructor
			name="ajiya";
			acc_num=30104;
			balance=0;  //default value
		}
		
		BankAccount(string n, int a, float b){  //parametrized constructor
			name=n;
			acc_num=a;
			balance=b;
		}
		
		BankAccount(const BankAccount &a){  //parametrized copy constructor
			name=a.name;
			acc_num=a.acc_num;
			balance=a.balance;
		}
		
		~BankAccount(){  //destructor
			cout<<"OBJECT destroyed"<<endl;
		}
		
		void deposit(){
			int amount;
			cout<<"Enter amount to deposit"<<endl;
			cin>>amount;
			balance+=amount;
			cout<<"NEW BALANCE ="<<balance<<endl;
			cout<<"Deposited Successfully!"<<endl;
		}
		
		void withdraw(){
			int amt;
			cout<<"Enter amount to withdraw"<<endl;
			cin>>amt;
			if(balance>=amt){
				balance-=amt;
				cout<<"AFTER WITHDRAWL= "<<balance<<endl;
				cout<<"WITHDRAWN Successfully!"<<endl;
			}
			else{
			cout<<"OUT OF RANGE!"<<endl;
		}
		}
		
		void display(){
			cout<<name<<" "<<acc_num<<" "<<balance<<endl;
		}
};

int main(){
	BankAccount a1("siya",10203,70000),a2;
	cout<<"NAME"<<" "<<"ACC_NUM"<<" "<<"BALANCE"<<endl;
	a1.display();
	a2.display();
	cout<<endl;
	a1.deposit();  //deposits on object a1
	cout<<endl;  
	a2.withdraw();  //withdraws form object a2
	cout<<endl;
	BankAccount a3=a1;  //default copy constructor
	cout<<"COPIED FROM OBJECT a1 "<<endl;
	a3.display();
	
	return 0;
}