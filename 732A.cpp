#include <iostream>
using namespace std;

bool b = true;
int main() {
	int k, count=1, value, r;
    cin >> k >> r;
    value=k;
    int x = value;
    while (b) {
       
        if (value % 10 == 0 || (value) % 10 == r) {
            b = false;
            break;
        }
        value += x ;
        count++;
    }
    cout << count << endl;
    return 0;
}