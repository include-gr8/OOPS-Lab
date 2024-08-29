#include <iostream>
using namespace std;
class bank{
    private:
        string name;
        int accno=0;
        string type;
        int balance=0;
    public:
        void assign(string name,int accno,string type,int balance){
            this->name=name;
            this->accno=accno;
            this->type=type;
            this->balance=balance;
    }
    void deposit(int dep){
        balance+=dep;
        cout<<"New Account Balance Is: "<<balance;
    }
    void withdraw(int dep){
        cout<<"Current Balance is: "<<balance<<endl;
        if(dep<balance){
            balance-=dep;
            cout<<"New Account balance is: "<<balance<<endl;
        }
        else
            cout<<"Withdraw Amount Greater Than Bank Balance"<<endl;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"balance: "<<balance<<endl;
    }
};
int main(){
    bank d1;
    int choice,dep;
    string name;
    int accno;
    string type;
    int balance;
    cout<<"Enter Name"<<endl;
    cin>>name;
    cout<<"Enter Account Number"<<endl;
    cin>>accno;
    cout<<"Enter Type of Account"<<endl;
    cin>>type;
    cout<<"Enter Initial Deposit Amount"<<endl;
    cin>>balance;
    d1.assign(name,accno,type,balance);
    cout<<"Enter 1 to deposit money,2 to withraw money,3 to check balance"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Enter amount to deposit: "<<endl;
        cin>>dep;
        cout<<endl;
        d1.deposit(dep);
        break;
    case 2:
        cout<<"Enter amount to withdraw: "<<endl;
        cin>>dep;
        cout<<endl;
        d1.withdraw(dep);
        break;
    case 3:
        d1.display();
        break;
    default:
        break;
    }
    
}