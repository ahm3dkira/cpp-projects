#include<iostream>
#include<cmath>
using namespace std;

int main(){

int n,temp;

int arr[20000];

arr[0]=1;

int j=0;//for index of array arr

cout<<"Enter the number.:";
cin>>n;

for(;n>=2;n--){
        temp=0;

        for(int i=0;i<=j;i++){
            temp=(arr[i]*n)+temp;
            arr[i]=temp%10;
            temp=temp/10;
        }

        while(temp>0){
        arr[++j]=temp%10;
        temp=temp/10;
        }
}

for(int i=j;i>=0;i--){
    cout<<arr[i];
}
return 0;

}
