#include<iostream>
using namespace std;
int main(){
int x[5] = {4,1,1,1,-5};
int i = 0,p,e;
e = x[0];
while(i < 4){
if(e<x[i+1]){
  cout << "No" <<endl;
}
else if(e>x[i+1]){
    p = i+1;
    e = x[i+1];
    cout <<"yes"<<endl;
}
i++;
}
cout << p;
return 0;
}
