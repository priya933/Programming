include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the number of people by user  "<<endl;
cin>>n;
int max=((n-1)*n)/2;
//((N-1)*N)/2 is the number of handhsakes 
cout<<"The max number od handshakes is: "<<max<<endl;
return 0;

}
