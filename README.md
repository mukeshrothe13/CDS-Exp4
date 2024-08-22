
## Aim
To understand and apply bitwise operators in C++.

## Software Used
- VS Code

## Problem Statements

1. **Bitwise Operations in C++**
   - Write a C++ program to demonstrate basic bitwise operations.

2. **Bitwise Operations with User Input**
   - Write a C++ program that takes a number and bit positions as input from the user, then performs bitwise operations (setting and resetting bits) based on the input.

## Theory

- **Bitwise Operators**: Operators that perform operations at the bit level on integers. These operations treat integers as sequences of binary digits and include operations like AND, OR, XOR, NOT, and bit shifts.

# Program Codes

```javascript
//Mukesh Rothe //23070123089 //CDS EXP4
#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"A|B: "<<bitset<4>(a|b)<<endl;
    cout<<"A&B: "<<bitset<4>(a&b)<<endl;
    cout<<"A<<B: "<<bitset<4>(a<<b)<<endl;
    cout<<"A>>B: "<<bitset<4>(a>>b)<<endl;
    cout<<"~B: "<<bitset<4>(~b)<<endl;
    cout<<"A^B: "<<bitset<4>(a^b)<<endl;
    return 0;
}

//Mukesh Rothe //23070123089 //CDS EXP4
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num, set, reset;
    
    cout << "Enter the number- ";
    cin >> num;
    cout << "Enter the bit position to set (0 to 7): ";
    cin >> set;
    cout << "Enter the bit position to reset (0 to 7): ";
    cin >> reset;
    cout<<num<<" in binary is "<<bitset<8>(num)<<endl;
   
    int num_set = num | (1 << set);
    cout << "Result after setting bit number " <<set<< " is " << bitset<8>(num_set) << endl;
    
    int num_reset = num_set & ~(1 << reset);
    cout << "Result after resetting bit number " <<reset<< " is " << bitset<8>(num_reset) << endl;
    return 0;
}
```
# Output:
Bitwise Operators-

![Screenshot 2024-08-22 212012](https://github.com/user-attachments/assets/1a65884a-e1bb-4fff-b055-19d8fdeae978)

Bit Position-

![Screenshot 2024-08-22 212825](https://github.com/user-attachments/assets/fb6ee52e-5de1-4532-b946-53b7acecebc0)

## Conclusion

- We explored and applied various bitwise operators in C++.
- We learned how to check the position of a bit in a number, and how to set and reset bits effectively.
