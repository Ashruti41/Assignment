//count the word 'the' in given file

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
      ifstream fin;
      int count=0;
      char ch[20],c[20];

      fin.open("my_data.txt");

      cout<<"enter a word to count: "<<endl;
      cin>>c;

      while(fin)
     { 
        fin>>ch;
        if(strcmp(ch,c)==0)
        count++;
     }

      cout<<"No of word used in file: "<<count<<endl;
      fin.close();

return 0;
}

