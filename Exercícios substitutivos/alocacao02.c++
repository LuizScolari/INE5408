// Copyright [2025] <Luiz Roberto Scolari>

/*
(4) cria um novo vetor somente com matrículas maiores ou iguais a menor_matr, a partir de um vetor de N objetos do tipo Aluno:
Aluno *turma_filtra(Aluno t[], int N, int menor_matr);

Exemplo:

t de entrada: [{'Fulano',1010}, {'Beltrano',2020}, {'Fulana',7070}, {'Cicrana':1515}, {'Beltrana',8080}];  N = 5, menor_matr = 2020
tf de saída: [{'Beltrano',2020}, {'Fulana',7070}, {'Beltrana',8080}]

(5) crie um vetor de inteiros com 26 posições, na qual cada posição corresponda a contagem de alunos com a respectiva primeira letra do nome em maiúsculo ('A' na posição 0, 'B' na posição 1, ..., 'Z' na posição 25):
int *turma_conta(Aluno t[], int N);

Exemplo:

t de entrada: [{'Fulano',1010}, {'Beltrano',2020}, {'Fulana',7070}, {'Cicrana':1515}, {'Beltrana',8080}], N = 5
vetor de saída: [0,2,1,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
*/

#include <string>


class Aluno {
 public:
    Aluno() {}  // construtor
    ~Aluno() {}  // destrutor
    std::string devolveNome() {
        return nome;
    }
    int devolveMatricula() {
        return matricula;
    }
    void escreveNome(std::string nome_) {
        nome = nome_;
    }
    void escreveMatricula(int matricula_) {
        matricula = matricula_;
    }
 private:
    std::string nome;
    int matricula;
};

// (4)
Aluno *turma_filtra(Aluno t[], int N, int menor_matr) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (t[i].devolveMatricula() >= menor_matr) {
            count++;
        }
    }
    
    Aluno *tf = new Aluno[count];
    int index = 0;
    for (int i = 0; i < N; i++) {
        if (t[i].devolveMatricula() >= menor_matr) {
            tf[index] = t[i];
            index++;
        }
    }
    return tf;
}

//(5)
int *turma_conta(Aluno t[], int N) {
    int *c = new int[26](); // Inicializa com zeros
    for (int i = 0; i < N; i++) {
        char firstLetter = t[i].devolveNome()[0];
        if (firstLetter >= 'A' && firstLetter <= 'Z') {
            c[firstLetter - 'A']++;
        }
    }
    return c;
}