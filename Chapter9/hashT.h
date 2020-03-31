#include <iostream>
using namespace std;


template <class elemType>
class hashT
{
 public:
  void insert( int hashIndex, const elemType& rec);
  
  void search(int& hashIndex, const elemType& rec,bool& found) const;
  
  bool isItemAtEqual(int hashIndex,const elemType& rec) const;
  
  void retrieve(int hashIndex, elemType& rec) const;
  
  void remove(int hashIndex, const elemType& rec);

  void print() const;
  
  hashT(int size = 101);

  ~hashT();

 private:
  elemType *HTable; // pointer to the hash table
  int *indexStatusList; // pointer to the array indicating the
                        // status of a position in the hashtable
  int length;       // number of items in the hash table
  int HTSize;       // maximum size of the hashtable
};

template <class elemType>
void hashT<elemType>::insert(int hashIndex, const elemType& rec)
{
  int pCount;
  int inc;
  pCount = 0;
  inc = 1;
  while(indexStatusList[hashIndex] ==1
	&& HTable[hashIndex] != rec && pCount < HTSize/2)
    {
      pCount++;
      hashIndex = (hashIndex + inc) % HTSize;
      inc = inc + 2;
    }
  if(indexStatusList[hashIndex] != 1)
    {
      HTable[hashIndex] =rec;
      indexStatusList[hashIndex] = 1;
      length++;
    }
  else
    {
      if(HTable[hashIndex] ==rec)
	{
	  cerr<< "Error: No duplicates are allowed."  <<endl;
	}
      else
	{
	  cerr<< "Error: The table is full. "
	      << "Unable to resolve the collision." <<endl;
	}
    }
}

template <class elemType>
void search(int& hashIndex, const elemType& rec, bool& found) const
{

}
  
template <class elemType>
bool isItemAtEqual(int hashIndex,const elemType& rec) const
{
  return
}

template <class elemType>
void retrieve(int hashIndex, elemType& rec) const
{

}

template <class elemType>
void remove(int hashIndex, const elemType& rec)
{

}

template <class elemType>
void print() const
{

}

template <class elemType>
hashT(int size = 101)
{

}

template <class elemType>
~hashT()
{
  delete [] HTable;
  delete [] indexStatusList; 
}



  
