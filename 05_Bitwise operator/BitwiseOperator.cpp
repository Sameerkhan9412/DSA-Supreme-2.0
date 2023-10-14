#include <iostream>
using namespace std;
int main()
{
    // int a=2;
    // int b=3;
    // cout<<(a&b);  //Ans : 2
    // int num = 1;
    // cout << ~num << endl;
    // cout << (~num) << endl;
    // cout << ~(num) << endl;
    // After ~ every bit will get inverted i.e 0 will be converted to 1 and 1 to 0
    // so it will be trated as negative number
    // To read negative number we calculate 1's complement. i.e we are going to flip all the bit's
    // Then we calculate 2's complement. i.e add 1 in 1's complement
    // So after adding 1, 1+1=0 and carry 1 -->00010 ==2
    // And It will be negative so ans is negative 2

    // HW why it is -2?
    //  bool num=1;
    //  cout << ~num << endl;
    //  cout << (~num) << endl;
    //  cout << ~(num) << endl;
    //  In many programming languages, including C and C++, the tilde (~) operator is a bitwise NOT operator. When you apply the bitwise NOT operator to a boolean value, it's not treated as a simple negation (i.e., changing true to false or false to true) as you might expect. Instead, it operates on the underlying binary representation of the value.

    // In C and C++, a boolean value is typically represented as 0 for false and 1 for true in terms of bits. When you apply the bitwise NOT operator (~) to 1, it inverts all the bits, turning all the 1s into 0s and all the 0s into 1s.

    // Here's the bitwise NOT operation on a boolean value:

    // - Original boolean value: 1 (true)
    // - Bitwise NOT: ~1
    // - Binary representation of 1: 00000001
    // - Bitwise NOT of 1: 11111110

    // When you interpret the resulting binary representation as an integer, it's equal to -2 in two's complement notation. In two's complement, the leftmost bit represents the sign (0 for positive and 1 for negative), and the remaining bits represent the magnitude.

    // So, ~1 in binary is 11111110, which, when interpreted as a signed integer in two's complement, is -2.

    // It's important to note that this behavior may vary depending on the programming language and compiler being used. In some languages, the bitwise NOT operator on a boolean value might not have this specific result.
    // int a = 5;
    // int b = 5;
    // cout<<(a ^ b);  //0
    // XOR : Same bit gives ans 0 and different bits gives ans 1
    // int a = 5;
    // int b = 10;
    // cout << (a ^ b); // 15

    // Left << and Right >> Shift Operator

    //Left Shift Operator
    // a<<1 //Shift all bits to left by 1 bit
    // 1 Left shift == Multiplication by 2
    // int a=7;
    // cout<<( a<<1)<<endl;  //14
    // cout<<( a<<2)<<endl;  //28
    // cout<<( a<<3)<<endl; //56

    //Right Shift Operator
    // int n=5;
    // cout<<(n>>1)<<endl; //2
    // int a=100;
    // cout<<(a>>2)<<endl;  //25

    //Signed integer, negative number, right shift will be handler by compiler
    //But it will fail in case of unsigned int
    // unsigned int n=-100;
    // cout<<(n>>1);   //2147483598

    // int n=10;
    // cout<<(n<<-1); //Garbage Value

    // Pre/Post Increment.Decrement Operator
    // Pre-Increment  ++a
    // Post-increment a++
    // Pre-Decrement  --a
    // Post-Decrement a--

}