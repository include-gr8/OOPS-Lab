#include <iostream>
using namespace std;
class employee{
    private:
        int id;
        string name;
        float salary;
        string company_name;
    public:
        void setID(int obj){
            id=obj;
        }
        void setName(string name_new)
        {
            name = name_new;
        }
        void setSalary(float sal){
            salary=sal;
        }
        void setCompanyName(char compname){
            company_name=compname;
        }
        int getID(){
            return id;
        }
        string getName(){
            return name;
        }
        float getSalary(){
            return salary;
        }
        string getcompname(){
            return company_name;
        }
};
int main()
{
    employee Aman;
    Aman.setSalary(9000);
    cout<<Aman.getSalary();

}
