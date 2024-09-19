#include<iostream>
using namespace std;
class Xyz{
    private:
        int x,y,z;
    public:
        Xyz(){} 
        Xyz(int x,int y,int z){
            this->x=x;
            this->y=y;
            this->z=z;

        }
        void operator -(){//Unary -
            x*=(-1);
            y*=(-1);
            z*=(-1);
        }
        void operator ++(){//PostIncreament
            x++;
            y++;
            z++;
        }
        void operator ++(int noUse){//PreIncreament
            x++;
            y++;
            z++;
        }
        void operator --(){//Postdecreament
            x--;
            y--;
            z--;
        }
         void operator --(int noUse){//Predecreament
            x--;
            y--;
            z--;
        }
        void show(){
            cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
        }
};
int main(){
    int x,y,z;
    cout<<"Enter x,y & z of object d1"<<endl;
    cin>>x>>y>>z;
    Xyz d1(x,y,z);
    cout<<"Enter x,y & z of object d2"<<endl;
    cin>>x>>y>>z;
    Xyz d2(x,y,z);
    
    d1++;
    cout<<"Increament of d1: ";
    d1.show();
    d2--;
    cout<<"Decreament of d2: ";
    d2.show();
    cout<<"Unary Minus of d2: ";
    -d2;
    d2.show();

}