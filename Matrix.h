class Matrix
{

public:

  // Constructor(s)
  Matrix(int r, int c, int k);
  void print();
  Matrix operator+(const Matrix& rightM) const;


  
private:
  // member data
  int row;
  int col;
  int M[100][100];
};
