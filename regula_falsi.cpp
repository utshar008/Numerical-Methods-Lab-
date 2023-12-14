#include<bits/stdc++.h>
#define f(x) pow(x,4)-x-10
using namespace std;
int main() {
float x0, x1, x, f0, f1, f, e;
int step = 1;
up:
cout<<" first guess: "; cin>>x0; cout<<"second guess: "; cin>>x1;
cout<<" tolerable error: "; cin>>e;
f0 = f(x0); f1 = f(x1);
if( f0 * f1 > 0.0)
{
cout<<"wrong Initial guess"<<endl;
goto up;
}
cout<<"Regular Falsi Method";
do {
x = x0 - (x0-x1) * f0/ (f0-f1);
f = f(x); cout<<"Iteration-"<< step<<":\t x = "<< x<<" f(x) = "<< f(x)<< endl;
if( f0 * f < 0)
{
x1 = x; f1 = f;
}
else
{
x0 = x; f0 = f;
} step = step + 1;
}while(fabs(f)>e);
cout<< endl<<"Root is: "<< x<< endl;
return 0;}
