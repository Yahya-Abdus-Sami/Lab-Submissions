#include <iostream>
#include <string>
using namespace std;
template <typename T1, typename T2>
class Record {
private:
    T1 first;
    T2 second;

public:
    Record(T1 f, T2 s) : first(f), second(s) {}
    void setFirst(T1 f) { first = f; }
    void setSecond(T2 s) { second = s; }
    
    T1 getFirst() const { return first; }
    T2 getSecond() const { return second; }
    
    void display() const {
        cout << "Record: " << first << ", " << second<<endl;
    }
};

int main() {
    Record<std::string, double> item("Price", 19.99);
    item.display();

    item.setFirst("Discounted Price");
    item.setSecond(14.99);
    
    std::cout << "Updated Value: " << item.getSecond() << std::endl;
    item.display();

    Record<int, int> coordinates(10, 20);
    coordinates.display();

    return 0;
}
