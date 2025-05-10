#include <iostream>
using namespace std;

class matrix{
private:
    int rows,cols;
    int** data;

public:

    matrix(int r,int c) {
        rows = r;
        cols = c;
        data = new int*[rows];
        for(int i = 0; i < rows; i++) {
      data[i] = new int[cols];
        }
    }
    ~matrix() {
        for(int i = 0; i < rows; i++) {
            delete[] data[i];
        }
 delete[] data;
    }

    void input() {
       cout << "enter element " << rows << "x" << cols << " matrix:"<<endl;
      for(int i=0;i<rows;i++) {
          for(int j=0;j<cols;j++) {
       cin>>data[i][j];
            }
        }
    }

friend matrix operator+(matrix& m1,matrix& m2);
friend void display(matrix& m);
};


matrix operator+(matrix& m1, matrix& m2) {
    if(m1.rows != m2.rows || m1.cols != m2.cols) {
cout << " dimensions invalidd!\n";
     exit(1);
    }

    matrix temp(m1.rows, m1.cols);

    for(int i=0;i<m1.rows;i++){
        for(int j=0;j<m1.cols;j++){
    temp.data[i][j] = m1.data[i][j]+m2.data[i][j];
        }
    }

    return temp;
}

void display(matrix& m) {
                cout << "matrix (" << m.rows << "x" << m.cols << "):\n";
    for(int i = 0;i<m.rows;i++) {
        for(int j=0;j<m.cols;j++){
            cout<<m.data[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int r, c;

    cout << "enter no. of r and c: ";
    cin >>r>>c;

    matrix m1(r, c);
    matrix m2(r, c);

    m1.input();
    m2.input();

    matrix m3=m1+m2;

    cout << "first:"<<endl;
    display(m1);
    cout << "sec:"<<endl;
    display(m2);
    cout << "Sum:"<<endl;
    display(m3);
    return 0;
}