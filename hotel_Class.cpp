#include <iostream>
using namespace std;
class hotel{
    private:
        int rno;
        string name;
        float tarrif;
        float nod;
        float amount;
    
        float calc()
        {
            amount=nod*tarrif;
            if(amount>10000)
            {
                amount = amount*1.05;
            }
            return amount;
        }
        public:
        void Checkin(int rno,string name,float tarrif,float nod)
        {
            this->rno=rno;
            this->name=name;
            this->tarrif=tarrif;
            this->nod=nod;
        }
        void Checkout(){
            cout<<"Name: "<<name<<endl;
            cout<<"Room Number: "<<rno<<endl;
            cout<<"Per Day Charges: "<<tarrif<<endl;
            cout<<"Days Of Stay: "<<nod<<endl;
            cout<<"Bill Amount: "<<calc()<<endl;

        }
};

int main(){
    hotel d1;
    d1.Checkin(103,"Bittu Lal",1500,4);
    d1.Checkout();
}