#include <iostream>
using namespace std;

///struct Node{};///都有分號結尾
///class Cat{};///之前幾周，都教過，更強大
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
