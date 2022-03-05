#include<iostream> 
using namespace std; 
class Matrix
{
 public:
 	int row,col;
        int arr[4][4];

        public:
         
        Matrix(){
        }
 
        Matrix(int a,int b)
        {
            row = a;
            col = b;
        }
        void getRow()
        {
          cout<<"The number of row is: "<<row<<endl;
         }
         void getCol()
         {
            cout<<"The number of column is: "<<col<<endl;
         }
         void set_element()
         {
            for(int i=0; i<row; i++)
             {
               for(int j=0; j<col;j++)
                {
                   cin>>arr[i][j];
                 }
               }
          }
         void display(){
           for(int i=0; i<row; i++)
             {
               for(int j=0; j<col;j++)
                {
                  cout<<arr[i][j];
                  cout<<"\t";
                }
                cout<<"\n";
             }
          }
        Matrix operator +(Matrix a2)
        {
          Matrix c1(2,2);
          for(int i=0; i<row;i++)
           {
             for(int j=0; j<col;j++)
              {
                c1.arr[i][j] = arr[i][j] + a2.arr[i][j];
               }
            }
           return c1;
         }
         Matrix operator *(Matrix a3)
         {
            Matrix c2(2,2);
            for(int i=0; i<row; i++)
            {
               for(int j=0; j<col; j++)
               {
                 c2.arr[i][j] = 0;
                  for(int k=0; k<col; k++)
                   {
                      c2.arr[i][j] = c2.arr[i][j] + arr[i][k] * a3.arr[k][j];
                   }
                }
            }
             return c2;
       }
};

int main(){
        Matrix m1(2,2), m2(2,2), m3(2,2);
        cout<<"For first matrix"<<endl;
        m1.getRow();
        m1.getCol();
        m1.set_element();
        cout<<"First matrix element is: "<<endl;
        m1.display();
        cout<<"second Matrix: "<<endl;
        m2.getRow();
        m2.getCol();
        m2.set_element();
        cout<<"second Matrix, elements are: "<<endl;
        m2.display();
        cout<<"The addition of two matrix is: "<<endl;
        m3 = m1 + m2;
        m3.display();
        cout<<"The multiplication of two matrix is: "<<endl;
        m3 = m1 * m2;
        m3.display();
        return 0;
}
