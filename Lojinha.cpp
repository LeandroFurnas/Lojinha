#include <iostream>
using namespace std;

void compra(int opc, float &cred) {
    char decisao;
    float precos[] = {0.0, 1.50, 1.00, 0.50, 1.25, 3.00, 3.50, 0.25};

    if (opc < 1 || opc > 7) {
        cout << "Opção Inválida! Escolha um número de 1 a 7.\n";
        return;
    }

    cout << "Escolheste ";
    switch (opc) {
            case 1: cout << "o Pãozinho"; 
        break;
            case 2: cout << "o Leite"; 
        break;
            case 3: cout << "a Água";
         break;
            case 4: cout << "a Manteiga"; 
        break;
            case 5: cout << "a Gelatina"; 
        break;
            case 6: cout << "os Crepes"; 
        break;
            case 7: cout << "uma doacao"; 
        break;
    }

    cout << " por $" << precos[opc] << ". Tens a certeza? (s/n): ";
    cin >> decisao;

    if (decisao == 's' || decisao == 'S') {
        if (cred >= precos[opc]) {
            cred -= precos[opc];
            cout << "\nCompra realizada com sucesso!\nSaldo restante: $" << cred << endl;
        } else {
            cout << "\nSaldo insuficiente!\nTens $" << cred << endl;
        }
        if(cred == 0){
            cout << "\nTas sem dinheiro vai trabalhar que es novo" << endl;
        }
    } else {
        cout << "\nCompra cancelada.\n";
    }

    
    cout << "\nPressiona se enter queres fazer outra compra . ";
    cin.ignore();
    cin.get();

    
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {
    int opc;
    float cred = 10.00;

    while (true) {
        cout << "-------------------------------------------------" << endl;
        cout << "|         Bem-vindo à Lojinha do Blud!         |" << endl;
        cout << "|        Aqui nos vendemos so o básico!        |" << endl;
        cout << "| 1 - Pao        ($1.50)                        |" << endl;
        cout << "| 2 - Leite      ($1.00)                        |" << endl;
        cout << "| 3 - Agua       ($0.50)                        |" << endl;
        cout << "| 4 - Manteiga   ($1.25)                        |" << endl;
        cout << "| 5 - Gelatina   ($3.00)                        |" << endl;
        cout << "| 6 - Crepes     ($3.50)                        |" << endl;
        cout << "| 7 - Doacao     ($0.25)                        |" << endl;
        cout << "| Escolha uma das opcoes pelo numero acima:     |" << endl;
        cout << "-------------------------------------------------" << endl;
        cout << "\nSaldo Atual: $" << cred << endl;
        cout << "\nDigite 0 para sair da loja. " << endl;

        cin >> opc;

        if (opc == 0) {
            cout << "Obrigado por visitar a lojinha! Volte sempre!\n";
            break;
        }

        compra(opc, cred);
    }

    return 0;
}
