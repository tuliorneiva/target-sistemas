#include <iostream>

using namespace std;

bool pertenceFibonnaci(int num){
    int a, b, temp;
    a = 0;
    b = 1;

    while (b <= num){
        if (num == a || num == b){
            return true;
        }
        // Percorre e cria novos números para a sequência enquanto não chegamos ao número inserido.

        temp = b;
        b = a + b;
        a = temp;
    }

    return false;

}


int main()
{
    int num;
    num = 4;

    if(pertenceFibonnaci(num)){
        cout << "Pertence" << endl;
    } else {
        cout << "Não pertence" << endl;
    }

    return 0;
}
