#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    string file_in, word_in, word_fn;
    cout << "Input: ";
    cin >> file_in;
    ifstream in(file_in.c_str(),ios::in);
    if (!in.good())
    {
        clog << "Couldn't open file.\n";
        exit(1);
    }
    cout << "Enter word: ";
    cin >> word_fn;
    while (in >> word_in)
        if (word_in == word_fn)
        {
            cout << "Word '" << word_fn << "' fined.\n";
            in.close();
            return 0;
        }
    cout << "Not found\n";
    in.close();
    return 0;
}
