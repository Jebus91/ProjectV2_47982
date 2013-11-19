/* 
 * File:   main.cpp
 * Author: Jebus
 *
 * Created on October 22, 2013, 6:36 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>


using namespace std;

//d(t)=1/2at^2+v(0)t+d(0)

//y = x tanθ - gx²(1+ tan² θ)/2v²

//theta=arctan(v^2+-sqrt(v^4)-g(g(x^2)+2(y)(v^2)/g(x)))

//y = x tan (theta) - ( (g * x^2) / (2 v^2 cos^2(theta) ) 
//[to hit target from initial 0,0]
int main(int argc, char** argv) {
    float num;
    
cout<<"enter a number"<<endl;
cin>>num;

if (num>=1){
    
    cout<<"awesome"<<endl;
    
}

else{
    cout<<"why?"<<endl;
}
    return 0;
}

