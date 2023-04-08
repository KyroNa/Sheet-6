// Sheet 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int x = txt.length();
    cout << "The length of the txt string is: " << x;

    /*
    //Problem 1
    string name;
    cout << "Insert your name: ";
    getline(cin, name);
    
    string initials;
    initials.push_back(name[0]);

    for (int i = 1; i < name.length(); i++)
    {
        if (name[i] == ' ')
            initials.push_back(name[i+1]);
    }

    cout << "initials: " << initials;
    */

    /*
    //Problem 2
    string str;
    cout << "Insert String: ";
    getline(cin, str);
    /*
    std::string::iterator i;
    for (i = str.begin(); i != str.end(); i++)
    {
        if (*i >= 'a' && *i <= 'z')
            *i -= ('a' - 'A');
        cout << *i;
    }
    */
    /*
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A');
    }
    cout << str;
    */
    /*
    //Problem 3
    string str;
    cout << "Insert String: ";
    getline(cin, str);
    for (int i = str.length() - 1; i >= 0; i--)
    {
        cout << str[i];
    }
    */

    /*
    //Problem 4
    string str;
    int sum = 0;
    cout << "Insert String: ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y')
            sum++;
    }
    cout << "Number of vowels: " << sum;
    */

    /*
    //Problem 5
    string str;
    int sum = 0;
    cout << "Insert String: ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            sum++;
    }
    sum++;
    cout << "Number of words: " << sum;
    */

    /*
    //Problem 6 
    string str1, str2, str3;
    cout << "Insert first String: ";
    getline(cin, str1);
    cout << "Insert second String: ";
    getline(cin, str2);
    str3 = str1 + str2;
    cout << "Concatenation: " << str3 <<"\n";
    //If we want to add space between the two strings 
    str3 = str1 + ' ' + str2;
    cout << "Concatenation with space: " << str3;
    */

    /*
    //Problem 7
    string str = "C is a general purpose computer programming language developed in 1972 by Dennis Ritchie at the Bell Telephone Laboratories for use with the UNIX operating system. Although C was designed for implementing system software, it is also widely used for developing portable application software. C is one of the most popular programming languages. It is widely used on many different software platforms, and there are few computer architectures for which a C compiler does not exist. C has greatly influenced many other popular programming languages, most notably C++, which originally began as an extension to C.";
    // str = "C is a general purpose computer programming"; //Will check only on this line to make sure it works first
    int freq[32] = {};
    int f = 0;

    
    // this for loop can also be used to initialize all values in array to 0
    for (int i = 0; i < 32; i++)
        freq[i] = 0;
    
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (ch == str[i] ||  ch - ('a' - 'A') == str[i])
                freq[f]++;
        }
        f++;
    }
    f = 0;
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        cout << ch << ": " << freq[f] << "\n";
        f++;
    }
   

    /*
    //Problem 8
    string str1 = "C is a general purpose computer programming language developed in 1972 by Dennis Ritchie at the Bell Telephone Laboratories for use with the UNIX operating system. Although C was designed for implementing system software, it is also widely used for developing portable application software. C is one of the most popular programming languages. It is widely used on many different software platforms, and there are few computer architectures for which a C compiler does not exist. C has greatly influenced many other popular programming languages, most notably C++, which originally began as an extension to C.";
    // str1 = "C is purpose programming";
    string str2 = "programming";
    int found = 0;
    int count = 0;

    for (int i = 0; i < str1.length(); i++)
    {
        for (int j = 0; j < str2.length(); j++)
        {
            if (str1[i + j] != str2[j])
            {
                found = 0;
                break;
            }
            else
                found++;
        }
        if (found == str2.length())
        {
            found = 0;
            count++;
        }
    }
    cout << str2 << " count: " << count;
    */
}

