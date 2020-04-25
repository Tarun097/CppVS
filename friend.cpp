// #include <iostream>

// #define print(x) std::cout << x << std::endl;

// //Forward decleration
// class Node;

// class List
// {
//     private:
//     Node* head;
//     Node* tail;

//     public:
//     List() : head(0), tail(0) {}
//     void display();
//     void append(Node* np);
// };

// class Node
// {
//     private :
//     int data;
//     Node* next;

//     public:
//     Node(int i=0): data(i), next(nullptr) {}
    
//     friend void List::display();
//     friend void List::append(Node* np);
// };

// void List::display()
// {
//     Node *p = head;

//     while(p)
//     {
//         std::cout << p->data << std::endl;
//         p = p->next;
//     }
// }

// void List::append(Node* np)
// {
//     if(!head) head = tail = np;
//     else
//     {
//         tail->next = np;
//         tail = tail->next;
//     }

// }


// int main(int argc, char* argv[])
// {
//     List l;
//     Node n1(1), n2(2), n3(3);

//     l.append(&n1);
//     l.append(&n2);
//     l.append(&n3);

//     l.display();

//     std::cout << "Hello World" << std::endl;
//     return 0;
// }