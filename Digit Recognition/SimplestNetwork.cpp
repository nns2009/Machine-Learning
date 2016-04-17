#include "SimplestNetwork.h"


SimplestNetwork::SimplestNetwork()
{
    int imSide = 28;
    int inputCount = imSide * imSide;
    vector<NNode*> inputs;

    for (int i = 0; i < inputCount; i++)
    {
        NNode* node = new NNode(vector<NNode*>(), 0);
        inputs.push_back(node);
        nodes.push_back(node);
    }

    int hidden1Count = 200;
    vector<NNode*> hidden1s;

    for (int i = 0; i < hidden1Count; i++)
    {
        NNode* node = new NNode(inputs, 0.01f);
        hidden1s.push_back(node);
        nodes.push_back(node);
    }

    int outputsCount = 10;
    vector<NNode*> outputs;

    for (int i = 0; i < outputsCount; i++)
    {
        NNode* node = new NNode(hidden1s, 0.01f);
        outputs.push_back(node);
        nodes.push_back(node);
    }
}


SimplestNetwork::~SimplestNetwork()
{
}
