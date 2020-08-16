#include <iostream>
using namespace std;

int main()
{
    string statement, oldWord, newWord, newStatement;
    int count = 0;
    int size = 1;
    cout << "Enter your String: \n";
    getline(cin, statement);
    cout << "Enter word to get replaced: \n";
    getline(cin, oldWord);
    cout << "Enter new word in replacement: \n";
    getline(cin, newWord);

    for (int i = 0; statement[i] != '\0';i++)
    {
        if (statement[i] == ' ')
            size++;    
    }
    string sentance[size];

    for (int i = 0; i < statement.length(); i++)
    {
        if (statement[i] == ' ')
        {
            count++;
            continue;
        }
        sentance[count] = sentance[count] + statement[i];
    }

    for (int i = 0; i <= count; i++)
    {
        if (sentance[i] == oldWord)
            sentance[i] = newWord;
    }
    
    for (int i = 0; i <= count; i++)
        newStatement = newStatement + sentance[i] + ' ';

    cout << newStatement << endl;
}