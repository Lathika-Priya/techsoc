#include <iostream>
//basic calculator
using namespace std;

double power (double basenum, double pownum){
    double result = 1;
    for (int i=0; i<pownum;i++){
        result = result * basenum;
    }
    return result;
}
double factorial(int num){
    if(num == 0){
        return 1;
    }
    else{
        double result = 1;
        for(int i = num; i>=1;i--){
            result = result*i;
        } 
        return result;
    }
}
double sin(double degree){
    double radians = 3.1415926536/180*degree;
    double result = 0.0;
    int sign=1;
    int x=1;
    for(int x=1; x<31; x+=2){
        result = result + sign*power(radians, x)/factorial(x);
        sign=sign*-1;
    }  
    return result;
}
double cos(double degree){
    double radians = 3.1415926536/180*degree;
    double result = 1;
    int sign=-1;
    for(int x=2; x<31; x+=2){
        result = result + sign*power(radians, x)/factorial(x);
        sign=sign*-1;
    }
    return result;
}
double tan(double degree){
    double result = sin(degree)/cos(degree);
    return result;
}
int main(){
    double num1,num2,basenum,pownum,number,result;
    char op;
    op='A';
    while(op!='J',op!='j'){
    cout<< "Welcome to calculator"<<endl;
    cout<< "Enter A for addition"<<endl; 
    cout<< "Enter B for substraction"<<endl;
    cout<< "Enter C for multiplication"<<endl;
    cout<< "Enter D for division"<<endl;
    cout<< "Enter E for exponential power"<<endl;
    cout<< "Enter F for factorial"<<endl;
    cout<< "Enter G for sine value"<<endl;
    cout<< "Enter H for cosine value"<<endl;
    cout<< "Enter I for tangent value"<<endl;
    cout<< "Enter J for exit"<<endl;

    cout<<"Enter the operator :";
    cin>>op;

        if (op == 'A'||op =='a'){ 
            cout<< "Enter num1 : "<<endl;
            cin>>num1;
            cout<< "Enter num2 : "<<endl;
            cin>>num2;
            result = num1+num2;
            cout<<"Result : "<<result<<endl;
        }
        else if (op == 'B'||op =='b'){
            cout<< "Enter num1 : "<<endl;
            cin>>num1;
            cout<< "Enter num2 : "<<endl;
            cin>>num2;
            result = num1-num2;
            cout<<"Result : "<<result<<endl;
        }
        else if (op == 'C'||op =='c'){
            cout<< "Enter num1 : "<<endl;
            cin>>num1;
            cout<< "Enter num2 : "<<endl;
            cin>>num2;
            result = num1*num2;
            cout<<"Result : "<<result<<endl;
        }
        else if (op == 'D'||op =='d'){
            cout<< "Enter num1 : "<<endl;
            cin>>num1;
            cout<< "Enter num2 : "<<endl;
            cin>>num2;
            result = num1/num2;
            cout<<"Result : "<<result<<endl;
        }
        else if (op == 'E'||op =='e'){
            cout<< "Enter basenum : "<<endl;
            cin>>basenum;
            cout<< "Enter powernum"<<endl;
            cin>>pownum;
            result = power(basenum, pownum);
            cout<<"Result : "<<result<<endl;
        }
        else if (op == 'F'||op =='f'){
            cout<< "Enter the number : "<<endl;
            cin>>number;
            cout<<number<< " ! = "<<factorial(number)<<endl;
        }
        else if (op == 'G'||op =='g'){
            cout<<"Enter the value in degree : "<<endl;
            cin>>number;
            cout<< " sin("<<3.1415926536/180*number<<") = "<<sin(number)<<endl;
        }
         else if (op == 'H'||op =='h'){
            cout<<"Enter the value in degree : "<<endl;
            cin>>number;
            cout<< " cos("<<3.1415926536/180*number<<") = "<<cos(number)<<endl;

        }
        else if (op == 'I'||op =='i'){
            cout<<"Enter the value in degree : "<<endl;
            cin>>number;
            cout<< "tan("<<3.1415926536/180*number<<") = "<<tan(number)<<endl;
        }
        else if (op == 'J'||op =='j'){
            cout<<"Thank you for using Calculator"<<endl;
        }
    }
        
}



        

        

        
    
    
     
    