#include <iostream>

using namespace std;


int flipBits(int b, int k)
{
    int mask = (1 << k) - 1;
    return ~b & mask;
}


int main()
{
    cout << "input number you would like to invert bits: ";
    int num, ber;
    cin >> num;
    cout << endl << "input number of bits needed: ";
    cout << endl;
    cin >> ber;
    int number;
    cout << endl;
    number = flipBits(num, ber);
    cout << "inverted number is: " << number << endl;

    int counter = 0;

    while(number)
    {
        number = number & (number - 1);
        counter++;
    }
    cout << "total number of bits in answer is: " << counter << endl;
}

//if only I had know this during my twitter screening, it would have gone so much better.....
