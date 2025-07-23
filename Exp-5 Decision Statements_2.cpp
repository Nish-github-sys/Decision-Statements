//NAME: Nishka Ranadive
//PRN: 24070123082
//Exp-5

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


/*==========OUTPUTS==========
Enter a Character:a
Character is a VOWEL.
Enter a Character:n
Character is a CONSONANT.
*/
