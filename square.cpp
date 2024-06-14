#include <bits/stdc++.h>
using namespace std;

class Square {
private:
    int position_x, position_y;
    int width, height;
public:
    // constructor
    Square(int px, int py, int w, int h) {
        position_x = px;
        position_y = py;
        width = w;
        height = h;
    }

    // getter
    int getPx() { return position_x; }
    int getPy() { return position_y; }
    int getWidth() { return width; }
    int getHeight() { return height; }
};


int main() {

    cout << "Square information\n";

    int px, py, w, h;
    cout << "x position: ";
    cin >> px;
    cout << "y position: ";
    cin >> py;
    cout << "width: ";
    cin >> w;
    cout << "height: ";
    cin >> h;

    Square s(px, py, w, h);

    cout << "x, y, width, height = "
        << s.getPx() << ' ' << s.getPy() << ' ' << s.getWidth() << ' ' << s.getHeight() << '\n';

    return 0;
}
