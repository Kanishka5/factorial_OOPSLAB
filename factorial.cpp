
#include<iostream>
#include<fstream>
#include<string.h>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
    string x, y, z;
    cout << "Enter the number: \n";
    cin >> x ;
    vector<int> v;
    v.push_back(1);
    int carry=0,j,i,temp;
    long long int n;
    stringstream a1(x);
    a1>>n;
    for(i=2;i<=n;i++)
    {
        for(j=0;j<v.size();j++)
        {
            temp=v[j]*i;
            v[j]=(temp+carry)%10;
            carry=(temp+carry)/10;
        }
        while(carry!=0)
        {
            v.push_back(carry%10);
            carry=carry/10;
        }
    }
    cout << "Factorial of " << n << " is:\n";
    for(i=v.size()-1;i>=0;i--)
        cout << v[i];
    return 0;
}
