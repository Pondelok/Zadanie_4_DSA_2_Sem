#ifndef ZADANIE_4_DSA_2_SEM_BINTREE_H
#define ZADANIE_4_DSA_2_SEM_BINTREE_H

using namespace std;

class BinTree {

public:
    BinTree();
    ~BinTree();

    void createRoot(string input);
    void createLeft(string input);
    void createRight(string input);
    void moveLeft();
    void moveRight();

    void createTree();
    void createLeftChild();
    void createRightChild();

    void positionRoot();
    void positionLeft();
    void positionRight();
    void positionActual();
    void positionBack();

    void printData(ostream &tree);

    void game();


private:

    string data;
    char choice{};

    struct Node{
        char pos;
        string data;
        Node * left;
        Node *right;
        Node *prev;
    };

    void delTree(Node*leaf);
    void prevPosition(Node*leaf);
    void print(Node*leaf, ostream &tree);
    void read();

    Node*root;
    Node*position;
};

#endif //ZADANIE_4_DSA_2_SEM_BINTREE_H
