
void box::setDimension(double l, double w, double h)
{
  rectangle::setDimension(l, w);
  if (h >0)
    height = h;
  else
    height = 0;
}

double box::getHeight() const
{
  return height;
}

double box::area()
{
  return rectangle::area()*height;
}

box::box()
{
  // set l, w and h to 0
  height = 0;
}
box::box(double l, double w, double h)
  :rectangle(l,w)
{
  if (h >= 0)
    height = h;
  else
    height = 0;
}

