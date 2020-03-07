class Polynomial
{

  friend ostream& operator<<(ostream&, const Polynomial&);
  friend istream& operator>>(istream&, Polynomial);
  
public:
  Polynomial operator+(const Polynomial&);
  Polynomial operator-(const Polynomial&);
  Polynomial operator*(const Polynomial&);  
  double operator() (double x);
  Polynomial(int size = 100);
  int min(int x, int y) const;
  int max(int x, int y) const;
  
private:
// member data
  int length;
  int *list;
};
