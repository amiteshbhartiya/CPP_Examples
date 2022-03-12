// C++ program to find the smallest number which greater than a given number
// and has same set of digits as given number
#include <iostream>
using namespace std;



class ComplexNumber {
    private:
        int i;
        int j;
        
    public:
        ComplexNumber(int i = 0, int j =0) {
            this->i = i;
            this->j = j;
        }
        void printCompleNumber() {
            cout<< this->i <<" +i"<<this->j <<endl;
        }
    
        ComplexNumber operator+ (ComplexNumber obj) {
            ComplexNumber obj2;
            
            obj2.i = this->i + obj.i;
            obj2.j = this->j + obj.j;
            
            return obj2;
        }

  
};


// Driver program to test above function
int main()
{
    cout <<"Example Operater Overloding" <<endl;
    
    ComplexNumber obj1(3, 5);
    ComplexNumber obj2(8, 2);
    obj1.printCompleNumber();
    obj2.printCompleNumber();
    
    ComplexNumber obj3 = obj1 + obj2;
    cout<<"Output"<<endl;
    obj3.printCompleNumber();
  
    return 0;
}
