//NAME: Nishka Ranadive
//PRN: 24070123082
//Exp-5

//Program-1
#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout<<"Enter a number:";
    cin>>num;
    
    if(num%2==0){
        cout<<"Number is EVEN.";
    }
    else{
        cout<<"Number is ODD.";
    }

    return 0;
}


//Program-2
#include <iostream>
using namespace std;

int main() {
    char ch;
    
    cout<<"Enter a Character:";
    cin>>ch;
    
    if(ch== 'a' || ch== 'e' ||ch== 'i' ||ch== 'o' ||ch== 'u' ||ch== 'A' ||ch== 'E' ||ch== 'I' ||ch== 'O' ||ch== 'U'){
        cout<<"Character is a VOWEL.";
    }
    else{
        cout<<"Character is a CONSONANT.";
    }
    
    return 0;
}


//Program-3
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    
    cout<<"Enter Num1:";
    cin>>num1;
    
    cout<<"Enter Num2:";
    cin>>num2;
    
    cout<<"Enter Num3:";
    cin>>num3;
    
    if(num1>num2){
        if(num1>num3){
        cout<<"Num1 is LARGEST.";
        }
    }
    if(num2>num1){
        if(num2>num3){
        cout<<"Num2 is LARGEST.";
        }
    }
    if(num3>num1){
        if(num3>num2){
        cout<<"Num3 is LARGEST.";
        }
    }
    
    return 0;
}


//Program-4
#include <iostream>
using namespace std;

int main() {
    int choice;

    cout<<"Enter your Birthday Month:";
    cin>>choice;

    switch(choice){
        case 1:
        cout<<"January"<<endl;
        break;

        case 2:
        cout<<"February"<<endl;
        break;

        case 3:
        cout<<"March"<<endl;
        break;

        case 4:
        cout<<"April"<<endl;
        break;

        case 5:
        cout<<"May"<<endl;
        break;

        case 6:
        cout<<"June"<<endl;
        break;

        case 7:
        cout<<"July"<<endl;
        break;

        case 8:
        cout<<"August"<<endl;
        break;

        case 9:
        cout<<"September"<<endl;
        break;

        case 10:
        cout<<"October"<<endl;
        break;

        case 11:
        cout<<"November"<<endl;
        break;

        case 12:
        cout<<"December"<<endl;
        break;

        default:
        cout<<"Enter a valid choice.";

        return 0;
    }
}


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
-->Program-1:
Enter a number:2
Number is EVEN.
Enter a number:3
Number is ODD.

-->Program-2:
Enter a Character:a
Character is a VOWEL.
Enter a Character:n
Character is a CONSONANT.

-->Program-3:
Enter Num1:3
Enter Num2:4
Enter Num3:5
Num3 is LARGEST.

-->Program-4:
Enter your Birthday Month:8
August

-->Program-5:
Enter Num1:2
Enter Num2:3
Enter math operation to be performed:
1. Addition
 2. Subtraction
 3. Division
 4. Multiplication
4
Multiplication of 2 and 3 is:6*/
