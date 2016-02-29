#include <iostream>

using namespace std;









int flipInvertedBits(int n)
{
    string binary = bitset<5>(n).to_string();
    cout << binary << endl;
    
    int binarySize = binary.size();
    
    for(int x = 0; x < binarySize; x++)
    {
        if(binary.at(x) == '0')
        {
            binary.at(x) = '1';
        }
        else
        {
            binary.at(x) = '0';
        }
    }
    
    cout << binary << endl;


    return 0;



}


int main()
{
    int value = 0;
    value = flipInvertedBits(50);



}

