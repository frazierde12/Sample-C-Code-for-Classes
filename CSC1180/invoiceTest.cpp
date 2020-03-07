#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
  Invoice inv1("123-AB", 10, 5);
  Invoice inv2("345-FG", 100, 2);  


  // print out all the data on inv1

  cout << inv1.getProdNo() << endl;
  cout << inv1.getQuantity() << endl;
  cout << inv1.getPrice() << endl  << endl;;  


  // change all the data

  inv1.setProdNo("444-XYZ");
  inv1.setQuantity(100);
  inv1.setPrice(50);

  // print out all the data on inv1 again
  cout << inv1.getProdNo() << endl;
  cout << inv1.getQuantity() << endl;
  cout << inv1.getPrice() << endl << endl;;  

  // print out both Invoice amounts

  cout << "Invoice 1\t" << inv1.getProdNo() << '\t' << inv1.getQuantity() << '\t' << inv1.getPrice() << '\t' <<inv1.getInvoiceAmt() << endl;
  cout << "Invoice 2\t" << inv2.getProdNo() << '\t' << inv2.getQuantity() << '\t' << inv2.getPrice() << '\t' <<inv2.getInvoiceAmt() << endl;  
  
  
  return 0;
}

