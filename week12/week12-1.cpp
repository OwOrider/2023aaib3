#include <iostream>
using namespace std;

///struct Node{};///������������
///class Cat{};///���e�X�P�A���йL�A��j�j
struct Node
{
    int val;
};

class Cat
{
public:
    string name;
};

int main()
{
    Cat cat1;
    cat1.name="cattie";
    Node node;
    node.val=1;
}
