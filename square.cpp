#include <bits/stdc++.h>
using namespace std;


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
