    #include<iostream>
    using namespace std;
        class matrix
    {
     private:
     long m[5][5];
     int row;int col;
     public:
     void getdata();
     int operator ==(matrix);
     matrix operator+(matrix);
     matrix operator-(matrix);
     friend ostream & operator << (ostream &,matrix &);
    };




    int matrix::operator==(matrix cm)
  {

    if(row==cm.row && col==cm.col)
     {
       return 1;
     }
     return 0;
    }

  void matrix::getdata()
   {
    cout<<"enter the number of rows";
    cin>>row;
    cout<<"enter the number of columns";
    cin>>col;
    cout<<"enter the elements of the matrix";

    for(int i=0;i<row;i++)
     {
       for(int j=0;j<col;j++)
         {
          cin>>m[i][j];
          }
     }


      }


    matrix matrix::operator+(matrix am)


    {  matrix temp;
      for(int i=0;i<row;i++)
      {
       for(int j=0;j<col;j++)
        {
        temp.m[i][j]=m[i][j]+am.m[i][j];
        }
        temp.row=row;
        temp.col=col;
        }
      return temp;
    }




   matrix matrix::operator-(matrix sm)


    {
     matrix temp;
      for(int i=0;i<row;i++)
      {
        for(int j=0;j<col;j++)
        {
          temp.m[i][j]=m[i][j]-sm.m[i][j];

        }
        temp.row=row;
        temp.col=col;
      }
      return temp;
    }




    ostream & operator <<(ostream &fout,matrix &d)


    {
      for(int i=0;i<d.col;i++)
      {

       for(int j=0;j<d.col;j++)
      {

    fout<<d.m[i][j]<<" ";

           }
      cout<<endl;

    }


    return fout;


    }




   int main()


    {

     matrix m1,m2,m3,m4;

      m1.getdata();
      m2.getdata();
      if(m1==m2)
      {
        m3=m1+m2;
        m4=m1-m2;
        cout<<"Addition of matrices";

        cout<<"the result is \n";
      cout<<m3;


        cout<<"subtraction of matrices ";

        cout<<"The result is  \n";


        cout<<m4;
      }
      else
     {

       cout<<"order of the input matrices is not identical";
      }

    return 0;
    }
