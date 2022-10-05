/* This is a simple program to read and display the content of a file using "fstream" header. */
// Make sure to save and run this program in the directory in which the file required to be read is present

#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
int main()
{
    char fileName[30], ch;
    fstream fp;
    cout<<"Enter the file name: ";
    gets(fileName);
    fp.open(fileName, fstream::in);
    if(fp==NULL)
    {
        cout<<"\n An Error Occurred!";
        return 0;
    }
    cout<<"\n This is the Content of "<<fileName<<":-\n";
    while(fp.eof()==0)
    {
        fp.get(ch);
        cout<<ch;
    }
    fp.close();
    cout<<endl;
    return 0;
}