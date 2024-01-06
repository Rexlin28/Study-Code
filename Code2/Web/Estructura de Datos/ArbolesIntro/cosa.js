
class Node {
    constructor(value) {
        this.value = value;
        this.left = null;
        this.right = null;
    }
}

class BinaryTree {
    constructor() {
        this.root = null;
    }
    // Método para insertar un nuevo nodo en el árbol
    insert(value) {
        const newNode = new Node(value.id);
        newNode.data = value;

        if (!this.root) {
            this.root = newNode;
            return this;
        }

        let currentNode = this.root;

        while (true) {
            if (value.id === currentNode.value) return undefined; // Evitar la inserción de duplicados

            if (value.id < currentNode.value) {
                if (!currentNode.left) {
                    currentNode.left = newNode; // Insertar a la izquierda si no hay nodo izquierdo
                    return this;
                }
                currentNode = currentNode.left;
            } else {
                if (!currentNode.right) {
                    currentNode.right = newNode; // Insertar a la derecha si no hay nodo derecho

                    return this;
                }
                currentNode = currentNode.right;
            }
        }
    }

   
    // Método para eliminar un nodo del árbol
    delete(value) {
        if (!this.root) return false;

        let currentNode = this.root;
        let parentNode = null;
        let found = false;
        let hijosCount = 0;

        while (currentNode && !found) {
            if (value < currentNode.value) {
                parentNode = currentNode;
                currentNode = currentNode.left;
            } else if (value > currentNode.value) {
                parentNode = currentNode;
                currentNode = currentNode.right;
            } else {
                found = true;
            }
        }

        if (!found) return false;

        if (currentNode.left && currentNode.right) {
            let minRightNode = currentNode.right;
            let minRightParentNode = currentNode;

            while (minRightNode.left) {
                minRightParentNode = minRightNode;
                minRightNode = minRightNode.left;
            }

            currentNode.value = minRightNode.value;
            currentNode = minRightNode;
            parentNode = minRightParentNode;
        }

        if (currentNode.left || currentNode.right) {
            hijosCount = 1;
        }

        if (hijosCount === 0) {
            if (currentNode === this.root) {
                this.root = null;
            } else {
                if (currentNode.value < parentNode.value) {
                    parentNode.left = null;
                } else {
                    parentNode.right = null;
                }
            }
        }

        if (hijosCount === 1) {
            let childNode = null;

            if (currentNode.left) {
                childNode = currentNode.left;
            } else {
                childNode = currentNode.right;
            }

            if (currentNode === this.root) {
                this.root = childNode;
            } else {
                if (currentNode.value < parentNode.value) {
                    parentNode.left = childNode;
                } else {
                    parentNode.right = childNode;
                }
            }
        }

        return true;
    }

     // Método para aplicar una función a cada nodo del árbol en orden
    inOrderApply(fn, node = this.root) {
        if (node) {
            this.inOrderApply(fn, node.left);
            fn(node);
            this.inOrderApply(fn, node.right);
        }
    }
    // Métodos para buscar un nodo por nombre en el árbol
    searchByName(name) {
        return this.searchByNameHelper(name, this.root);
    }
    searchByNameHelper(name, node) {
        if (!node) {
            return null;
        }

        if (node.data.name === name) {
            return node;
        } else if (name < node.data.name) {
            return this.searchByNameHelper(name, node.left);
        } else {
            return this.searchByNameHelper(name, node.right);
        }
    }
}

// Función para buscar un juego por nombre
function searchGame() {
    let searchInput = document.getElementById('searchInput').value;
    if (searchInput.trim() !== '') {
        let result = Videogames.searchByName(searchInput);
        if (result) {
            alert('Juego ENCONTRADO!: ' + result.data.name);
        } else {
            alert('NO se encontro el juego.');
        }
    } else {
        alert('Ingrese un juego valido.');
    }
}

// Función para crear un nuevo juego
function createGame() {
    let newGame = {
        id: Math.floor(Math.random() * 1000), 
        name: prompt('Ingrese el nombre del juego:'),
        category: prompt('Ingrese la categoria del juego:')
    };

    Videogames.insert(newGame);
    refreshGameContainer();
}
// Función para eliminar un juego
function deleteGame() {
    let deleteInput = prompt('Ingrese el ID a borrar:');
    if (deleteInput !== null) {
        let deleted = Videogames.delete(parseInt(deleteInput, 10));
        if (deleted) {
            alert('Juego borrado correctamente!.');
            refreshGameContainer();
        } else {
            alert('No se encontro el juego.');
        }
    }
}
// Función para actualizar el contenedor de juegos en la interfaz
function refreshGameContainer() {
    let container = document.getElementById('game-container');
    container.innerHTML = '';
    Videogames.inOrderApply(node => {
        let game = node.data; 

        let card = document.createElement('div');
        card.className = 'card';

        let details = document.createElement('div');

        let id = document.createElement('p'); 
        id.innerText = 'ID: ' + game.id;
        details.appendChild(id);

        let name = document.createElement('h2');
        name.innerText = 'Name: ' + game.name;
        details.appendChild(name);

        let category = document.createElement('p');
        category.innerText = 'Category: ' + game.category;
        details.appendChild(category);

        card.appendChild(details);  // Move this line here

        container.appendChild(card);
    });
}





// Array de juegos
let games = [{
    id: 10,
    name: "GTA V",
    category: "Action"
},{
    id: 12,
    name: "Payday 2",
    category: "Shooter"
},{
    id: 11,
    name: "Legend of Zelda",
    category: "Adventure"
},{
    id: 17,
    name: "Minecraft",
    category: "Survival"
},{
    id: 9,
    name: "Call of Duty",
    category: "Shooter"

},{
    id: 14,
    name: "Super Mario Bros",
    category: "Adventure"
}];


// Crear el árbol binario y agregar los juegos
let Videogames = new BinaryTree();

Videogames.insert(games[0]);
Videogames.insert(games[1]);
Videogames.insert(games[2]);
Videogames.insert(games[3]);
Videogames.insert(games[4]);
Videogames.insert(games[5]);

console.log(Videogames);

let container = document.getElementById('game-container');

// Agregar los juegos a la interfaz
Videogames.inOrderApply(node => {
    let game = node.data;

    let card = document.createElement('div');
    card.className = 'card';

    let details = document.createElement('div');

    let name = document.createElement('h2');
    name.innerText = game.name;
    details.appendChild(name);

    let category = document.createElement('p');
    category.innerText = 'Category: '+game.category;
    card.appendChild(category);

    card.appendChild(details);    

    container.appendChild(card);
});