/*Evolución de C, C es muy viejo, pero comparten características
Archivos CPP y archivos H. Cpp = para códigos. H = encabezados los h se comparten los códigos.
Los compiladores no funcionan igual en todos lados (linux,mac,windows,versiones de visual studio)
Compilador nos ayuda a convertir el código en lenguaje de programación
Arm vs x86, para que chip trabajemos a que compilador vamos a trabajar, que traduce nuetro códico a acciones del chip. No comprar compus con chips ARM porque son muy chafas de bajo rendimiento.
Cuando falla es un error en referencias y el #include no existe donde este nos da los obj's
El linker junta todos los obj's para crear nuetro ejecutable si el linker da error es porque un obj esta mal.*/

#include <iostream> // iostream es una libreria que nos sirve para inprimir en consola
using namespace std; // Muy funcional para no escribir std :: cout

string PlayerName;
enum Fields {WRD, HINT, NUM_FIELDS}; // num_field solo cuenta cuantos elementos hay. Se cuentan de 0,1,2,3 los que están dentro de {}
string wordsHint[3][NUM_FIELDS] // 3 porque solo hay tres palabras si quieres más tendras que cambiarlo
{
    {"Mouse","its a small animal"},
    {"Monkey","Similar a human" },
    {"Wolf","Dangerouse animal that eat meat" }
};

int main()
{
    cout << "Hello World!\n"; //cout <<= mandar o el print
    cin >> PlayerName;// cin >> = recibir
    cout << "hi " << PlayerName << endl;
    string guess = ""; // = "" solo para que el jugador pueda escribir
    int score = 0;
    
    while (guess != "end game")
    {
        srand(static_cast <unsigned int> (time(0))); // unsigned int es un núm. sin valor que sean solo núm. positivos sin núm. negativos. static_cast = obliga al núm. a no ser decimal y que solo sea entero, lo castea. para mostrarlo como entero y no como decimal o como quiera ponerse. El time(0) es para que no se repita la aletoriedad en el mismo lapso de tiempo, o se que cuando se inicie, siempre cambie y no sea lo mismo.
        int value = (rand() % 3);
        string wrd = wordsHint[value][WRD];
        string hint = wordsHint[value][HINT];
        string s = wrd;
        int lenght = (int)s.size(); //(int) es como el static_cast para que actue como yo quiero. y el lenght = s.size es para contar cuantas letras tiene la palabra
       

        for (int i = 0; i < lenght; i++)
        {
            int a = (rand() % lenght);
            int b = (rand() % lenght);
            
            char tmp = s[a]; // un dato guardado sin uso a un punto en este caso a vierte en el
            s[a] = s[b]; //cambio de dato b a a
            s[b] = tmp;// b recibe el que se guardo para que ninguno se mezcle
         
        
        }

        while (guess != wrd)
        {
            cout << s << endl;
            cin >> guess;
        if (guess == "hint")
        {
            cout << hint << endl;
          
           
        }
        else if (guess != wrd)
        {
            cout << "not the word" << endl;
           
        }

        }
        guess = "";
        score++;
        cout << "You guessed it" << " Score: " << score << endl;
        
           
        

        
        
    }
    //bool staticword = true;
    //while (guess != "end game")
    //{
    //    srand(static_cast <unsigned int> (time(0))); // unsigned int es un núm. sin valor que sean solo núm. positivos sin núm. negativos. static_cast = obliga al núm. a no ser decimal y que solo sea entero, lo castea. para mostrarlo como entero y no como decimal o como quiera ponerse.
    //    int value = (rand() % 3);
    //    string wrd = wordsHint[value][WRD];
    //    string hint = wordsHint[value][HINT];
    //    string s = wrd;
    //    int lenght = (int)s.size(); //(int) es como el static_cast para que actue como yo quiero.
    //    if (staticword == true)
    //    {

    //    for (int i = 0; i < lenght; i++)
    //    {
    //        int a = (rand() % lenght);
    //        int b = (rand() % lenght);
    //        
    //        char tmp = s[a];
    //        s[a] = s[b];
    //        s[b] = tmp;
    //    cout << s << endl;
    //    staticword = false;
    //    }

    //    }
    //    while (staticword == false)
    //    {
    //    cin >> guess;
    //    if (guess == "hint")
    //    {
    //        cout << hint << endl;
    //        cout << s << endl;
    //        staticword = false;
    //    }
    //    else if (guess == wrd)
    //    {
    //        score++;
    //        cout << "You guessed it" << " Score: " << score << endl;
    //        staticword = true;
    //    }
    //    else
    //    {
    //        cout << "not the word" << endl;
    //        cout << s << endl;
    //    }

    //    }
    //    
    //}
}


