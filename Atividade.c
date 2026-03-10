#include <stdio.h>

#define NUM_ALUNOS 30

int main() {
    
    float nota1[NUM_ALUNOS];
    float nota2[NUM_ALUNOS];
    float media[NUM_ALUNOS];
    
    float soma_medias = 0.0;
    float media_turma;

    printf("--- Sistema de Notas ---\n\n");

    
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        
        printf("Digite a 1a nota: ");
        scanf("%f", &nota1[i]);
        
        printf("Digite a 2a nota: ");
        scanf("%f", &nota2[i]);

        
        media[i] = ((nota1[i] * 2) + (nota2[i] * 3)) / 5.0;
        
       
        soma_medias += media[i];
        
        printf("------------------------\n");
    }

  
    media_turma = soma_medias / NUM_ALUNOS;


    printf("\n========================================\n");
    printf("MÉDIA GERAL DA TURMA: %.2f\n", media_turma);
    printf("========================================\n\n");
    
    printf("ALUNOS ACIMA DA MÉDIA DA TURMA:\n\n");

    int encontrou_alunos = 0;
    
    for (int i = 0; i < NUM_ALUNOS; i++) {
        
        if (media[i] > media_turma) {
            printf("Aluno %d -> Nota 1: %.2f | Nota 2: %.2f | Média: %.2f\n", 
                   i + 1, nota1[i], nota2[i], media[i]);
            encontrou_alunos = 1;
        }
    }

    if (!encontrou_alunos) {
        printf("Nenhum aluno ficou acima da média da turma (todas as notas foram iguais).\n");
    }

    return 0;
}