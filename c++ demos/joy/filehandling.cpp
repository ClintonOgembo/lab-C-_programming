#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    string text;
    ofstream writer;
    ifstream reader;
    writer.open("demo.txt",ios::app);
    writer<<"my text into text file\n";
    writer.close();
    reader.open("demo.txt",ios::in);
    while(getline(reader,text))
        cout<<text<<endl;
    reader.close();
    return 0;
}
