#include <iostream> //Incluimos libreria entrada y salida de datos
#include <vector> //Incluimos clase vector para facilicitar el uso de vectores dinamicos
using namespace std; //Omitimos el std::

int main(){
    //Una condicion que cambiara a true si la palabra ya esta
    bool encontrado=false;
    //Un vector donde se guardaran las palabras en el orden que van saliendo sin repetirse
    vector<string> encontradasP;
    //Un vector que sera paralelo al vector de palabras encontradas
    //Y se almacenara la cantidad de palabras encontradas
    vector<int> cantEncontradas;
    //Vector con las palabras a procesar
    vector<string> palabras= {"murcielago","leon","jirafa","cebra","elefante","rinoceronte","hipopotamo","ardilla","mapache","zorro","lobo","oso","puma","jaguar","tigre","leopardo","gato","perro","caballo","vaca","toro","cerdo","oveja","cabra","gallina","pato","ganso","pavo","paloma","halcon","aguila","buho","colibri","canario","loro","tucan","pinguino","flamenco","tigre","jaguar","leopardo","oso","lobo","zorro","mapache","ardilla","elefante","rinoceronte","hipopotamo","cebra","jirafa","leon","murcielago","cabra","oveja","cerdo","toro","vaca","caballo","perro","gato","leopardo","tigre","jaguar","oso","lobo","zorro","mapache","ardilla","hipopotamo","rinoceronte","elefante","jirafa","leon","murcielago","pavo","ganso","pato","gallina","cabra","oveja","cerdo","toro","vaca","caballo","perro","gato","leopardo","tigre","jaguar","oso","lobo","zorro","mapache","ardilla","hipopotamo","rinoceronte","elefante","jirafa","leon","murcielago","buho","aguila","halcon","paloma","pavo","ganso","pato","gallina","cabra","oveja","cerdo","toro","vaca","caballo","perro","gato","leopardo","tigre","jaguar","oso","lobo","zorro","mapache","ardilla","hipopotamo","rinoceronte","elefante","jirafa","leon","murcielago","colibri","buho","aguila","halcon","paloma","pavo","ganso","pato","gallina","cabra","oveja","cerdo","toro","vaca","caballo","perro","gato","leopardo","tigre","jaguar","oso","lobo","zorro","mapache","ardilla","hipopotamo","rinoceronte","elefante","jirafa","leon","murcielago","tucan","loro","canario","colibri","buho","aguila","halcon","paloma","pavo","ganso","pato","gallina","cabra","oveja","cerdo","toro","vaca","caballo","perro","gato","leopardo","tigre","jaguar","oso","lobo","zorro","mapache","ardilla","hipopotamo","rinoceronte","elefante","jirafa","leon","murcielago","flamenco","pinguino","tucan","loro","canario","colibri","buho","aguila","halcon","paloma","pavo","ganso","pato","gallina","cabra","oveja","cerdo","toro","vaca","caballo","perro","gato","leopardo","tigre","jaguar","oso","lobo","zorro","mapache","ardilla","hipopotamo","rinoceronte","elefante","jirafa","leon","murcielago","jaguar","oso","lobo","zorro","mapache","ardilla","cebra","elefante","rinoceronte","hipopotamo","leon","jirafa","murcielago","caballo","vaca","toro","cerdo","oveja","cabra","gallina","pato","ganso","pavo","paloma","halcon","aguila","buho","colibri","canario","loro","tucan","pinguino","flamenco","jaguar","oso","lobo","zorro","mapache","ardilla","cebra","elefante","rinoceronte","hipopotamo","leon","jirafa","murcielago","caballo","vaca","toro","cerdo","oveja","cabra","gallina","pato","ganso","pavo","paloma","halcon","aguila","buho","colibri","canario","loro","tucan","pinguino","flamenco","murcielago","leon","jirafa","cebra","elefante","rinoceronte","hipopotamo","ardilla","mapache","zorro","lobo","oso","puma","jaguar","tigre","leopardo","gato","perro","caballo","vaca","toro","cerdo","oveja","cabra","gallina","pato","ganso","pavo","paloma","halcon","aguila","buho","colibri","canario","loro","tucan","pinguino","flamenco","oso","lobo","zorro","mapache","ardilla","hipopotamo","rinoceronte","elefante","jirafa","leon","murcielago","cabra","oveja","cerdo","toro","vaca","caballo","perro","gato","leopardo","tigre","jaguar","oso","lobo","zorro","mapache","ardilla","cebra","elefante","rinoceronte","hipopotamo","jirafa","leon","murcielago","pavo","ganso","pato","gallina","cabra","oveja","cerdo","toro","vaca","caballo","perro","gato","buho","aguila","halcon","paloma","colibri","canario","loro","tucan","pinguino","flamenco","jaguar","oso","lobo","zorro","mapache","ardilla","hipopotamo","rinoceronte","elefante","jirafa","leon","murcielago","cabra","oveja","cerdo","toro","vaca","caballo","perro","gato","buho","aguila","halcon","paloma","colibri","canario","loro","tucan","pinguino","flamenco","jaguar","oso","lobo","zorro","mapache","ardilla","hipopotamo","rinoceronte","elefante","jirafa","leon","murcielago","cabra","oveja","cerdo","toro","vaca","caballo","perro","gato","buho","aguila","halcon"};
    //String auxiliar donde se guardara temporalmente la palabra del vector en la posicion que este
    string aux;
    //String que guardara el resultado
string respuesta="";
    
    //Un for que se repetira por la cantidad de palabras a procesar
    for(int i=0 ; i<palabras.size() ; i++){
        //Aux tendra la palabra de la posicion i del vector
        aux=palabras[i];
        
        //Convertimos la cadena a minuscula
        for(int j=0;j<aux.size();j++){
        aux[j]=tolower(aux[j]);
    }
    //Si es la primera posicion se ejecuta esto
        if(i==0){
            //Añadimos la palabra al vector de palabras encontradas
            encontradasP.push_back(aux);
            //Añadimos que aparecio 1 vez la palabra del vector de palabras encontradas en la posicion[0]
            cantEncontradas.push_back(1);
            //Hacemos encontrado true para omitir la revision
            encontrado=true;
            
        }else{ //Si no es la primera iteracion se ejecuta esto 
            
            //Un bucle por la cantidad de palabras encontradas
        for(int j=0; j<encontradasP.size();j++){
            //Si aux conincide con una palabra ya guardada se ejecuta
            if(aux==encontradasP[j]){
                encontrado=true;
                //Aumentamos el numero de veces que se encontro la palabra en el mismo indice ya que son pararelos esos vectores
                cantEncontradas[j]++;
                //Nos salimos del bucle
                break;
            }
        }
        }
        //Una vez termina la comprobacion verificamos si se ha encontradi la palabra
        if(!(encontrado)){ //Si no se encontro la palabra
        //Añadimos la palabra al vector de palabras encontradas
           encontradasP.push_back(aux);
           //Añadimos que se encontro una vez
           cantEncontradas.push_back(1);
        }
        //Hacemos encontrado false y se repite el proceso
        encontrado=false;
    }
    
    //Hacemos un bucle por la cantidad de palabras encontradas
    for(int i=0; i<encontradasP.size();i++){
        //Añadimos la palabra encontrada a la respuesta
        respuesta+=encontradasP[i];
        //Añadimos la cantidad de veces que aparecio la palabra
        respuesta+=to_string(cantEncontradas[i]);
    }
    //Mostramos en pantalla el resultado
    cout<<respuesta;
    return 0;
}