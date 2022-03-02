#include<iostream>
using namespace std;

class Matrix{
    
    public:
    int row,col;
    
    
    void getRow()
    {
        cout<<"\n\tEnter No. of Rows: ";
        cin>>row;
    }
    void getCol()
    {
        cout<<"\n\tEnter No. of Column: ";
        cin>>col;
    }
    int mat[row][col];
    void setElement(int i,int j,int e)
    {
        mat[i][j] = e;
    }
    void Add(int r1,int r2,int c1,int c2,int m1,int m2)
    {
        int r,c,m[r1][c1];
        for(r=0; r<r1; r++)
        {
            for(c=0; c<c1; c++)
            {
                m[r][c] = m1[r][c]+ m2[r][c];
            }
        }
    }
    void mul(int r1,int r2,int c1,int c2,int m1,int m2)
    {
        int r,c,k,m[r1][c2],sum=0;
        for(r=0; r<r1; r++)
        {
            for(c=0; c<c2; c++)
            {
                for(k=0;k<r2;k++)
                {
                sum += (m1[r][k] * m2[k][c]);
                }
               m[r][c] = sum;
            }
        }
    }
};

int main()
{
    int r,c,e;
    Matrix M1,M2;
    M1.getRow();
    M1.getCol();
    M2.getRow();
    M2.getCol();
    for(r=0;r<M1.row; r++)
    {
        for(c=0; c<M1.col; c++)
        {
            cout<<"\nEnter M1["<<r<<"]["<<c<<"] Element =  ";
            cin>>e;
            M1.setElement(r,c,e);
        }
    }
    for(r=0;r<M2.row; r++)
    {
        for(c=0; c<M2.col; c++)
        {
            cout<<"\nEnter M2["<<r<<"]["<<c<<"] Element =  ";
            cin>>e;
            M2.setElement(r,c,e);
        }
    }
    M1.Add(M1.row,M1.col,M2.row,M2.col,M1.mat,M2.mat);
    M1.Mul(M1.row,M1.col,M2.row,M2.col,M1.mat,M2.mat);
    return 0;
}
