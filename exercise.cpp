/*#include <iostream>
#include <cmath>
using namespace std;
double max(double a,double b){
    return(a>b)?a:b;

}
double max(double a,double b,double c){
    return(a>b)?((a>c)?a:c):((b>c)?b:c);}

int main(){
    double a=4.5,b=3.4,c=6.6;
    cout<<max(a,b)<<endl;
    cout<<max(a,b,c);
    return 0;
}*/


#include <iostream>
using namespace std;
void square(int &num){
   num=num*num;
}
void square(double &num){
    num=num*num;
}
int main(){
    int x;
    double y;
     cout<<"enter your num";
     cin>>x;
     cout<<"enter your rational num";
     cin>>y;
     square(x);
     square(y);
     cout<<x<<endl;
     cout<<y;
}