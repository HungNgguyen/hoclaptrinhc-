
#include<iostream>
using namespace std;
int main()
{
    int rows, cols ;
    int my_arr[rows][cols];
     do 
    {
         cout<<" Nhap so dong(1-10)"<<endl;
         cin>>rows;
         if(cin.fail() || rows < 0 || rows > 10 )
         {
            cout<<"So dong tu 1 den 10"<<endl;
         }
    } while( rows < 0 || rows > 10);
    cout<<" Xu li nhap so cot cho mang 2 chieu" <<endl;
    do 
    {
         cout<<" Nhap so cot(1-10)"<<endl;
         cin>>cols;
         if(cin.fail() || cols < 0 || cols > 10 )
         {
            cout<<"So dong tu 1 den 10"<<endl;
         }
    } while( cols < 0 || cols > 10);
    int row1;
    cin>>row1;
     int sum_row = 0;
    if(row1 >= 0 && row1 < rows)
    {
        
        for ( int j = 0 ; j < cols ; j ++)
        {
            sum_row += my_arr[row1][j];
        }
     cout << " Tong cac so tren dong " << row1 <<"la : "<<sum_row<<endl;
    }
        else
    {
        cout<<"Vui long nhap lai"<<endl;
    }
    int col1;
    cin>>col1;
        int sum_col= 0;

    if(col1 >= 0 && col1 < rows)
        {
    
        for ( int i = 0 ; i < cols ; i ++)
            {
            sum_col += my_arr[i][col1];
            }
        
         cout << " Tong cac so tren cot " << col1 <<"la : "<< sum_col <<endl;
        }
        else
    {
        cout<<"Vui long nhap lai"<<endl;
    }
int max_row_sum = 0;
    int max_val_row = 0;

    for (int i = 0; i < rows; i++) {
        int current_sum = 0;
        for (int j = 0; j < cols; j++) {
            current_sum += my_arr[i][j];
        }

        // Khởi tạo giá trị lớn nhất từ dòng đầu tiên (i = 0)
        if (i == 0 || current_sum > max_row_sum) {
            max_row_sum = current_sum;
            max_val_row = i;
        }
    }
int max_col_sum = 0;
    int max_val_col = 0;

    for (int j = 0; j < cols; j++) {
        int current_sum = 0;
        for (int i = 0; i < rows; i++) {
            current_sum += my_arr[i][j];
        }

        // Khởi tạo giá trị lớn nhất từ cột đầu tiên (j = 0)
        if (j == 0 || current_sum > max_col_sum) {
            max_col_sum = current_sum;
            max_val_col = j;
        }
    }



  






    return 0;
}