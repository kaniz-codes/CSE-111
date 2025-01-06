#include <iostream>
using namespace std;
class LibraryItem {
protected:
    string title;
    int overdue;
public:
    LibraryItem(string t, int d) {
        title = t;
        overdue = d;
    }
    double calculateFine(double rate) {
        return overdue * rate;
    }
    double calculateFine(double rate, double discount) {
        double fine = overdue * rate;
        return fine - (fine * discount);
    }
    double calculateFine(int multiplier, double rate) {
        if (multiplier == 2) {
            return overdue * rate * 2;
        } else {
            return overdue * rate;
        }
    }
};
int main() {
    LibraryItem obj("Kaniz", 10);

    double result = obj.calculateFine(0.50); 
    double result1 = obj.calculateFine(0.30, 0.0780);  
    double result2 = obj.calculateFine(2, 1.00);
    cout << result << endl;
    cout << result1 << endl;
    cout << result2 << endl;

    return 0; 
}
