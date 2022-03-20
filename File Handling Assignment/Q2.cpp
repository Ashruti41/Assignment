//count the word 'a' in them

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
     ifstream fin;
     string str;
     int count = 0;
     int len;
     fin.open("data.txt");

     while(!fin.eof())
    {
       while(fin>>str)
       {
         len=str.length();
         for(int i=0; i<len; i++)
           {
              if(str[i] =='a' || str[i] =='A')
              {
                  count++;
              }
           }
       }
    }

       cout<<"Total words with a in then are: "<<count<<endl;
       return 0;
}


