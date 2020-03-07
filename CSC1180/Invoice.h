// Invoice Class
// You name and date
#include <string>

class Invoice
{

 public:

  Invoice(std::string pn, int q, int p)
    {
      prodNo = pn;
      quantity = q;
      price = p;
    }

  // Accessors const functions
  std::string getProdNo() const
    {
      return prodNo;
    }

  int getQuantity() const
    {
      return quantity;
    }

  int  getPrice() const
    {
      return price;
    }  


  // Mutator void functions

  void setProdNo(std::string pn)
  {
    prodNo = pn;
  }

  void setQuantity(int q)
  {
    quantity = q;
  }

  void setPrice(int p)
  {
    price = p;
  }  

  // other functions
  int getInvoiceAmt()
  {
    return quantity * price;
  }

  
 private:
  std::string prodNo;
  int quantity;
  int price;


};
