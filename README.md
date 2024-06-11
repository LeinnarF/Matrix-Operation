## Matrix Operation

Simple matrix Calculator that can perform the following:

1. Determinant of the matrix.
2. Matrix Transposition.
3. Matrix Addition
4. Matrix Multiplication
5. Inverse
6. Cofactor of each entries
7. Adjoint

#### To be added

- Solving system of equation up to 5 variables (if possible), by using Crammer's rule

### Compiling

```bash
g++ main.cpp component/* -o main
```

### How to use

##### Entering the entries:

- enter the number of rows $\implies$ the columns

```cpp
[1] : 1 3 3 //press space after entering the entries for the first row
[2] : 3 7 1 //then press enter to proceed to second row
[3] : 3 9 1
```

#### Note:

1. For Matrix Addition, the size of the first matrix is also the size of the second matrix.
2. For Matrix Multiplication, the size of Matrix 1 and Matrix 2 can be in different size.
3. This program can't compute the determinant of $10 \times 10$ matrix.
