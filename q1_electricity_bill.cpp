#include <iostream>
using namespace std;
class bill{
    private:
        string name;
        int units;
        float bill;
     public:
        void setName(string new_Name)
        {
            name = new_Name;
        }
        string  getName()
        {
            return name;
        }
        void setUnits(int new_Units)
        {
            units = new_Units;
        }
        int get_Units()
        {
            return units;
        }
        
        int getBill()
        {
            
            if(units<=100)
            {
                bill=0.6*units;
            }
            else if(units>100 && units<=300)
            {
                bill=60+(units-100)*0.8;
            }
            else 
            {
                bill=60+160+(units-300)*0.9;
            }
            bill+=50;
            if(bill>300)
            {
                bill=bill+(bill*0.15);
            }
            return bill;
        }
};
int main(){
    int n;
    cout<<"Enter the number of customers"<<endl;
    cin>>n;
    bill d1[n];
    string name;
    int units;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Name"<<endl;
        cin>>name;
        cout<<"Enter number of units"<<endl;
        cin>>units;
        d1[i].setName(name);
        d1[i].setUnits(units);
        cout<<d1[i].getBill()<<endl;
    }
}