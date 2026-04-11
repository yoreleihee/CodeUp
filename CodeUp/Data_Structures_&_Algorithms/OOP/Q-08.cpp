#include <iostream>
using namespace std;

class Product {
    char* pName;
    float mPrice;
    int mQuantity;
    float mDiscountRate;

public:
    Product(char* name, float price, int quantity, float discountRate) {
        pName = name;
        mPrice = price;
        mQuantity = quantity;
        mDiscountRate = discountRate;
    }

    float Total() {
        float amount = mQuantity * mPrice;
        return amount - (mDiscountRate / 100 * amount);
    }

    void PrintInfo() {
        cout << "Product: " << pName << " | Price: $" << mPrice << " | Quantity: " << mQuantity << " | Discount: " << mDiscountRate << "%" << endl;
        cout << "Total after discount: $" << Total();
    }
};
int main() {
 
    Product product((char*)"Pen", 2.0, 10, 10);
    product.PrintInfo();
    return 0;
}
