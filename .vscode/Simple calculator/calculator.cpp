#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

// Functions Prototype
void print();
double division(double num1,double num2);
double modulus(int num1,int num2);

int main(){
    double num1,num2,result;
    int choose;
    
    while(1){
    print();
    cin>>choose;
    if(choose == 7){
        cout<<"Programe terminated successfully"<<endl;
        break;
    }

    if(choose <1 || choose >7){
        cerr<<"Invalid menu choice";
        continue;
    }

    cout<<"Enter the first number ";
    cin>>num1;
    cout<<"Enter the second number ";
    cin>>num2;

    switch(choose){
        case 1 : result = num1+num2;     //Additiom
        break;
        case 2 : result = num1-num2;     //Subtraction
        break;
        case 3 : result = division(num1,num2);    //Division
        break;
        case 4 : result = num1*num2;     //Multiplication
        break;
        case 5 : if(num2 == 0){
            cerr<<"Invalid result"<<endl;
            exit(0);
        }
        result = (int)num1%(int)num2;   //Modulus
        break;
        case 6 : result = pow(num1,num2);    // Power
        break; 
    }
    if(!isnan(result)){
        cout<<"Result of this operation is "<<result;
    }
}
return 0;
}
 
void print(){
    cout<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Welcome to the simple calculator "<<endl;

    cout<<endl;
    cout<<"1.Add"<<endl;
    cout<<"2.Subtract"<<endl;
    cout<<"3.Divide"<<endl;
    cout<<"4.Multiply"<<endl;
    cout<<"5.Modulus"<<endl;
    cout<<"6.Power"<<endl;
    cout<<"7.Exit"<<endl;
    cout<<"Choose what operation do you want "<<endl;
}

double division(double num1, double num2){
    if(num2 == 0){
        cerr<<"Invalid argument for division"<<endl;
        return NAN;
    }else{
        return num1 / num2;
    }
}
