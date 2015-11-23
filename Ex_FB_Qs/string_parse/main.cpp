#include <iostream>
#include <vector>
#include <cstring>
#include <string>


using namespace std;

string input;


int performArithmetic(vector<string> x, int size)
{
    if(size == 1)
    {
        cout << "Answer total: " << x.at(0) << endl;
        return 0;
    }
    for(int i = 0; i < size; i++)
    {
        if(x.at(i) == "*")
        {
           int num1 = stoi(x.at(i - 1));
           int num2 = stoi(x.at(i + 1));
           cout << num1 << " " << num2 << endl;

           int sum = num1 * num2;
           x.at(i - 1) = to_string(sum);
           size -= 2;
           cout << "sum: " << sum << endl;
           performArithmetic(x,size);
        }
    }
    for(int i = 0; i < size; i++)
    {
        if(x.at(i) == "/")
        {
            int num1 = stoi(x.at(i - 1));
            int num2 = stoi(x.at(i + 1));
            cout << num1 << " " << num2 << endl;
            int sum = num1 / num2;
            x.at(i - 1) = to_string(sum);
            size -= 2;
            cout << "sum: " << sum << endl;
           
            performArithmetic(x,size);
        }
    }
    for(int i = 0; i < size; i++)
    {
        if(x.at(i) == "+")
        {
            int num1 = stoi(x.at(i - 1));
            int num2 = stoi(x.at(i + 1));
            cout << num1 << endl;
            cout << num1 << " " << num2 << endl;
            int sum = num1 + num2;
            x.at(i - 1) = to_string(sum);
            size -= 2;
            cout << "sum: " << sum << endl;
            performArithmetic(x,size);

        }
    }
    for(int i = 0; i < size; i++)
    {
        if(x.at(i) == "-")
        {
            int num1 = stoi(x.at(i - 1));
            int num2 = stoi(x.at(i + 1));
            cout << num1 << " " << num2 << endl;
            int sum = num1 - num2;
            x.at(i - 1) = to_string(sum);
            size -= 2;
            cout << "sum: " << sum << endl;
            performArithmetic(x,size);
        
        }
    }
    return 0; 
}
int main()
{
    vector<string> value;

    char input[10000];
    string input1 = "3 + 5 * 2";
    int x = 0;    
    for(; x < input1.size(); x++)
    {
        input[x] = input1.at(x);
    }
    input[x] = '\0';
    
    char *token = strtok(input, " ");
    while(token != NULL)
    {
        value.push_back(token);
        cout << token  << endl;
        token = strtok(NULL, " ");
    }
   
    cout << "size of vector: " << value.size() << endl;
    cout << "-------------------------------------------------------------" << endl;
    performArithmetic(value, value.size());

    

    cout << endl;

}

