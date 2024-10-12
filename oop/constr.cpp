#include<iostream>
using namespace std;

const int S = 10;

class matrixsum{
    private:
    int matrix[s][s];
    int size;
    public:
    matrixsum(int m[s][s], int n){
        size = n;
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                matrix[i][j]=m[i][j];
            }
        }
    }
    int fds(){
        int sum = 0;
        for(int i=0;i<size;i++){
            sum = sum+matrix[i][i];
        }
        return sum;
    }

    int bds(){
        int sum = 0;
        for(int i=0;i<size;i++){
            sum = sum + matrix[i][size-1-i];
        }
        return sum;
    }
};

int main()
{
    return 0;
}