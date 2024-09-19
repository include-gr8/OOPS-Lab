#include<iostream>
using namespace std;
class Complex{
    private:
        int real;
        int img;
    public:
        Complex(){};
        Complex(int real,int img){
            this->img=img;
            this->real=real;
        }
        Complex operator +(Complex num2){
            Complex num3;
            num3.img=img+num2.img;
            num3.real=real+num2.real;
            return num3;
        }
        Complex operator -(Complex num2){
            Complex num3;
            num3.img=img-num2.img;
            num3.real=real-num2.real;
            return num3;
        }
        bool operator ==(Complex num2){
            if(real==num2.real && img==num2.img){
                return true;

            }
            else{
                return false;
            }
        }
        void show(){
            cout<<real<<" + "<<img<<'i'<<endl;
        }
};
int main(){
    int r,i;
    cout<<"Enter real and Imaginary components of number 1"<<endl;
    cin>>r>>i;
    Complex num1(r,i);
    cout<<"Enter real and Imaginary components of number 2"<<endl;
    cin>>r>>i;
    Complex num2(r,i);
    if(num1==num2){
        cout<<"Equal Complex Numbers"<<endl;
    }
    else
    {
        cout<<"Unequal Complex Numbers"<<endl;
    }
    Complex num3 = num1+num2;
    cout<<"Addition of num1 and num2: ";
    num3.show();
    cout<<"Subtraction of num1 and num2: ";
    num3=num1-num2;
    num3.show();
    

}