class MyLinkedList {
public:
    int val;
    MyLinkedList *head = NULL;
    MyLinkedList *next;
    MyLinkedList() {
    }
    MyLinkedList(int d){
        val = d;
        next = NULL;
    }
    
    int get(int index) {
        if(head==NULL) return -1;
        MyLinkedList *temp = head;
        int cnt = 0;
        while(temp){
            if(cnt==index) return temp->val;
            cnt++;
            temp = temp->next;
        }
        if(cnt!=index) return -1;
        
        return -1;
    }
    
    void addAtHead(int val) {
        MyLinkedList *temp = new MyLinkedList(val);
        temp->next = head;
        head = temp;
    }
    
    void addAtTail(int val) {
        MyLinkedList *temp = head;
        MyLinkedList *newNode = new MyLinkedList(val);
        if(head == NULL) {
            addAtHead(val);
            return ;
        }
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
    
    void addAtIndex(int index, int val) {
        int cnt = 0;
        
        if(cnt==index){
            addAtHead(val);
            return;
        }
        MyLinkedList *temp = head;
        while(temp != NULL){
            cnt++;
            if(cnt == index){
                MyLinkedList *newN = new MyLinkedList(val);
                MyLinkedList *n = temp->next;
                temp->next = newN;
                newN->next = n;
            }
            temp = temp->next;
        }
    }
    
    void deleteAtIndex(int index) {
        MyLinkedList *temp1 = head;
        if(index == 0){
            head = temp1->next;
            delete temp1;
            return;
        }
        MyLinkedList *temp = head;
        int cnt = 0;
        MyLinkedList *prev = NULL;
        while(temp != NULL){
            
            if(cnt == index){
                prev->next = temp->next;
                delete temp;
                return ;
            }
            cnt++;
            prev = temp;
            temp = temp->next;
            
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */