// Copyright [2025] <Luiz Roberto Pereira Scolari>

/*
    *** Importante ***

    O código de fila em vetor está disponível internamente (não precisa de implementação aqui)

    Um corredor é usado como estacionamento. Há uma única fila de carros possível e as quadras ao redor são de sentido único anti-horário. 
    Deste modo, para retirar um veículo, é necessário que todos que estejam a sua frente, dê uma volta na quadra, se posicionando no fim da fila. 
    Veja um exemplo a seguir:

    Escreva funções, do lado da aplicação, que auxilie no controle do posicionamento dos veículos presentes no estacionamento:

    1) Remova o k-ésimo veículo de uma fila f. O primeiro veículo está na posição 1, o segundo na posição 2 e assim por diante (lembre-se que, internamente, o primeiro elemento da fila está na posição 0 do vetor).

    void retira_veiculo(ArrayQueue<int> *f, int k);
    Exemplo:

    retira_veiculo(f, 3);

    entrada: f = [10, 50, 40, 20, 30]
    fila atualizada: f = [20, 30, 10, 50]
    2) Mantenha apenas o k-ésimo elemento de uma fila f, removendo todos os demais.

    void mantenha_veiculo(ArrayQueue<int> *f, int k);
    Exemplo:

    mantenha_veiculo(f, 3);

    entrada: f = [10, 50, 40, 20, 30]
    fila atualizada: f = [40]

*/

void retira_veiculo(structures::ArrayQueue<int> *f, int k) {

    // ... COLOQUE SEU CÓDIGO AQUI ...
    for(int i=0; i<k; i++){
        int str = f->dequeue();
        if (i!=k-1){
            f->enqueue(str);
        } 
    }
}

void mantenha_veiculo(structures::ArrayQueue<int> *f, int k) {

     // ... COLOQUE SEU CÓDIGO AQUI ...
    int size = f->size();
    for (int i=0; i<size; i++){
        if(i==k-1){
            int elemento = f->dequeue();
            f->enqueue(elemento);
        } else {
            f->dequeue();
        }
    }
}

/*
    *** Importante ***

    A função 'main()' não deve ser escrita aqui, pois é parte do código dos testes e já está implementada

*/
