class box: public rectangle
{
 public:
  void setDimension(double l, double w, double h);
  double getHeight() const;
  double area();
  box();
  box(double l, double w, double h);


 private:
  double height;
};
