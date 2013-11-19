/* 
 * File:   main.cpp
 * Author: Jebus
 *
 * Created on October 22, 2013, 6:36 PM
 */
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <cmath>



using namespace std;
/*
 int shot_1(int alt, int v, int d, int angle){
  int d=1/2(alt*alt)+v+d;
 * 
 }*/

int randomfloat(int min,int max)
{
	int r=(int)rand()/(int)RAND_MAX;
	return min+r*(max-min);
}

 //y = x*tan(theta)-(32*pow(x,2))/(2*pow(v,2)*pow(cos(theta),2))

//d(t)=1/2at^2+v(0)t+d(0)

//y = x tanθ - gx²(1 + tan² θ)/2v²

//theta=arctan(v^2+-sqrt(v^4)-g(g(x^2)+2(y)(v^2)/g(x)))

//y = x tan (theta) - ( (g * x^2) / (2 v^2 cos^2(theta) ) 
//[to hit target from initial 0,0]
int main(int argc, char** argv) {
  srand (time(0));
    int min,max;
       min=10;
       max=1000;
    //int range;
     // range=(max-min);
    int enemy;
    enemy=rand()%(max - min) + min;
            //randomfloat(min, max);
            //min+int((range*rand())/(RAND_MAX+1));
            //rand()%20000+60000;
    char response,y,n;
         
    loop_a:
    
    cout<<"hello and welcome to gunner. "<<endl;
    cout<<"                             "<<endl;
    cout<<"the rules are: "<<endl;
    cout<<"1) an enemy will appear randomly between 20,000 & 60,000 yards "<<endl;
    cout<<"2) you have 5 tries to hit the enemy before he destroys you "<<endl;
    cout<<"3) use angles to determine the trajectory of your weapon in order"
            " to hit the enemy"<<endl;
    
    cout<<"would you like to go over the rules again? "<<endl;
    cout<<"hit y for yes and n for no"<<endl;
    cin>>response;
    //
    switch(response){
        
    
        case('y'):{
            goto loop_a;
        }
        case('n'):{
    cout<<"                                                         "<<endl;
    cout<<"let the battle begin "<<endl;
    }
    }
    cout<<"the enemy has appeared"<<endl;
    cout<<"                                                         "<<endl;
    cout<<"take aim and ready your first shot"<<endl;
    cout<<"                                                         "<<endl;
    
    int angle;
    int d=10;
    int v=10;
    int g=9.8;
   
    int theta;
    theta=angle*(22/1260);
    
    
    cout<<"atempt 1"<<endl;
    cout<<""<<endl;
    cout<<"enter the angle of your shot."<<endl;
    cin>>angle;
    
    cout<<angle*d*v<<endl;
    
 
    
    
    
    
    //(d)tan(theta)-((g*pow(d, 2)/(2pow(v, 2)pow(cos, 2)(theta))
    
    
    //angle*tan(theta)-(32*pow(angle,2))/(2*pow(v,2)*pow(cos(theta),2)
    
    
    
    
    return 0;
}


/*   float num;
    
cout<<"enter a number"<<endl;
cin>>num;

if (num>=1){
    
    cout<<"awesome"<<endl;
    
}

else{
    cout<<"why?"<<endl;
}*/