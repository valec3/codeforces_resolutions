#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int secret_box;
    cin >> secret_box;

    vector<int> boxes(n);
    for (int i = 0; i < n; i++) {
        cin >> boxes[i];
    }

    vector<int>::iterator it = find(boxes.begin(), boxes.end(), secret_box);
    if (it != boxes.end()) {
        boxes.erase(it);
    }

    for (int box : boxes) {
        cout << box << endl;
    }

    return 0;
}
