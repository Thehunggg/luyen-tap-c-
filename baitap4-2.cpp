#include<iostream>
using namespace std;
int main(){
    double height, weight, bmi;
    //khai bao cac bien height, weight,bmi
    cout<<"Ener your height in m:";
    cin>>height;
    cout<<"Enter your weight in kg";
    cin>>weight;
    
     bmi= weight/(height*height);
    cout<<"Your BMI is:"<<bmi;
    return 0;





}