#include <iostream>

using namespace std;

class Noisy {
    int n;
    public:
    Noisy(): n(0) { cout << "Default constructor" << endl; }
    Noisy(int n): n(n) { cout << "Int (conversion) constructor" << endl; }
    Noisy(const Noisy& other): n(other.n) { cout << "Copy constructor" << endl; }
    ~Noisy() { cout << "Destructor" << endl; }

    int getN() { return n;}
    void print() const {
        //cout << getN() << endl;
    }
    void printNonConst() {
        cout << getN() << endl;
    }
};

void f1(Noisy n) {
    n.getN();
}

void f2(const Noisy& n) {
    //n.getN();
}

int main(void) {
    Noisy n1;
    return 0;
}