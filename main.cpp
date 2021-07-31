/*
    Jokenpo - Feito por Diego Mir

Ideias que serão implementadas:
    - Fazer um timer para a resposta e para navegar nos menus. - Feito
*/

#include <iostream> // Biblioteca padrão
#include <cstdlib> // Biblioteca para o rand() e srand()
#include <ctime> // Biblioteca para o time()
#include <conio.h> // Biblioteca para o gethc()
#include <stdlib.h> // Biblioteca para o _sleep()

using namespace std;

// Variáveis Globais
int pc;
char escolha, jogadas;

// Declarando as funções
int random(int numero_maior);
void jogo();
void tutorial();

// Função principal
int main()
{
    // Declarando as variáveis locais.



    // Menu basicão

    cout << "\t\n-----Jokenpo-----\n" << endl;
    cout << " 1  - Jogar" << endl;
    cout << " 2  - Tutorial" << endl;
    cout << " 3  - Creditos" << endl;
    cout << "Esc - Sair" << endl;

    escolha = getch(); // Lê o que o usario clicar.

    system("cls"); // Limpa a tela

    // Sistema de condição para continuar o programa...

    if(escolha == '1')
    {
        cout << "Carregando o jogo..." << endl;
        _sleep(1500);
        system("cls"); // Limpa a tela
        jogo(); // Carrega a função jogo
    }
    else if(escolha == '2')
    {
        cout << "Carregando o tutorial..." << endl;
        _sleep(1500);
        system("cls"); // Limpa a tela
        tutorial(); // Carrega a função tutorial
    }
    else if(escolha == '3')
    {
        cout << "Criado por:" << endl;
        cout << "\tDiego Mir\n" << endl;
        cout << "Github: Diego-Mir" << endl;
        cout << "Passa la pls =D" << endl;
        getche();
        system("cls"); // Limpa a tela
        main();
    }
    else if(escolha == 27)
    {
        cout << "Certeza que quer sair? Se sim clique qualquer coisa se nao" << endl;
        cout << "clique n." << endl;

        escolha = getch();
        system("cls"); // Limpa a tela
        cout << "Obrigado pela preferencia!!" << endl;
        getch();

        switch(escolha)
        {
        case 'n':
            main();
            break;
        default:
            return 0;
            break;
        }

    }
    else
    {
        main();
    }

    return 0;
}

// Pega um número radom
int random(int numero_maior)
{
    int random;
    unsigned seed = time(0);

    srand(seed);
    random = 1 + rand() % numero_maior;

    return random;
}

// Função com o tutorial
void tutorial()
{
    cout << "\t\n-----Tutorial-----\n" << endl;
    cout << "Primeiro escolha uma das opcoes do menu a 1a e" << endl;
    cout << "para comecar o jogo, para selecionar a primeira pressione" << endl;
    cout << "1, para a 2a que e para carregar o tutorial pressione 2," << endl;
    cout << "pressione Esc para sair do programa.\n" << endl;
    cout << "Se pressionar 1 voce ira para o jogo, no jogo voce tera 3" << endl;
    cout << "jogadas, pressione 1 para a jogada Pedra, pressione 2 para" << endl;
    cout << "Papel e pressione 3 para Tesoura. Depois de fazer a sua" << endl;
    cout << "Jogada sera mostrado se voce gannhou ou se voce perdeu OU" << endl;
    cout << "se deu empate. Para jogar novamente pressione: s ou S ou" << endl;
    cout << "Space OU Enter. Para voltar ao menu pressione qualquer" << endl;
    cout << "outra tecla. Obrigado pela preferencia!!\n" << endl;
    cout << "Pressione Esc para sair..." << endl;

    getch();
    system("cls"); // Limpa a tela
    main();
}

// O jogo
void jogo()
{
    cout << "\t\n-----Jokenpo-----\n" << endl;
    cout << "Jogadas disponiveis:\n" << endl;
    cout << "1 - Pedra" << endl;
    cout << "2 - Papel" << endl;
    cout << "3 - Tesoura" << endl;

    jogadas = getch();

    cout << "\nJO\n" << endl;
    _sleep(800);
    cout << "KEN\n" << endl;
    _sleep(800);
    cout << "POOOOO\n" << endl;
    _sleep(1500);

    pc = random(3);

    cout << endl; // Pulando uma linha

    // Comparando a jogada com o numero aleatorio
    if(jogadas == '1')
    {
        if(pc == 1)
            cout << "Empate..." << endl;
        if(pc == 2)
            cout << "Voce perdeu =(" << endl;
        if(pc == 3)
            cout << "Voce ganhou!!! Parabens!" << endl;
    }
    else if(jogadas == '2')
    {
        if(pc == 2)
            cout << "Empate..." << endl;
        if(pc == 3)
            cout << "Voce perdeu =(" << endl;
        if(pc == 1)
            cout << "Voce ganhou!!! Parabens!" << endl;
    }
    else if(jogadas == '3')
    {
        if(pc == 3)
            cout << "Empate..." << endl;
        if(pc == 1)
            cout << "Voce perdeu =(" << endl;
        if(pc == 2)
            cout << "Voce ganhou!!! Parabens!" << endl;
    }
    else
    {
        cout << "Jogada Invalida! Tente Novamente!" << endl;
    }

    switch(pc)
    {
    case 1:
        cout << "Jogada do pc: Pedra!" << endl;
        break;
    case 2:
        cout << "Jogada do pc: Papel!" << endl;
        break;
    case 3:
        cout << "Jogada do pc: Tesoura!" << endl;
        break;
    }

    cout << "\nGostaria de jogar novamente? Se sim pressione s ou Space" << endl;
    cout << "ou Enter, se nao pressione qualquer tecla!" << endl;

    escolha = getch();

    system("cls"); // Limpa a tela

    switch(escolha)
    {
    case 's':
        jogo();
        break;
    case 'S':
        jogo();
        break;
    case 13:
        jogo();
        break;
    case 32:
        jogo();
        break;
    default:
        main();
        break;
    }

}
