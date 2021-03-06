void rectangle::setDimension(double l, double w)
{
  if (l >=0)
    length = l;
  else
    length = 0;

  if (w >=0)
    width = w;
  else
    width = 0;  

}


double rectangle::getLength() const
  {
    return length;
  }

double rectangle::getWidth() const
  {
    return width;
  }

double rectangle::area() const
  {
    return length * width;
  }
rectangle rectangle::operator+ (const rectangle& r) const
{
  rectangle tempRect;
  tempRect.length = length + r.length;
  tempRect.width = width + r.width;

  return tempRect;
}


rectangle::rectangle()
{
  length = 0;
  width = 0;
}

rectangle::rectangle(double l, double w)
{
  setDimension(l,w);
}
  
    
