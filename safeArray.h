class safeArray
{
  

public:

  // Constructor(s)
  safeArray(int l);
  
  int getIndex(int i);
  int getLength();
  int setIndex(int i, int v);

  
private:
  // member data
  int length;
  int *a;
  
};
