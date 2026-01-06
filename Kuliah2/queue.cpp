#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout << "Front Element : " << q.front() << endl;

    cout << "Dequeueing Element : " << q.front() << endl;
    q.pop();

    cout << "Front Element after dequeue : " << q.front() << endl;

    cout << "Queue Element : ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    
    return 0;
}