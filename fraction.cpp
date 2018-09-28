//https://practice.geeksforgeeks.org/problems/add-two-fractions/1

#include<bits/stdc++.h>
using namespace std;
void addFraction(int num1, int den1, int num2,int den2);
long int find_lcm(int,int);
int gcd(int,int);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d,resultNum,resultDen;
        cin>>a>>b>>c>>d;
        addFraction(a,b,c,d);
    }
}
int gcd(int a, int b){
    if(a==0)
        return b;
    return gcd(b%a, a);
}
/*You are required to complete this function*/
void addFraction(int num1, int den1, int num2,int den2)
{
    long int lcm = find_lcm(den1,den2);
    long int n1 = num1 * (lcm/den1);
    long int n2 = num2 *(lcm/den2);
    long int d1 = lcm;
    
    long int gcdd = gcd(lcm,n1+n2);

    cout<<(n1+n2)/gcdd<<"/"<<d1/gcdd;
    
}
long int find_lcm(int den1,int den2)
{
    int max = (den1>den2)?den1:den2;
    while(1)
    {
        if(max%den1 == 0 && max%den2 == 0)
        {
            
            return max;
        }
        ++max;
    }
}