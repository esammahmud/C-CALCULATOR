#include <iostream>
#include <conio.h>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    while(1){
        double a,num1,num2;
    char b;
    double r;
    cout << "*******Simple Scientific Calculator*****" << endl;
    cout << "Available Operations:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Square Root (sqrt)" << endl;
    cout << "6. Exponentiation (^)" << endl;
    cout<<"  7.'E' for exit"<<endl;
    cout << "Enter operation: ";
    cin>>b;
    cin.clear();
    fflush(stdin);
    switch(b){
        case 'E':exit(0);
        break;
        case '+':
        cout<<"ENTER 1st NUMBER : ";
        cin>>num1;
        cout<<"ENTER 2ND NUMBER : ";
        cin>>num2;

        r = num1 + num2;
        cout<<setprecision(10)<<fixed<<num1 <<" + "<<num2<<" = "<<r<<'\n';
        break;
        case '-':
        cout<<"ENTER 1st NUMBER : ";
        cin>>num1;
        cout<<"ENTER 2ND NUMBER : ";
        cin>>num2;

        r = num1 - num2;
        cout<<setprecision(10)<<fixed<<num1 <<" - "<<num2<<" = "<<r<<'\n';
        break;
        case '*':
        cout<<"ENTER 1st NUMBER : ";
        cin>>num1;
        cout<<"ENTER 2ND NUMBER : ";
        cin>>num2;

        r = num1 * num2;
        cout<<setprecision(10)<<fixed<<num1 <<" X "<<num2<<" = "<<r<<'\n';
        break;
        case '/':
        cout<<"ENTER 1st NUMBER : ";
        cin>>num1;
        cout<<"ENTER 2ND NUMBER : ";
        cin>>num2;

        r = num1 / num2;
        cout<<setprecision(10)<<fixed<<num1 <<" / "<<num2<<" = "<<r<<'\n';
        break;
        case 's':
        cout<<"ENTER a NUMBER : ";
        cin>>num1;
        r = sqrt(num1);
        cout<<setprecision(10)<<fixed<<num1<<" = "<<r<<'\n';
        break;
        case '^':
            cout << "Enter base and exponent: ";
            cin>>num1>>num2;
            r = pow(num1 , num2);
            cout<<setprecision(10)<<fixed<<"RESULT IS "<<" = "<<r<<'\n';
            break;
            default:
            cout<<"please enter '+' or '-' or '/' or '*' or 's' or '^'"<<endl;
            break;
    }
    }
}

