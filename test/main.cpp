#include <iostream>
#include <vector>
#include "../include/RLnet.h"
#include "../include/neural/neuralnetwork.h"

using namespace std;

double LEARNING_RATE = 0.01;

int main()
{
    vector<double> in(10,1);
    vector<double> leg(2,1);

    QModel *m = new QModel({10,20,10,2},0.01);

    auto res = m->forward(&in,&leg);
    
    for(auto i : res)
        cout << i << endl;
}