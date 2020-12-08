#include <iostream>

using namespace std;

struct Time{
    int hours,mins,period,time;
};

int main() {
  Time in;
  cout<<"Enter hours: ";
  cin>>in.hours;
  cout<<"Enter mins: ";
  cin>>in.mins;
  cout<<"Enter period of time: ";
  cin>>in.period;
  
  Time math;
  math.time=in.hours*60+in.mins+in.period;
  math.hours=math.time/60;
  math.mins=math.time%60;
  while(math.hours>=24){
      math.hours=math.hours%24;
  }
  cout<<math.hours<<":"<<math.mins;
  
}