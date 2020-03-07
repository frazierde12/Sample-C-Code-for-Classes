#include <cmath>
class DollarAmount
{

 public:

  explicit DollarAmount(int64_t dollars, int64_t cents)
    {
      amount = (dollars*100)+cents;
    }

  void add(DollarAmount right)
  {
    amount = amount + right.amount;
  }

  void subtract(DollarAmount right)
  {
    amount = amount - right.amount;
  }  

  void divide(DollarAmount right)
  {
    if (right.amount !=0)
      {
	amount = amount/right.amount;
      }
  }
  
  void addInterst(int rate, int divisor)
  {
    DollarAmount interest{0,0};
    interest.amount = (rate + divisor/2)/divisor;
    add(interest);
  }

  std::string toString() const
  {
    std::string dollars{std::to_string(amount/100)};
    std::string cents{std::to_string(std::abs(amount%100))};

    if (cents.size() == 1)
      {
	cents = "0" + cents;
      }
    return dollars + "." + cents;
    
  }
  
 private:
  int64_t amount{0}; // Value in cents
  
};
