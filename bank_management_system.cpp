//bank account management system
#include<iostream>
using namespace std;
struct account{  //structure for diffrent data type
	int acc_num;
	string name;
	float balance;
};
class bank{
	protected:
		struct account a[3];
	
	public:
		void open_acc(){
			for(int i=0;i<3;i++){
			cout<<"Enter acc_num, name, balance:"<<endl;
			cin>>a[i].acc_num>>a[i].name>>a[i].balance;
		}
	}
		void deposit();
		void withdraw();
		void display(){
			cout<<endl<<"ACC_NUM"<<" "<<"ACCOUNT_HOLDER"<<" "<<"BALANCE"<<endl;
			for(int i=0;i<3;i++){
				cout<<a[i].acc_num<<" "<<a[i].name<<" "<<a[i].balance<<endl;
			}
		}
		
};
void bank::deposit(){
	int account_num;
	float deposit_amt;
	bool found = false;              // starts as "not found yet"
	cout<<"ENTER ACC_NUM where amount is deposited"<<endl;
	cin>>account_num;
	for(int i=0;i<3;i++){
		if(a[i].acc_num==account_num){
			found = true;              // flip it to true the moment we find a match
			cout<<"Enter amount to be deposited "<<endl;
			cin>>deposit_amt;
			a[i].balance+=deposit_amt;
			cout<<"NEW BALANCE FOR "<<a[i].acc_num<<" is "<<a[i].balance<<endl;
			cout<<"AMOUNT DEPOSITED SUCCESSFULLY "<<endl;
			break;                      // stop searching, we're done
		}
	}
	if(!found){                       // ONLY print this if we never found a match
		cout<<"NO SUCH ACCOUNT"<<endl;
	}
}
void bank:: withdraw(){
	int acc_no;
	float withdraw_amt;
	bool found = false;
	cout<<endl<<"ENter account number from where withdraw is to be done "<<endl;
	cin>>acc_no;
	
	for(int i=0;i<3;i++){
		if(a[i].acc_num==acc_no){
			found=true;
			cout<<"Enter withdraw amount "<<endl;
	        cin>>withdraw_amt;
			if(a[i].balance>withdraw_amt){
				a[i].balance-=withdraw_amt;
				cout<<"AFTER WITHDRAWAL = "<<a[i].balance<<endl;
				cout<<"AMOUNT WITHDRAWN SUCCESSFULLY "<<endl;
			}
			else{
				cout<<"OUT OF RANGE "<<endl;
			}
			break;
		}	
	}
	if(!found){  //runs if same account num not found
		cout<<"NO SUCH ACCOUNT"<<endl;
	}
		
	
}
int main(){
	bank *b= new bank(); //dynamically created bank object
	b->open_acc();
	b->display();
	b->deposit();
	b->withdraw();
	delete b; //deletes each dynamically created boj ~bank()
	return 0;
}