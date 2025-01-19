#include <iostream>
#include <fstream>

using namespace std;

int main() {

    fstream arquivo;
    string linha;
    char linha_b[255];

    /*
    arquivo.open("cfbcursos.txt",fstream::in|fstream::out|fstream::app); //open abre mas também cria caso n tenha

    //in = input (leitura)
    //out = output (escrita)
    //binary = modo binario
    //ate = abre para escrita sem deletar o conteudo atual, posiciona no final
    //app = append, abre para escrita sem deletar o conteudo atual antes de abrir
    //trunc = truncate, abre para escrita e remove o conteudo atual antes de abrir


    if(arquivo.is_open()) {//verifica se o arquivo esta aberto
        arquivo << "Curso de C++" << endl << "Biblioteca fstream" << endl;
    } else {
        cout << "Curso nao esta aberto" << endl;
    }

    arquivo.close();
    cout << endl;

    /////////////////////////////////////////////////////////////////////

    arquivo.open("cfbcursos.txt",fstream::in);
    if(arquivo.is_open()) {
        while(getline(arquivo,linha)) {
            cout << linha << endl;
        }
    } else {
        cout << "Arquivo nao esta aberto" << endl;
    }

    arquivo.close();
    cout << endl;
    */

    /*
    //write = escreve no arquivo

    arquivo.open("cfbcursos.txt",fstream::out|fstream::app);
    if(arquivo.is_open()) {
        arquivo.write("\nwww.youtube.com/cfbcursos\n",26);
    } else {
        cout << "Arquivo nao esta aberto" << endl;
    }

    arquivo.close();
    cout << endl;

    arquivo.open("cfbcursos.txt",fstream::in);

    while(getline(arquivo,linha)) {
        cout << linha << endl;
    }

    arquivo.close();
    cout << endl;

    //read = le o arquivo

    arquivo.open("cfbcursos.txt",fstream::in);
    arquivo.read(linha_b,255);
    cout << linha_b << endl;
    arquivo.close();
    cout << endl;
    */

    /*
    //tellp = retorna a posição do ponteiro dentro do stream
    //seekp = define a posição do ponteiro dentro do stream

    long pos;
    arquivo.open("cfbcursos.txt",fstream::out);
    arquivo.write("CFB Aula",9);
    pos=arquivo.tellp();//posição 9
    cout << pos << endl;
    arquivo.seekp(pos-5);
    pos=arquivo.tellp();//posição 4
    cout << pos << endl;
    arquivo.write("Cursos",6);
    arquivo.close();
    cout << endl;
    */

    //beg, cur, end = constantes para definir a posição no stream

    long pos2;
    arquivo.open("cfbcursos.txt",fstream::out);
    arquivo.write("CFB Aula",9);
    pos2=arquivo.tellp();
    arquivo.seekp(arquivo.beg+4);
    pos2=arquivo.tellp();
    arquivo.write("Cursos",6);
    arquivo.close();
    cout << endl;


	return 0;
}
