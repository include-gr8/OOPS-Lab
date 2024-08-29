#include <iostream>
#include "xyz.h"
#include "pqr.h"

using namespace std;
// using namespace mySpace1;
// using namespace mySpace2;

int main(){
    
    cout<<mySpace1::x<<endl;
    cout<<mySpace2::x<<endl;
    mySpace2::show();
    mySpace1::show();
}