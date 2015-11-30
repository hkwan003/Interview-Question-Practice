#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void permute(string select, string remain){
    if(remain == "")
    {
        cout << select << endl << endl;
        return;
    }
    for(int i=0; remain[i]; ++i)
    {
        cout << "incrementor: " << i << endl;
        cout << "remain: " << remain << endl;
        string wk(remain);

        cout << "string wk: " << wk << endl;

        cout << "select combo: " << select + remain[i] << endl;
        permute(select + remain[i], wk.erase(i, 1));
    }
}

int main(){
    string anagrama;
    cout << "input character set >";
    cin >> anagrama;
    sort(anagrama.begin(), anagrama.end());
    permute("", anagrama);
}