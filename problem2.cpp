#include <iostream>
#include <string>
using namespace std;
class Timer {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Timer(int h, int m, int s) {
        set_time(h, m, s);
    }

    void set_time(int h, int m, int s) {
        minutes = m + s / 60;
        seconds = s % 60;

        hours = h + minutes / 60;
        minutes %= 60;

        hours %= 24;
    }

    void print_time() const {
       cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() {
    int h, m, s;
    cin >> h >> m >> s;

    Timer timer(h, m, s);

    timer.print_time();

    return 0;
}
