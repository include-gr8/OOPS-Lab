#include <iostream>
using namespace std;
class time{
    private:
        int hour;
        int minute;
        int second;
    public:
        time(){
            hour=0;
            minute=0;
            second=0;
    }
    time(int hour,int minute,int second){
        this->hour=hour;
        this->minute=minute;
        this->second=second;
    }
    void display(){
        cout<<hour<<':'<<minute<<':'<<second<<endl;
    }
    time add(time t1,time t2){
        time t3;
        t3.hour=t1.hour+t2.hour;
        t3.minute=t1.minute+t2.minute;
        t3.second=t1.second+t2.second;
        if(t3.second>60){
            t3.minute++;
            t3.second-=60;
        }
        if(t3.minute>60){
            t3.hour++;
            t3.minute-=60;
        }
        return t3;
    }
};
int main(){
    int h,m,s;
    cout<<"Enter hours, minutes, seconds for first object"<<endl;
    cin>>h>>m>>s;
    time t1(h,m,s);
    cout<<"Enter hours, minutes, seconds for second object"<<endl;
    cin>>h>>m>>s;
    time t2(h,m,s);
    time t3;
    t3=t3.add(t1,t2);
    t3.display();
}
