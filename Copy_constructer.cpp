// C++ program to find the smallest number which greater than a given number
// and has same set of digits as given number
#include <iostream>
using namespace std;



class Fruit {
    int price;
    
public:
    Fruit(int price) {
        this->price = price;
    }
    
    Fruit(Fruit &fruit) {
        this->price = fruit.price * 2;
    }
    
    int getFruit(){
        return price;
    }
};


// Driver program to test above function
int main()
{
    
    int price;

    cout <<"Example" <<endl;
    cin >> price;
    Fruit mango(price);
    Fruit banana(mango);
    
    cout << "Mango Price is" << mango.getFruit();
    cout << "Grapes Price is" << banana.getFruit();
    
    return 0;
}
