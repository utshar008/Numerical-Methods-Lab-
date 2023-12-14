#include<bits/stdc++.h>
using namespace std;
float findSum(int i,float a[10][10],int n)
{
float sum=0;
for(int j=0;j<n;j++)
{
if(i!=j) sum+=a[i][j];
} return sum;
}
bool isMethodApplicable(float a[10][10],int n)
{
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{ if(fabs(a[i][i])>findSum(i,a,n))
break;
else
return false;
}
} return true;
}
int main() {
float a[10][10], b[10], m[10]={0}, n[10];
int p = 0, q = 0, i = 0, j = 0;
cout<< "Enter size of 2D array : ";
cin >> p;
for (i = 0; i < p; i++) {
for (j = 0; j < p; j++) {
cout << "a[" << i << ", " << j << " ]="; cin >> a[i][j];
}
}
cout << "\nEenter constants:\n";
for (i = 0; i < p; i++) {
cout << "b[" << i << ", " << j << " ]="; cin >> b[i];
}
cout << "\nEnter max iteration : ";
cin >> q;
if(!isMethodApplicable(a,p))
{
cout<<"\nGauss Jacobi Method can't be applied. Enter diagonally dominant matrix";
return 0;
} else{
while (q > 0) {
float m_old[10];
for (i = 0; i < p; i++) {
m_old[i] = m[i];
m[i] = (b[i] / a[i][i]);
for (j = 0; j < p; j++) {
if (j == i) continue;
m[i] = m[i] - ((a[i][j] / a[i][i]) * m_old[j]);
}
cout << "x" << i + 1 << "=" << m[i] << " ";
} cout << "\n";
q--;
}
}
}
