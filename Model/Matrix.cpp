#include "Matrix.h"

Matrix::Matrix(int rows, int cols){
    this->rows = rows;
    this->cols = cols;

    this->m.reserve(rows*cols);

    for (int i = 0; i < rows*cols; i++) {
        m[i] = 0;
    }
}

void Matrix::setElement(int e, int i, int j){
    this->m[i*cols + j] = e;
}

int Matrix::getElement(int i, int j){
    return this->m[i*cols + j];
}

std::vector<int> Matrix::getColumn(int col){
    std::vector<int> r(rows);
    int idx = 0;

    for (int i = col; i < (rows*cols); i = i+cols) {
        r[idx] = this->m[i];
        idx++;
    }

    return r;
}

void Matrix::printMatrix(std::string name){
    std::cout << name << std::endl;

    for (int i = 0; i < this->rows; i++) {
        for (int j = 0; j < this->cols; j++) {
            std::cout << this->getElement(i, j) << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void Matrix::deleteAll(){
    this->m.clear();
    this->cols = 0;
    this->rows = 0;
}

bool Matrix::sencibilizada(int colIndex, std::vector<int> m){
    bool r = true;
    std::vector<int> col = this->getColumn(colIndex);

    for(int i = 0; i < this->cols; i++){
        if(col[i] > m[i])
            r = false;
    }
    return r;
}

int Matrix::getCols(){
    return this->cols;
}

int Matrix::getRows(){
    return this->rows;
}
