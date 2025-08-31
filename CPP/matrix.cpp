#include<iostream>
#include<string>
using namespace std;

class matrix
{
    int r;
    int c;
    int **arr;
public:
    matrix(int a,int b)
    {
        r=a,c=b;
        arr=(int **)malloc(r*sizeof(int *));
        for(int i=0;i<r;i++)
        {
            arr[i]=(int *)malloc(c*sizeof(int));
        }
        cout<<"Enter matrix:"<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<"Enter ["<<i<<"]["<<j<<"]:";
                cin>>arr[i][j];
            }
        }
    }
    matrix()
    {
        r=0,c=0;
    }
    matrix addmatrix(matrix a1,matrix a2)
    {
        r=a1.r;
        c=a1.c;
        arr=(int **)malloc(r*sizeof(int *));
        for(int i=0;i<r;i++)
        {
            arr[i]=(int *)malloc(c*sizeof(int));
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                arr[i][j]=a1.arr[i][j]+a2.arr[i][j];
            }
        }
    }
    matrix submatrix(matrix a1,matrix a2)
    {
        r=a1.r;
        c=a1.c;
        arr=(int **)malloc(r*sizeof(int *));
        for(int i=0;i<r;i++)
        {
            arr[i]=(int *)malloc(c*sizeof(int));
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                arr[i][j]=a1.arr[i][j] - a2.arr[i][j];
            }
        }
    }
    matrix multiplication(matrix a1,matrix a2)
    {
        r=a1.r;
        c=a1.c;
        arr=(int **)malloc(r*sizeof(int *));
        for(int i=0;i<r;i++)
        {
            arr[i]=(int *)malloc(c*sizeof(int));
        }
        for(int i=0;i<a1.r;i++)
        {
            for(int j=0;j<a2.c;j++)
            {
                arr[i][j]=0;
                for(int k=0;k<a1.c;k++)
                {
                    arr[i][j] += a1.arr[i][k] * a2.arr[k][j];
                }
            }
        }
    }
    matrix transpose(matrix a1) 
    {
        arr=(int **)malloc(r*sizeof(int *));
        for(int i=0;i<r;i++)
        {
            arr[i]=(int *)malloc(c*sizeof(int));
        }
        r=a1.r;
        c=a1.c;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
            arr[j][i] = a1.arr[i][j];
            }
        }
    }

    void display()
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    matrix m1(2,2),m2(2,2),m3,m4,m5,m6,m7;

    m3.addmatrix(m1,m2);

    cout<<"Addition of matrix is:"<<endl;
    m3.display();
    
    m4.submatrix(m1,m2);
    cout<<"Subtraction of matrix is:"<<endl;
    m4.display();

    m5.multiplication(m1,m2);
    cout<<"Multiplication of matrix is:"<<endl;
    m5.display();

    m6.transpose(m1);
    cout << "Transpose of first matrix is:" << endl;
    m6.display();

    return 0;
}