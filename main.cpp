#include <iostream>
#include <iomanip>

using namespace std;



void task_1(const int MROW,const int NCOL){
    int matrix [MROW][NCOL];
    for(size_t i=0; i<MROW; i++){
        for(size_t j=0; j<NCOL; j++){
            matrix[i][j]= i+j;
        }
    }
    for(size_t i=0; i<MROW; i++){
        for(size_t j=0; j<NCOL; j++){
            if(matrix[i][j]>0) cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    
}


void task_2(const  int MROW ,const  int NCOL){
    int **matrix;


    matrix = new int * [MROW];
    for (int i = 0; i < MROW; i++) {
        matrix[i] = new int [NCOL];
    }


    for (int i = 0; i < MROW; i++) {
        for (int j = 0; j < NCOL; j++) {
            matrix[i][j] = i+j;
        }
    }

    
    int count = 0 ;
    for (int i = 0; i < MROW; i++) {
        int x = 0;
        
        
        for (int j = 0; j < NCOL; j++) {
            if(matrix[i][j]==0) x++;
        }
        if(x==0) count++;
    }
    cout<<count<<endl;

    for (int i = 0; i < MROW; i++) {
        delete [] matrix[i];
    }
    delete [] matrix;
}



int main() {
    task_1(2,3);
    task_2(3,5);
    return 0;
}
