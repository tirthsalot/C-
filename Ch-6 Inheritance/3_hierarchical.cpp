#include <iostream>
using namespace std;

class Worker {
public:
    void doWork() {
        cout << "Worker is working" << endl;
    }
};

class TeamLeader : public Worker {
};

class Boss : public Worker {
};

int main() {
    TeamLeader t;
    Boss b;

    t.doWork();
    b.doWork();
}