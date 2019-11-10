#include<iostream>
#include<math.h>

using namespace std;
#define e  2.718281828459
long long int factorial(int n);
int main(void){
    double Alpha=0;
    double t=0;
    double maxX=0;
    cout<<"Alpha = ";
    cin>>Alpha;
    cout<<"t = ";
    cin>>t;
    cout<<"maxX = ";
    cin>>maxX;
    double result=0;
    int i=0;
    for(i=0;i<=maxX;i++){
        result+=pow(e,-Alpha*t)*pow(Alpha*t,i)/factorial(i);
        cout<<result<<endl;
    }
    cout<<"The sum of P(X<=maxX) during t is "<<result<<endl;
    cin>>t;
    return 0;
}

long long int  factorial(int n){
    long long int result=1;
    int i=0;
    for(i=n;i>0;--i){
        result*=i;
    }
    cout<<"factorial "<<n<<":"<<result<<endl;   //to check whether it's out of range
    return result;
}