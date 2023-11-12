#include <iostream> //Incluimos la libreria de entrada y salida de datos
using namespace std; //Para omitir el std::

int main(){
    //Declaramos la variable donde se realizarab las operaciones
    int operaciones=0;
    //Variable donde estara el resultado
    string resultado="";
    //La cadena a revisar
    string cadena= "&###@&*&###@@##@##&######@@#####@#@#@#@##@@@@@@@@@@@@@@@*&&@@@@@@@@@####@@@@@@@@@#########&#&##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@&";
    //Un for por la longitud de la cadena a revisar
    for (int i=0; i<cadena.size(); i++){
        //Un switch dependiendo del simbolo
        switch(cadena[i]){
            case '#': //Aumenta si es #
            operaciones++;
            break;
            case '@': //Decrementa si es @
            operaciones--;
            break;
            case '*': //Se multiplica por si mismo
            operaciones*=operaciones;
            break;
            case '&': //Añado al resultado el valor de la operacion actual
            resultado+=to_string(operaciones);
            break;
        }
    }
    //Una vez termina el for mostramos en pantalla el resultado
    cout<<resultado;
    return 0;
}