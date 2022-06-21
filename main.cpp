

#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;


void tokenize(std::string const &str, const char delim,
              string &out)
{
    size_t start;
    size_t end = 0;

    while ((start = str.find_first_not_of(delim, end)) != std::string::npos)
    {
        end = str.find(delim, start);
        out=str.substr(start, end - start);
    }
}

int lengthOfLastWord(string s) {
    string deneme="";
    const char delim = ' ' ;
    tokenize(s,delim,deneme);
    //cout<<deneme.at(deneme.size()-1);
    //return tokenize(s," ").length();
    return deneme.length() ;
}

 // Driver code
 int main()
 {
    string s = "Hello World";
    cout<<lengthOfLastWord(s);

    s = "   fly me   to   the moon  ";
    cout<<lengthOfLastWord(s);

    s = "luffy is still joyboy";
    cout<<lengthOfLastWord(s);


    return 0;
 }


