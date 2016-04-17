#pragma once

#include <vector>
using namespace std;

class NNode
{
    vector<NNode*> prevs;
    vector<float> weights;
    float bias;

public:
    NNode(vector<NNode*> pr, float k);
    ~NNode();

    float value;
    float der;
    void eval(float input);
    void derive()
};

