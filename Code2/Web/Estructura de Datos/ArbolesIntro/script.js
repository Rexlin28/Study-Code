function BinarySearchTree(){
    this._root = null;

}


BinarySearchTree.prototype = {
    constructor: BinarySearchTree,

    //agregar los valores al arbol si todo funciona
    add: function(value){
        var node = {
            value: value,
            left: null,
            right: null
        }
        if(this._root === null){
            this._root = node;
        }else{
            this.insert(node, this._root);
        }
    },
    //Insertar los valores en el lugar correspondiente
    insert: function (node, current){
        if(node.value < current.value){
            if(current.left === null){
                current.left = node;
            }else{
                this.insert(node, current.left);
            }
        }else if(node.value > current.value){
            if(current.right === null){
                current.right = node;
            }else{
                this.insert(node, current.right);
            }
        }
    },
    //verificar si exite un valor concreto
    contains: function(value){
        return this.findValue()
    },

    size: function(){
        var lenght = 0;
        this.traverse(function(node){
            length++;
        });
        return lenght;
    },

    //recorrer todo el arbol, requiere callback
    traverse: function(process){
        function inOrder(node){
            if(node){
                if(node.left !== null){
                    inOrder(node.left);
                }
                process.call(this, node);
                if(node.right !== null){
                    inOrder(node.right);
                }
            }
        }
    },

    toArray: function(){
        var result = [];
        this.traverse(function(node){
            result.push(node.value);
        });
        return result;
    },

    //buscar valores complemento de contains
    findValue: function(value, current){
        if(current === null){
            return false;
        }else if(value < current.value){
            return this.findValue(value, current.left);
        }else if(value > current.value){
            return this.findValue(value, current.right);
        }else{
            return true;
        }
    }
}


var tre= new BinarySearchTree();

tre.add(7)
tre.add(5)
tre.add(1)
tre.add(8)
tre.add(9)
tre.add(10)
tre.add(3)

console.log(tre.toArray());
console.log(tre.size());
console.log(tre.contains(10));