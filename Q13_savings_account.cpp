#include <iostream>
using namespace std;
class SavingsAccount{
    private:
        float savingsBalance;
    public:
        static float annualInterestRate;
        static void modifyInterestRate(float InterestRate){
            annualInterestRate=InterestRate;
        }
        void calculateMonthlyInterest(){
            savingsBalance+=(savingsBalance*annualInterestRate)/12;
        }
        void Setbalance(float savingsBalance){
            this->savingsBalance=savingsBalance;
        }
        float getBalance(){
            calculateMonthlyInterest();
            return savingsBalance;
        }
};
float SavingsAccount::annualInterestRate = 0;
int main(){
    SavingsAccount saver1,saver2;
    saver1.Setbalance(2000);
    saver2.Setbalance(3000);
    saver1.modifyInterestRate(0.04);

    cout<<"Saver 1's Balance: "<<saver1.getBalance()<<endl;
    cout<<"Saver 2's Balance: "<<saver2.getBalance()<<endl;
    saver1.modifyInterestRate(0.05);
    cout<<"Saver 1's Balance: "<<saver1.getBalance()<<endl;
    cout<<"Saver 2's Balance: "<<saver2.getBalance()<<endl;
}