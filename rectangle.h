class rectangle
{
 public:
  void setDimension(double l, double w);
  // Precondition: l and w are greater than 0
  // Postcondition: area is returned (l * w)

  double getLength() const;

  double getWidth() const;

  double area() const;

  rectangle operator+(const rectangle&) const;
  //  rectangle operator*(const rectangle&) const;
  //rectangle operator=(const rectangle&) const;  
  //rectangle operator!=(const rectangle&) const;  
  
  rectangle();

  rectangle(double l, double w);

 private:
  double length;
  double width;
};
  
    
