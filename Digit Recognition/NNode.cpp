#include "NNode.h"
#include "Common.h"

NNode::NNode(vector<NNode*> pr, float k)
{
    prevs = pr;
    weights.resize(prevs.size());
    for (int i = 0; i < weights.size(); i++)
        weights[i] = random(k);
    bias = random(k);

    value = 0;
    der = 0;
}

NNode::~NNode()
{
}

void NNode::eval(float input)
{
    value = input + bias;
    for (int i = 0; i < prevs.size(); i++)
        value += prevs[i]->value * weights[i];

    if (value < 0)
        value = 0;
}

void NNode::derive()
{
    
}
