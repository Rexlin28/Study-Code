// Definir una función para realizar una solicitud a la API y obtener datos de Pokémon
async function fetchPokemonData(pokemonName) {
    const response = await fetch(`https://pokeapi.co/api/v2/pokemon/${pokemonName}`);
    const data = await response.json();
    return data;
}

// Definir una función para crear una cola de Pokémon
class Queue {
    constructor() {
        this.items = [];
    }

    enqueue(item) {
        this.items.push(item);
    }

    dequeue() {
        if (this.isEmpty()) {
            return "La cola está vacía";
        }
        return this.items.shift();
    }

    isEmpty() {
        return this.items.length === 0;
    }
}

// Definir una función para crear una pila de Pokémon
class Stack {
    constructor() {
        this.items = [];
    }

    push(item) {
        this.items.push(item);
    }

    pop() {
        if (this.isEmpty()) {
            return "La pila está vacía";
        }
        return this.items.pop();
    }

    isEmpty() {
        return this.items.length === 0;
    }
}

// Declarar las listas al inicio del programa
const colaPokemonList = [];
const pilaPokemonList = [];

// Función para comparar las estadísticas de dos Pokémon
function comparePokemonStats(pokemon1, pokemon2) {
    const attackStat1 = pokemon1.stats.find(stat => stat.stat.name === "attack");
    const attackStat2 = pokemon2.stats.find(stat => stat.stat.name === "attack");

    if (attackStat1 && attackStat2) {
        const attack1 = attackStat1.base_stat;
        const attack2 = attackStat2.base_stat;

        if (attack1 > attack2) {
            return pokemon1.name;
        } else if (attack1 < attack2) {
            return pokemon2.name;
        }
    }

    return "Empate"; // En caso de empate o si las estadísticas no se encuentran
}

// Función para obtener un Pokémon aleatorio
async function getRandomPokemon() {
    const randomId = Math.floor(Math.random() * 898) + 1;
    const randomPokemon = await fetchPokemonData(randomId);
    return randomPokemon;
}

// Función para mostrar al ganador en el frontend
function showWinner(winner) {
    const winnerElement = document.getElementById("winner");
    winnerElement.textContent = `El ganador es: ${winner}`;
}

// Función para mostrar los Pokémon en la cola
function showQueuePokemon(pokemonList) {
    const queueList = document.getElementById("queueList");
    queueList.innerHTML = '';
    pokemonList.forEach((pokemon) => {
        const listItem = document.createElement("li");
        listItem.textContent = pokemon.name;
        queueList.appendChild(listItem);
    });
}

// Función para mostrar los Pokémon en la pila
function showStackPokemon(pokemonList) {
    const stackList = document.getElementById("stackList");
    stackList.innerHTML = '';
    pokemonList.forEach((pokemon) => {
        const listItem = document.createElement("li");
        listItem.textContent = pokemon.name;
        stackList.appendChild(listItem);
    });
}

async function initLists() {
    for (let i = 0; i < 3; i++) {
        const randomPokemonCola = await getRandomPokemon();
        colaPokemonList.push(randomPokemonCola);

        const randomPokemonPila = await getRandomPokemon();
        pilaPokemonList.push(randomPokemonPila);
    }
    // Mostrar los Pokémon en la cola y la pila
    showQueuePokemon(colaPokemonList);
    showStackPokemon(pilaPokemonList);
}

// Llamar a la función para inicializar las listas
initLists();

// Función principal para el enfrentamiento de Pokémon
async function enfrentamientoPokemon() {
    const colaPokemon = new Queue();
    const pilaPokemon = new Stack();

    // Agregar 3 Pokémon aleatorios a la cola
    const colaPokemonList = [];
    for (let i = 0; i < 3; i++) {
        const randomPokemon = await getRandomPokemon();
        colaPokemon.enqueue(randomPokemon);
        colaPokemonList.push(randomPokemon);
    }

    // Agregar 3 Pokémon aleatorios a la pila
    const pilaPokemonList = [];
    for (let i = 0; i < 3; i++) {
        const randomPokemon = await getRandomPokemon();
        pilaPokemon.push(randomPokemon);
        pilaPokemonList.push(randomPokemon);
    }

    // Realizar el enfrentamiento entre los Pokémon en la cola y la pila
    const results = []; // Almacenar los resultados de cada enfrentamiento

    for (let i = 0; i < 3; i++) {
        const pokemon1 = colaPokemon.dequeue();
        const pokemon2 = pilaPokemon.pop();

        console.log(`${pokemon1.name} vs ${pokemon2.name}`);

        const winner = comparePokemonStats(pokemon1, pokemon2);

        if (winner !== "Empate") {
            console.log(`${winner} Ganoo!`);
            showWinner(`${pokemon1.name} vs ${pokemon2.name}: ${winner}`);
            results.push(`${pokemon1.name} vs ${pokemon2.name}: ${winner}`);
        } else {
            console.log("Empatee!");
            showWinner(`${pokemon1.name} vs ${pokemon2.name}: Empate`);
            results.push(`${pokemon1.name} vs ${pokemon2.name}: Empate`);
        }
    }

    console.log("\nFin de las peleass");

    return results; // Devuelve un array de resultados
}
// Llamar a la función principal para iniciar el programa
enfrentamientoPokemon();

document.addEventListener("DOMContentLoaded", () => {
    const startButton = document.getElementById("startButton");

    startButton.addEventListener("click", async () => {
        const winner = await enfrentamientoPokemon();
        showWinner(winner);
    });
});