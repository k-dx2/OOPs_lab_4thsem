#include <iostream>

using namespace std;

struct SubListNode{
    int des;
    SubListNode *next = NULL;
};

struct MainListNode{
    SubListNode *head = NULL;
    SubListNode *tail;
};

int main(void){
    int V, E;
    cout << "Enter the no. of vertices\n";
    cin >> V;
    cout << "Enter the no. of edges\n";
    cin >> E;
    
   int src,des;
    
    MainListNode *srcList = new MainListNode[V];
                
                for(int i=0; i<E; i++)
                    {
                    cin >> src >> des;
                    if(srcList[src].head == NULL){
                        srcList[src].head = new SubListNode;
                        srcList[src].head -> des = des;
                        srcList[src].tail = srcList[src].head;
                    }
                    else
                    {
                        srcList[src].tail -> next = new SubListNode;
                        srcList[src].tail = srcList[src].tail -> next;
                        srcList[src].tail -> des = des;
                    }
                }
                
                cout << "Displaying the List\n";
                for(int i=0; i<V; i++)
   {
                    cout << i << "  ";
                    SubListNode *temp = srcList[i].head;
                    while(temp!=NULL)
                     {
                        cout << temp -> des << " ";
                        temp = temp -> next;
                    }
                    cout << "-" << endl;
                    }
    
    return 0;
}
