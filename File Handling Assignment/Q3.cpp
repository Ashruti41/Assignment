#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
ifstream fin;
int count=0;
char ch[20];
char c='e';

fin.open("data1.txt");

//cout<<"enter a  starting word to count: "<<endl;
//cin>>c;

while(!fin.eof())
{
while(fin>>ch){
if(ch[0]=='e')
count++;
}
}

cout<<"No of word used in file: "<<count<<endl;
fin.close();

return 0;
}

