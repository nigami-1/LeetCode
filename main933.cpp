#include <iostream>
#include <queue>

using namespace std;

class RecentCounter {
public:
queue<int> *q;

    RecentCounter() {
        q = new queue<int>;
    }

    int ping(int t) {
        q->push(t);
        while (q->front() < t - 3000)
        {
            q->pop();
        }
        return q->size();
    }

};


int main()
{

    return 0;
}
