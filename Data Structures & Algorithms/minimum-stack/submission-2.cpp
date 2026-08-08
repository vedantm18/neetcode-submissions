class MinStack {
      # define MAX 30001
       int stack[MAX];
       int topIndex;
public:
    MinStack() {
         topIndex=-1;
    }
    bool isfull(){
       if(topIndex==MAX-1){
        return true;
       }
       return false;
    }
    bool isEmpty(){
       if(topIndex==-1){
        return true;
       }
       return false;
    }
     
    void push(int val) {
       if(isfull()){
        return;
       }
       stack[++topIndex]=val;   
    }
    
    void pop() {
        if(isEmpty()){
            return;
        }
        topIndex--;
    }
    
    int top() {
        if(isEmpty()){
            return -1;
        }
        return stack[topIndex];
    }
    
    int getMin() {
        if(isEmpty()){
            return -1;
        }
        int minelement=stack[0];
        for(int i=1;i<=topIndex;i++){
            if(stack[i]<minelement){
                minelement=stack[i];
            }
        }
        return minelement;
    }
};
