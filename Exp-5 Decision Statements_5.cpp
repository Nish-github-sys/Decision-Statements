//NAME: Nishka Ranadive
//PRN: 24070123082
//Exp-5


//Program-5
#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    int choice;

    cout<<"Enter Num1:";
    cin>>num1;

    cout<<"Enter Num2:";
    cin>>num2;

    cout<<"Enter math operation to be performed:\n";
    cout<<"1. Addition\n 2. Subtraction\n 3. Division\n 4. Multiplication\n";
    cin>>choice;

    switch(choice){
        case 1:
        cout<<"Addition of "<<num1<<" and "<<num2<<" is:"<<num1+num2<<endl;
        break;

        case 2:
        cout<<"Subtraction of "<<num1<<" and "<<num2<<" is:"<<num1-num2<<endl;
        break;

        case 3:
        cout<<"Division of "<<num1<<" and "<<num2<<" is:"<<num1/num2<<endl;
        break;

        case 4:
        cout<<"Multiplication of "<<num1<<" and "<<num2<<" is:"<<num1*num2<<endl;
        break;

        default:
        cout<<"Enter valid Math Operation.";
    }

    return 0;
}


/*==========OUTPUTS==========
Enter Num1:2
Enter Num2:3
Enter math operation to be performed:
1. Addition
2. Subtraction
3. Division
4. Multiplication
4
Multiplication of 2 and 3 is:6
*/
