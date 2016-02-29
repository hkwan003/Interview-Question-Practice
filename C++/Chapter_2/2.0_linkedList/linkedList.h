using namespace std;

struct IntNode
{
    int data;
    IntNode *next;
    IntNode(int data)
    : data(data), next(0)
    {}
};

class IntList
{
    private:
        IntNode *head;
        IntNode *tail;


    public:
        IntList();
        void display() const;
        void push_front(int value);
        void pop_front();
        void findMiddle();
        void push_back(int value);
        void select_sort();
        void insert_sorted(int value);
        void remove_duplicates();
        void reverse();
        void remove(int value);

};
