#include<iostream>
#include<math.h>
#define f(x) 1/(1+pow(x,2))
using namespace std;
int main()
{
float lower, upper, integration=0.0, stepSize, k;
int i, subInterval;
cout<<"Enter lower limit : ";
cin>>lower;
cout<<"Enter upper limit : ";
cin>>upper;
 cout<<"Enter no. of sub intervals: ";
cin>>subInterval;
stepSize = (upper - lower)/subInterval;
integration = f(lower) + f(upper); for(i=1; i<= subInterval-1; i++) {
k = lower + i*stepSize; if(i%2==0) {
integration = integration + 2 *(f(k));
} else
{ integration = integration + 4 * (f(k));
}
} integration = integration * stepSize/3;
cout<< endl <<"Required value of integration : "<< integration; return 0;
}
