/*
Implement the following operations of a queue using stacks.

push(x) -- Push element x to the back of queue.
pop() -- Removes the element from in front of queue.
peek() -- Get the front element.
empty() -- Return whether the queue is empty.
*/
class Queue {
public:
    stack<int> s;
    // Push element x to the back of queue.
    void push(int x) {
        s.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        stack<int> s2;
        while(s.size() != 0){
            int a = s.top();
            s.pop();
            s2.push(a);
        }
        s2.pop();
        while(s2.size() != 0){
            int b = s2.top();
            s2.pop();
            s.push(b);
        }
    }

    // Get the front element.
    int peek(void) {
        stack<int> s2 = s;
        if (s2.size() == 0){
            return 0;
        }
        while(s2.size() > 1){
            s2.pop();
        }
        return s2.top();
    }

    // Return whether the queue is empty.
    bool empty(void) {
        if(s.size()){
            return false;
        }
        return true;
    }
};