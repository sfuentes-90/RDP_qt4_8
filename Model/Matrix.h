#ifndef MATRIX_H
#define MATRIX_H
#include <vector>
#include <iostream>

class Matrix {
    private:
        int rows;
        int cols;
        std::vector<int> m;

    public:
        // Constructor
        Matrix(int rows, int cols);

        // Metodos
        void setElement(int, int, int);
        int getElement(int, int);
        std::vector<int> getColumn(int);
        int getRows();
        int getCols();
        void printMatrix(std::string);
        void deleteAll();
        bool sencibilizada(int, std::vector<int>);
};
#endif /* MATRIX_H */
