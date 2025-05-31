#include "./ascii-art/Ascii.h"
#include <iostream>
#include <string>

using namespace std;

string concatArgs(int argc, char *argv[]);

int main(int argc, char *argv[])
{
    ascii::Ascii asciiArt(ascii::FontName::sevenstar);
    string text = concatArgs(argc, argv);
    if (text.empty())
    {
        cerr << "Usage: " << argv[0] << " <text>" << endl;
        return 1;
    }

    asciiArt.print(text);
    return 0;
}

string concatArgs(int argc, char *argv[])
{
    string result;
    for (int i = 1; i < argc; ++i)
    {
        result += argv[i];
        if (i < argc - 1)
            result += " "; // Add space between arguments
    }
    return result;
}