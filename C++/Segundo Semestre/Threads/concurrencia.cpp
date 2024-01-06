#include <iostream>
#include <thread>
#include <vector>

using namespace std;


void square(int x, int& accum) {
accum += x * x;
}

int main() {
int accum = 0;
vector<thread> ths;
for (int i = 1; i <= 20; i++) {
ths.push_back(thread(&square, i, ref(accum)));
}

for (auto& th : ths) {
th.join();
}
cout << "accum = " << accum << endl;
return 0;
}
