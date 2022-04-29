// siaode5.cpp 
//Дан массив из n указателей на вершины списков. Структура узла списка содержит ключ (информационная часть узла) и ссылку на следующий узел.
//1)	Разработать функцию, которая вставляет переданный в качестве параметра ключ в i - ый список
//массива. Индекс i определяется по правилу: i=key%n. Некоторые элементы массива могут остаться nullptr.
//2)	Разработать функцию, которая удаляет значение ключа из списка.
//3)	Разработать функцию, которая находит узел со значением ключа и возвращает указатель на найденный узел.


#include <iostream>
#include <vector>
using namespace std;
struct Node
{
    Node* next;
    int key;
    Node(int n)
    {
        key = n;
        next = nullptr;
    }
};
void InsertNode(Node* &list, int n)
{
    Node* N1 = new Node(n);
    N1->next = list;
    list = N1;
}
void PrintNode(Node* &list)
{
    while (list)
    {
        cout << list->key << " ";
        list = list->next;
    }
}
void ChangeI(vector <Node*> &arr, Node* &list, int k, int n)
{
    int i = list->key % n;
    arr[i]->key = k;
}
void HandInsert(vector <Node*> &arr, Node* &list)//если вдруг нужно будет вводить значения вручную
{
    cout << "Enter first key\n";
    int o;
    cin >> o;
    list = new Node(o);
    cout << "Enter amount of elements\n";
    int n;
    cin >> n;
    cout << "Enter " << n << " nodes\n";
    int k;
    for (int i = 0; i < n; i++)
    {
        int el;
        cout << "Enter amount of elements in Node\n";
        cin >> el;
        cout << "Enter keys\n";
        for (int j = 0; j < el; j++)
        {
            cin >> k;
            InsertNode(list, k);
        }
        arr.push_back(list);
    }
}
void FindKey(Node* list)
{

}
int main()
{
    vector <Node*> arr;
    Node* list = new Node(5);
    //HandInsert(arr, list);
    InsertNode(list, 1);
    InsertNode(list, 2);
    InsertNode(list, 3);
    PrintNode(list);
    arr.push_back(list);
    list = new Node(7);
    InsertNode(list, 4);
    InsertNode(list, 5);
    InsertNode(list, 6);
    arr.push_back(list);
    PrintNode(arr[0]);
    cout << endl;
    PrintNode(arr[1]);

    
    
 

}

