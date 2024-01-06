//export * from "script.js";

export class Pila{

// Peek, Pop, Peek
Stack = [1,2,3,4,5];

Push(P){
    this.Stack.push(P);
}

Pop(){
    return (this.Stack.pop());
}

Peek(){
    return this.Stack[this.Stack.lenght-1];
}

Size(){
    return this.Stack.length;
}

};