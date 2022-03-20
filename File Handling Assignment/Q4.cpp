#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
     ifstream fin;
     int count=0;
     char ch[20];
     char c='s';

     fin.open("data2.txt");


    while(!fin.eof())
    {
      while(fin>>ch){
      if(ch[strlen(ch)-1]=='s')
      count++;
    }
}

    cout<<"No of word used in file: "<<count<<endl;
    fin.close();

return 0;
}


