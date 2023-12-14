#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
int i,j,k,n;
cout<<"\nEnter the no. of data pairs to be entered:\n";
 cin>>n;
double x[n],y[n],a,b;
cout<<"\nEnter values of x:\n";
for (i=0;i<n;i++)
cin>>x[i];
cout<<"\nEnter values of y:\n";
for (i=0;i<n;i++)
cin>>y[i];
double xsum=0, x2sum=0,ysum=0,xysum=0;
for (i=0;i<n;i++)
{
xsum=xsum+x[i];
ysum=ysum+y[i];
x2sum=x2sum+pow(x[i],2);
xysum=xysum+x[i]*y[i];
} a=(n*xysum-xsum*ysum)/(n*x2sum-xsum*xsum);
b=(x2sum*ysum-xsum*xysum)/(x2sum*n-xsum*xsum);
double y_fit[n];
for (i=0;i<n;i++)
y_fit[i]=a*x[i]+b;
cout<<"x"<<setw(19)<<"y(observed)"<<setw(19)<<"y(fitted)"<<endl;
for (i=0;i<n;i++)
cout<<x[i]<<setw(15)<<y[i]<<setw(18)<<y_fit[i]<<endl;
cout<<"\nThe linear fit line is of the form:\n\n"<<a<<"x + "<<b<<endl;
return 0;
}
