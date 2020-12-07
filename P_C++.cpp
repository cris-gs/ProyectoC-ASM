#include <iostream>
#include <cstdlib>
#include <string.h>
#include <cstring>
#include <sstream>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <unistd.h>
#include <math.h>

using namespace std;

/// Estas son las llamadas de todos los menus

//------------------------------------------
void menuHora();
void buscarReemplazar(string&, string, string, string );
//------------------------------------------
void menuSuma();
void menuResta();
void menuMultiplicacion();
void menuDivision();
void menuPotencia();
void menuFactorial();
void menuCalculadora();
//------------------------------------------
void menuAtras();
void menuSalir();
//------------------------------------------
void menuDecimalBinario();
void menuBinarioDecimal();
void menuDecimalComplemento();
void menuComplementoDecimal();
void menuDecimalIeee();
void menuIeeeDecimal();
void menuSistemasNumericos();
//------------------------------------------
void menuMetrosKilometros();
void menuMetrosMillas();
void menuMetrosPulgadas();
void menuMetrosPies();
void menuMetros();
//------------------------------------------
void menuKilometrosMetros();
void menuKilometrosMillas();
void menuKilometrosPulgadas();
void menuKilometrosPies();
void menuKilometros();
//------------------------------------------
void menuMillasMetros();
void menuMillasKilometros();
void menuMillasPulgadas();
void menuMillasPies();
void menuMillas();
//------------------------------------------
void menuPulgadasMetros();
void menuPulgadasKilometros();
void menuPulgadasMillas();
void menuPulgadasPies();
void menuPulgadas();
//------------------------------------------
void menuPiesMetros();
void menuPiesKilometros();
void menuPiessMillas();
void menuPiesPulgadas();
void menuPies();
//------------------------------------------
void menuLongitud();
//------------------------------------------
void menuGramosKilogramos();
void menuGramosLibras();
void menuGramos();
//------------------------------------------
void menuKilogramosGramos();
void menuKilogramosLibras();
void menuKilogramos();
//------------------------------------------
void menuLibrasGramos();
void menuLibrasKilogramos();
void menuLibras();
//------------------------------------------
void menuMasa();
//------------------------------------------
void menuColonesEuros();
void menuColonesDolares();
void menuColones();
//------------------------------------------
void menuEurosColones();
void menuEurosDolares();
void menuEuros();
//------------------------------------------
void menuDolaresEuros();
void menuDolaresColones();
void menuDolares();
//------------------------------------------
void menuMoneda();
//------------------------------------------
void menuCelsiusFahrenheit();
void menuCelsiusKelvin();
void menuCelsius();
//------------------------------------------
void menuFahrenheitCelsius();
void menuFahrenheitKelvin();
void menuFahrenheit();
//------------------------------------------
void menuKelvinFahrenheit();
void menuKelvinCelsius();
void menuKelvin();
//------------------------------------------
void menuTemperatura();
//------------------------------------------
float lectura(string tipoCambio);
void menuOpciones();
void menuPrincipal();

///----------------------------------------Menu principal------------------------------------------------///

void menuPrincipal(){
    menuOpciones();
}

///----------------------------------------Operaciones Aritmeticas------------------------------------------------///

void menuOpciones(){
  //Funcion para el muenu principal de opciones este muestra el listado de opciones disponibles cada una
  //con su indice correspondiente para que el usuario seleccione, y según lo digitado, se evalua en un switch y 
  //así llamar a la funcion correspondiente.
  system("clear");
  char x = 0;
  cout << endl <<"------->> Menu Principal <<-------" << endl;
  cout << endl <<"Opciones: ";
  cout << endl <<"1. HORA";
  cout << endl <<"2. OPERACIONES ARITMETICAS";
  cout << endl <<"3. SISTEMAS NUMERICOS";
  cout << endl <<"4. SISTEMAS DE LONGITUD";
  cout << endl <<"5. SISTEMAS DE MASA";
  cout << endl <<"6. TIPOS DE MONEDA";
  cout << endl <<"7. SISTEMAS DE TEMPERATURA";
  cout << endl <<"8. CERRAR PROGRAMA";
  cout << endl <<"Opcion: ";cin >> x;

  switch (x){
    case '1' : menuHora();
      break;
    case '2' : menuCalculadora();
      break;
    case '3' : menuSistemasNumericos();
      break;
    case '4' : menuLongitud();
      break;
    case '5' : menuMasa();
      break;
    case '6' : menuMoneda();
      break;
    case '7' : menuTemperatura();
      break;
    case '8' : menuSalir();
      break;
    default: menuOpciones();
      break;
  }
}

void menuCalculadora(){
  //Funcion para mostrar un sub menu con todas las opciones para realizar operaciones aritmeticas, cada una
  //con su indice correspondiente para que el usuario seleccione, y según lo digitado, se evalua en un switch y 
  //así llamar a la funcion correspondiente. 
  system("clear");
  char x = 0;
  cout << endl <<"------->> Operaciones aritmeticas <<-------" << endl;
  cout << endl <<"Opciones: ";
  cout << endl <<"1. SUMA";
  cout << endl <<"2. RESTA";
  cout << endl <<"3. MULTIPLICACION";
  cout << endl <<"4. DIVISION";  
  cout << endl <<"5. POTENCIA";
  cout << endl <<"6. FACTORIAL";
  cout << endl <<"7. VOLVER AL MENU PRINCIPAL";
  cout << endl <<"8. CERRAR PROGRAMA";
  cout << endl <<"Opcion: ";cin>>x;
  
    switch (x){
    case '1' : menuSuma();
      break;
    case '2' : menuResta();
      break;
    case '3' : menuMultiplicacion();
      break;
    case '4' : menuDivision();
      break;
    case '5' : menuPotencia();
      break;
    case '6' : menuFactorial();
      break;
    case '7' : menuOpciones();
      break;
    case '8' : menuSalir();
      break;
    default: menuCalculadora();
      break;
  }
}

void menuSistemasNumericos(){
  //Funcion para mostrar un sub menu con todas las opciones para realizar conversiones de sistemas numericos, cada una
  //con su indice correspondiente para que el usuario seleccione, y según lo digitado, se evalua en un switch y 
  //así llamar a la funcion correspondiente. 
  system("clear");
  char x = 0;
  cout << endl <<"------->> Sistemas numéricos <<-------" << endl;
  cout << endl <<"Opciones: ";
  cout << endl <<"1. DECIMAL A BINARIO";
  cout << endl <<"2. BINARIO A DECIMAL";
  cout << endl <<"3. DECIMAL COMPLEMENTO BASE DOS";
  cout << endl <<"4. COMPLEMENTO BASE DOS A DECIMAL";
  cout << endl <<"5. DECIMAL A IEEE 754";
  cout << endl <<"6. IEEE 754 A DECIMAL";
  cout << endl <<"7. VOLVER AL MENU PRINCIPAL";
  cout << endl <<"8. CERRAR PROGRAMA";
  cout << endl <<"Opcion: ";cin >> x;

  switch (x){
    case '1' : menuDecimalBinario();
      break;
    case '2' : menuBinarioDecimal();
      break;
    case '3' : menuDecimalComplemento();
      break;
    case '4' : menuComplementoDecimal();
      break;
    case '5' : menuDecimalIeee();
      break;
    case '6' : menuIeeeDecimal();
      break;
    case '7' : menuOpciones();
      break; 
    case '8' : menuSalir();
      break;
    default: menuSistemasNumericos();
    break;
  }
}

void menuLongitud(){
  //Funcion para mostrar un sub menu con todas las opciones para realizar conversiones en el sistemas de medida de longitud, cada una
  //con su indice correspondiente para que el usuario seleccione, y según lo digitado, se evalua en un switch y 
  //así llamar a la funcion correspondiente. 
  system("clear");
  char x = '0';
  cout << endl <<"------->> Longitud original <<-------" << endl;
  cout << endl <<"Opciones: ";
  cout << endl <<"1. METROS";
  cout << endl <<"2. KILOMETROS";
  cout << endl <<"3. MILLAS";
  cout << endl <<"4. PULGADAS";
  cout << endl <<"5. PIES";   
  cout << endl <<"6. VOLVER AL MENU PRINCIPAL";
  cout << endl <<"7. CERRAR PROGRAMA";
  cout << endl <<"Opcion: ";cin >> x;

  switch (x){
    case '1' : menuMetros();
      break;
    case '2' : menuKilometros();
      break;
    case '3' : menuMillas();
      break;
    case '4' : menuPulgadas();
      break;
    case '5' : menuPies();
      break;
    case '6' : menuOpciones();
      break;
    case '7' : menuSalir();
      break;  
    default: menuLongitud();
      break;
  }
}

void menuMasa(){
  //Funcion para mostrar un sub menu con todas las opciones para realizar conversiones en el sistemas de medida de peso, cada una
  //con su indice correspondiente para que el usuario seleccione, y según lo digitado, se evalua en un switch y 
  //así llamar a la funcion correspondiente. 
  system("clear");
  char x = '0';
  cout << endl <<"------->> Masa original <<-------" << endl;
  cout << endl <<"Opciones: ";
  cout << endl <<"1. GRAMOS";
  cout << endl <<"2. KILOGRAMOS";
  cout << endl <<"3. LIBRAS";   
  cout << endl <<"4. VOLVER AL MENU PRINCIPAL";
  cout << endl <<"5. CERRAR PROGRAMA";
  cout << endl <<"Opcion: ";cin >> x;

  switch (x){
    case '1' : menuGramos();
      break;
    case '2' : menuKilogramos();
      break;
    case '3' : menuLibras();
      break;
    case '4' : menuOpciones();
      break;
    case '5' : menuSalir();
      break;  
    default: menuMasa();
      break;
  }
}

void menuMoneda(){
  //Funcion para mostrar un sub menu con todas las opciones para realizar conversiones en el sistemas de moneda, cada una
  //con su indice correspondiente para que el usuario seleccione, y según lo digitado, se evalua en un switch y 
  //así llamar a la funcion correspondiente. 
  system("clear");
  char x = '0';
  cout << endl <<"------->> Moneda original <<-------" << endl;
  cout << endl <<"Opciones: ";
  cout << endl <<"1. COLONES";
  cout << endl <<"2. EUROS";
  cout << endl <<"3. DOLARES";   
  cout << endl <<"4. VOLVER AL MENU PRINCIPAL";
  cout << endl <<"5. CERRAR PROGRAMA";
  cout << endl <<"Opcion: ";cin >> x;

  switch (x){
    case '1' : menuColones();
      break;
    case '2' : menuEuros();
      break;
    case '3' : menuDolares();
      break;
    case '4' : menuOpciones();
      break;
    case '5' : menuSalir();
      break;  
    default: menuMoneda();
      break;
  }
}

void menuTemperatura(){
  //Funcion para mostrar un sub menu con todas las opciones para realizar conversiones en el sistemas de medida de temperatura, cada una
  //con su indice correspondiente para que el usuario seleccione, y según lo digitado, se evalua en un switch y 
  //así llamar a la funcion correspondiente. 
  system("clear");
  char x = '0';
  cout << endl <<"------->> Temperatura original <<-------" << endl;
  cout << endl <<"Opciones: ";
  cout << endl <<"1. CELSIUS";
  cout << endl <<"2. FAHRENHEIT";
  cout << endl <<"3. KELVIN";   
  cout << endl <<"4. VOLVER AL MENU PRINCIPAL";
  cout << endl <<"5. CERRAR PROGRAMA";
  cout << endl <<"Opcion: ";cin >> x;

  switch (x){
    case '1' : menuCelsius();
      break;
    case '2' : menuFahrenheit();
      break;
    case '3' : menuKelvin();
      break;
    case '4' : menuOpciones();
      break;
    case '5' : menuSalir();
      break;  
    default: menuTemperatura();
      break;
  }
}

void buscarReemplazar(string& frase, string buscar, string rempl ){
  //Funcion al cual se le asigna una palabra o frase en la cual se deba de reemplazar un string por otro, por este 
  //motivo recibe ademas de lo anteriormente mencionado, el string a reemplazar y el string que lo reemplaza. 
  int pos = frase.find(buscar);
  while (pos != -1){
    frase.replace(pos, buscar.size(), rempl);
    pos = frase.find(buscar, pos + rempl.size());
  }   
  
}

void menuHora(){
  //Funcion que lee una archivo txt previamente cargado por el lenguaje ensamblador X8086, de este archivo
  //se obtiene la hora actual, y la muestra en consola.
  char x = '1';
  char cadena[128];
  while(x == '1'){
    ifstream fe("D:/archivos del programa/emu8086/vdrive/E/test/prueba.txt");
    fe.getline(cadena, 128);
    string cadenaStr = cadena;
    cadenaStr.pop_back();
    buscarReemplazar(cadenaStr, "$", ":" );
    cout<<"\n La hora es: "<<cadenaStr<<endl;
    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuOpciones();
}
//----------------------------------------------------------------------------------------------
void menuSuma(){
 //Funcion que recibe dos numeros digitados por el usuario ya sean enteros o flotantes para sumarlos por merdio de ensamblador at&t 
  //y mostrar el resultado al usuario
  char x = '1';

  while(x == '1'){
    system("clear");
    float suma = 0, numeros[100];
    int cantidadNumeros = 0;

    cout << endl <<"------->> Suma <<-------" << endl;

    cout << endl <<"Digite la cantidad de numeros que desea sumar: ";
    cin>>cantidadNumeros;

    cout << endl <<"Digite los "<<cantidadNumeros<<" numeros que desea sumar: ";
    for (int i = 0; i < cantidadNumeros; i++){
      cin>>numeros[i];
    }

    /// Realiza la suma directamente en el ensambldor
    /// Suma el registro ax con el registro bx

    cout << endl <<"El resultado de la Suma: ";

    for (int i = 0; i < cantidadNumeros; i++){

      asm ( "fld %1;"
                "fld %2;"
                "faddp;"
                "fstp %0;" : "=m" (suma) : "m" (suma), "m" (numeros[i]) ) ;

      if(i == cantidadNumeros - 1){
        cout<<numeros[i]<<" = "<<suma;
      }
      else{
        cout<<numeros[i]<<" + ";
      }

    } 

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuCalculadora();
}

void menuResta(){
  //Funcion que recibe dos numeros digitados por el usuario ya sean enteros o flotantes para restarlos por merdio de ensamblador at&t 
  //y mostrar el resultado al usuario
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2, resta;

    cout << endl <<"------->> Resta <<-------" << endl;

    cout <<"Digite los dos numeros: ";cin >> num1>>num2;

    /// Realiza la Resta directamente en el ensambldor
    /// Resta el registro ax con el registro bx

    __asm__ ( "fld %2;"
              "fld %1;"
              "fsubp;"
              "fstp %0;" : "=m" (resta) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de la Resta: "<< num1 <<" - "<< num2 << " = "  <<resta;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuCalculadora();
}

void menuMultiplicacion(){
  //Funcion que recibe dos numeros digitados por el usuario ya sean enteros o flotantes para multiplicarlos por merdio de ensamblador at&t 
  //y mostrar el resultado al usuario
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2, mul;

    cout << endl <<"------->> Multiplicacion <<-------" << endl;

    cout <<"Digite los dos numeros: ";cin >> num1>>num2;

    /// Realiza la multiplicacion directamente en el ensambldor
    /// Multiplica el registro ax con el registro bx

    __asm__ ( "fld %1;"
              "fld %2;"
              "fmulp;"
              "fstp %0;" : "=m" (mul) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de la Multiplicacion: "<< num1 <<" * "<< num2 << " = "  <<mul;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuCalculadora();
}

void menuDivision(){
  //Funcion que recibe dos numeros digitados por el usuario ya sean enteros o flotantes para dividiarlos por merdio de ensamblador at&t 
  //y mostrar el resultado al usuario
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2, cociente;

    cout << endl <<"------->> Division <<-------"<< endl;

    cout <<"Digite los dos numeros: ";cin >> num1>>num2;

    /// Realiza la division en el ensamblador

    __asm__ ( "fld %2;"
              "fld %1;"
              "fdivp;"
              "fstp %0;" : "=m" (cociente) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de la division: "<< num1 <<" / "<< num2 << " = "  <<cociente;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuCalculadora();
}

void menuPotencia(){
  //Funcion que recibe el numero que el usuario desea elevar y su respectiva portencia, estos digitados por el usuario,
  //ya sean enteros o flotantes. Este por medio de unciclo for de c++ en el cual se repetira una multiplicacion en ensamblador at&t,
  //esto se realizara la cantidad de veces que se haya digitado en el exponente, y así mostrar el resultado al usuario.
  char x = '1';
  while(x == '1'){
     system("clear");
    float num1, num2, pow = 1;

    cout << endl <<"------->> Potencia <<-------" << endl;

    cout <<"Digite el numero y su exponente: ";cin >> num1>>num2;

    for (int i = num2; i > 0; i--){
      asm ( "fld %1;"
            "fld %2;"
            "fmulp;"
            "fstp %0;" : "=m" (pow) : "m" (pow), "m" (num1) ) ;
    }

    cout << endl <<"El resultado de la Potencia: "<< num1 <<" ^ "<< num2 << " = "  <<pow;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuCalculadora();
}

void menuFactorial(){
  //Funcion en el cual se recibe un numero entero digitado con un usaruario, este realiza un ciclo con etiquetas en ensamblador at&t
  //el cual va ir multiplicando todos los numero hasta llegar al numero digitado.
  char x = '1';
  while(x == '1'){
    system("c.ear");
    int num1, r = 1, factorial = 0, respaldo = 0;

    cout << endl <<"------->> Factorial <<-------" << endl;

    cout << endl <<"Digite el numero: ";
    cin >> num1;

    respaldo = num1;

    asm ( "movl %1, %%eax;"
          "movl %2, %%ebx;"
          "movl %%ebx, %3;"
          "loop: cmpl $1, %3;"
          "je factorial;"
          "imull %3, %%eax;"
          "decl %3;"
          "jmp loop;"
          "factorial: movl %%eax, %0;" : "=m" (factorial) : "m" (r), "m" (num1), "m" (num1)
    );

    cout << endl <<"El resultado del Factorial: "<< respaldo <<"!"<< " = "  <<factorial;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuCalculadora();
}
//----------------------------------------------------------------------------------------------
void menuDecimalBinario(){
  //Funcion que recibe un numero decimal entero digitado por el usuario, el cual se le aplica un ciclo de divisiones
  //entre dos para ir guardando el residuo de esta en la pila y posterirormente exterse y mostrar el numero
  //convertido a decimal
  char x = '1';
  while(x == '1'){
    system("clear");
    int arg1, arg2 = 2, cont = 0;
    int resultado = 0;

    cout << endl <<"------->> Decimal a Binario <<-------" << endl;

    cout << endl <<"Digite el numero: ";
    cin >> arg1;

     asm ( "movl $0x0, %%edx;"
              "movl %1, %%eax;"
              "movl %2, %%ebx;"
              "movl %3, %%ecx;"
              "meter: cmpl $0, %%eax;"
              "je variable;"
              "movl $0x0, %%edx;"
              "idivl %%ebx;"
              "pushq %%rdx;"
              "incl %%ecx;"
              "jmp meter;"
              "variable: movl %0, %%ebx;"
              "sacar: cmpl $0, %%ecx;"
              "je binario;"
              "imull $10, %%ebx;"
              "popq %%rax;"
              "addl %%eax, %%ebx;"
              "decl %%ecx;"
              "jmp sacar;"
              "binario: movl %%ebx, %0" : "=m" (resultado): "g" (arg1), "g" (arg2), "g" (cont));
              
    cout << endl <<"El resultado de Decimal a Binario: "<<resultado;

  }
  menuSistemasNumericos();
}

void menuBinarioDecimal(){
  //Funcion que recibe un numero binario entero digitado por el usuario, el cual se le aplica un ciclo de divisiones entre 10 para 
  //así de esta forma podemos extraer digito por digito de derecha izquierda de este numero digitado, este numero extraido se le aplica 
  //la potencia segun la posicion en la que se encuentre, estos resultados se van sumando en una variable para así tener el resultado total del 
  //numero convertido a decimal.
  char x = '1';
  while(x == '1'){
    system("clear");
    int arg1, arg2 = 10, cont = -1;
    int resultado = 0;

    cout << endl <<"------->> Binario a Decimal <<-------" << endl;

    cout << endl <<"Digite un numero binario: ";
    cin >> arg1;

    cout<<arg1;

asm ( "movl $0x0, %%edx;"
              "movl $0x0, %%ecx;"
              "movl %1, %%eax;"
              "movl %0, %%ebx;"
              "dividir: addl %%ecx, %%ebx;"
              "cmpl $0, %%eax;"
              "je decimal;"
              "movl $0x0, %%edx;"
              "idivl %2;"
              "incl %3;"
              "movl $0x0, %%ecx;"
              "cmpl $0, %%edx;"
              "je dividir;"
              "cmpl $0, %3;"
              "je sumar;"
              "movl %3, %%edx;"
              "movl $1, %%ecx;"
              "ciclo: cmpl $0, %%edx;"
              "je dividir;"
              "imull $2, %%ecx;"
              "decl %%edx;"
              "jmp ciclo;"
              "sumar: addl $1, %%ebx;"
              "jmp dividir;"
              "decimal: movl %%ebx, %0" : "=m" (resultado): "g" (arg1), "g" (arg2), "g" (cont));

    cout << endl <<"El resultado de Binario a Decimal: "<<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuSistemasNumericos();
}

void menuDecimalComplemento(){
  //Funcion que recibe un numero decimal entero digitado por el usuario, este es evaluado para saber si es positivo o negativo, si este es negativo se mutiplica por -1 
  //y se le resta 1, no obstante si es posittivo se entra al else y se le resta uno. Seguidamente sin importar a cual condicion haya entrado este se convierte a binario 
  //por medio de un ciclo de division extrayendo los residuos y guardandolos en la pila. se crea una variable resultado a la que se le agregan unos 
  //para completar la cantidad de digitos que hagan falta para llegar a los 8 bits. Luegoal sacar los datos de la pila se invierten los
  //unos por ceros y los ceros por unos, y cada que se invierte uno de estos numeros, es concatenadoa la variable resultado.
  char x = '1';
  while(x == '1'){
    system("clear");
    int arg1, arg2 = 2, cont = 0, resultado = 0;

    cout << endl <<"------->> Decimal a complemento base dos <<-------" << endl;
    do{
      cout << endl <<"Digite un numero: ";
      cin >> arg1;
    } while (arg1 > 127 || arg1 < -127);

    if(arg1 < 0){
      __asm__ ( "movl $0x0, %%edx;"
                "movl %1, %%eax;"
                "movl %2, %%ebx;"
                "movl %3, %%ecx;"
                "imull $-1, %%eax;"
                "subl $1, %%eax;"
                "met: cmpl $0, %%eax;"
                "je seguir;"
                "movl $0x0, %%edx;"
                "idivl %%ebx;"
                "pushq %%rdx;"
                "incl %%ecx;"
                "jmp met;"
                "seguir: cmpl $8, %%ecx;"
                "je var;"
                "movl $0, %%edx;"
                "pushq %%rdx;"
                "incl %%ecx;"
                "jmp seguir;"
                "var: movl %0, %%ebx;"
                "sac: cmpl $0, %%ecx;"
                "je complemento;"
                "imull $10, %%ebx;"
                "popq %%rax;"
                "cmpl $0, %%eax;"
                "je cambiar;"
                "movl $0, %%eax;"
                "addl %%eax, %%ebx;"
                "decl %%ecx;"
                "jmp sac;"
                "cambiar: movl $1, %%eax;"
                "addl %%eax, %%ebx;"
                "decl %%ecx;"
                "jmp sac;"
                "complemento: movl %%ebx, %0" : "=m" (resultado): "g" (arg1), "g" (arg2), "g" (cont));
    }
    else{
      __asm__ ( "movl $0x0, %%edx;"
                "movl %1, %%eax;"
                "movl %2, %%ebx;"
                "movl %3, %%ecx;"
                "meter2: cmpl $0, %%eax;"
                "je variable;"
                "movl $0x0, %%edx;"
                "idivl %%ebx;"
                "pushq %%rdx;"
                "incl %%ecx;"
                "jmp meter2;"
                "variable2: movl %0, %%ebx;"
                "sacar2: cmpl $0, %%ecx;"
                "je binario2;"
                "imull $10, %%ebx;"
                "popq %%rax;"
                "addl %%eax, %%ebx;"
                "decl %%ecx;"
                "jmp sacar2;"
                "binario2: movl %%ebx, %0" : "=m" (resultado): "g" (arg1), "g" (arg2), "g" (cont));
    }

    cout << endl <<"El resultado de Decimal a Complemento base dos: "<<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuSistemasNumericos();
}

void menuComplementoDecimal(){
  //Funcion que recibe un numero en complemento base 2 entero, este es evaluado para saber si es positivo o negativo, luego este numero se le extraen los digitos de 
  //derecha por izquierda estos numeros, se extrae la potencia de estos segun la posicion en la que esten, pero solo le realiza esto si el numero es un cero. Luego de cada 
  //potencia calculada, esta se suma a una variable llamada resultado. Al fina si el numero eentro al if se le multiplica por un -1, de lo comtrario no se realiza.
  char x = '1';
  while(x == '1'){
    system("clear");
    int arg1, arg2 = 10, cont = -1;
    int resultado = 0;

    cout << endl <<"------->> Complemento base dos a Decimal <<-------" << endl;

    do{
      cout << endl <<"Digite un numero en Complemento base dos y de no mas de 8bits: ";
      cin >> arg1;
    } while (arg1 > 11111111);

    /// Realiza la factorial directamente en el ensambldor
    /// Multiplica el registro ax con el registro bx

    if(arg1 >= 10000000){
      __asm__ ( "movl $0x0, %%edx;"
              "movl $0x0, %%ecx;"
              "movl %1, %%eax;"
              "movl %0, %%ebx;"
              "div: addl %%ecx, %%ebx;"
              "cmpl $0, %%eax;"
              "je falta;"
              "movl $0x0, %%edx;"
              "idivl %2;"
              "incl %3;"
              "movl $0x0, %%ecx;"
              "cmpl $1, %%edx;"
              "je div;"
              "cmpl $0, %3;"
              "je sum;"
              "movl %3, %%edx;"
              "movl $1, %%ecx;"
              "cic: cmpl $0, %%edx;"
              "je div;"
              "imull $2, %%ecx;"
              "decl %%edx;"
              "jmp cic;"
              "sum: addl $1, %%ebx;"
              "jmp div;"
              "falta: addl $1, %%ebx;"
              "imull $-1, %%ebx;"
              "dec: movl %%ebx, %0" : "=m" (resultado): "g" (arg1), "g" (arg2), "g" (cont));
    }
    else{
      __asm__ ( "movl $0x0, %%edx;"
                "movl $0x0, %%ecx;"
                "movl %1, %%eax;"
                "movl %0, %%ebx;"
                "dividir2: addl %%ecx, %%ebx;"
                "cmpl $0, %%eax;"
                "je decimal2;"
                "movl $0x0, %%edx;"
                "idivl %2;"
                "incl %3;"
                "movl $0x0, %%ecx;"
                "cmpl $0, %%edx;"
                "je dividir2;"
                "cmpl $0, %3;"
                "je sumar2;"
                "movl %3, %%edx;"
                "movl $1, %%ecx;"
                "ciclo2: cmpl $0, %%edx;"
                "je dividir2;"
                "imull $2, %%ecx;"
                "decl %%edx;"
                "jmp ciclo2;"
                "sumar2: addl $1, %%ebx;"
                "jmp dividir2;"
                "decimal2: movl %%ebx, %0" : "=m" (resultado): "g" (arg1), "g" (arg2), "g" (cont));
      }

    cout << endl <<"El resultado de Complemento base dos a Decimal: "<<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuSistemasNumericos();
}
  
void menuDecimalIeee(){
  /* Funcion que recibe un numero decimal entero digitado por el usuario, este verifica si el numero es negativo le asigna un 1 al signo 
  y si es positivo le asigna un 0. Posteriormente separa la parte entera de la parte decimal y lo guarda en variables diferentes, la parte 
  entera la pasa a binario y la parte decimal la pasa binario hasta que de cero o hasta que los digitos lleguen a ser 23 contando los digitos 
  de la parte entera pasada a binario y en caso de que llegue a ser cero sin tener los 23 digitos los completa con cero los digitos que falta. 
  Después junta las dos partes binarias tanto la entera como la decimal y se corre la coma hasta que quede solo un 1 en la parte entera si se 
  corre hacia izquierda se suman cuentas veces se correo a 127 y se corre hacia la derecha se restan y ese seria el exponente que luego se tiene 
  que pasar a binario y la mantisa seria  el numero que quedo corrido sin el 1. Por último se muestra al usuario el signo, el exponente y la mantisa */
  char x = '1';
  while(x == '1'){
    system("clear");
    float arg1, decimal = 0, arg3 = 2;
    int arg2 = 2, contEntera = 0, signo = 0, entera = 0, contadorEntera = 0, respaldoEntera = 0, paso = 0, exponente = 0, resultadoExponente = 0;
    int resultadoEntera = 0;
    string mantisa = "", resultadoDecimal = "";

    cout << endl <<"------->> Decimal a IEEE 754 <<-------" << endl;

    cout << endl <<"Digite el numero: ";
    cin >> arg1;
   
    if(arg1 < 0){
      signo = 1;
    }

    arg1 = abs(arg1); 

    entera = arg1;
    decimal = arg1 - entera;        

    /// Realiza la factorial directamente en el ensambldor
    /// Multiplica el registro ax con el registro bx

    while(entera > 0){
      resultadoEntera = 0;

      __asm__ ( "movl $0x0, %%edx;"
                "movl %1, %%eax;"
                "movl %2, %%ebx;"
                "movl %3, %%ecx;"
                "meter3: cmpl $0, %%eax;"
                "je variable3;"
                "cmpl $10, %%ecx;"
                "je variable3;"
                "movl $0x0, %%edx;"
                "idivl %%ebx;"
                "pushq %%rdx;"
                "incl %%ecx;"
                "jmp meter3;"
                "variable3: movl %0, %%ebx;"
                "sacar3: cmpl $0, %%ecx;"
                "je binario3;"
                "imull $10, %%ebx;"
                "popq %%rax;"
                "addl %%eax, %%ebx;"
                "decl %%ecx;"
                "jmp sacar3;"
                "binario3: movl %%ebx, %0" : "=m" (resultadoEntera): "g" (entera), "g" (arg2), "g" (contEntera));

      respaldoEntera = resultadoEntera;

      while(respaldoEntera != 0){
          mantisa = to_string((respaldoEntera % 10)) + mantisa;
          respaldoEntera = respaldoEntera / 10;
          entera = entera / arg2;
          contadorEntera++;
      } 
    }

    if(arg1 > 1){
      mantisa = mantisa.substr(1);
      contadorEntera--;
    }

    for (int i = 0; i < 23 - contadorEntera; i++){
      asm ( "fld %1;"
            "fld %2;"
            "fmulp;"
            "fstp %0;" : "=m" (decimal) : "m" (decimal), "m" (arg3) ) ;

      paso = decimal;
      resultadoDecimal += to_string(paso);

      if (decimal >= 1){
        decimal -= 1;
      }

    }

    mantisa += resultadoDecimal;

    if(resultadoEntera == 0){
      size_t found = mantisa.find("1"); 
      mantisa = mantisa.substr(found+1);
      cout<<mantisa<<endl;
      exponente = 127 - (found + 1);
      contadorEntera = found + 1;
      while(contadorEntera != 0){
        mantisa = mantisa + "0";
        contadorEntera--;
      }
    }
    else{
      exponente = 127 + contadorEntera;
    }

    __asm__ ( "movl $0x0, %%edx;"
              "movl %1, %%eax;"
              "movl %2, %%ebx;"
              "movl %3, %%ecx;"
              "meter4: cmpl $0, %%eax;"
              "je variable4;"
              "movl $0x0, %%edx;"
              "idivl %%ebx;"
              "pushq %%rdx;"
              "incl %%ecx;"
              "jmp meter4;"
              "variable4: movl %0, %%ebx;"
              "sacar4: cmpl $0, %%ecx;"
              "je binario4;"
              "imull $10, %%ebx;"
              "popq %%rax;"
              "addl %%eax, %%ebx;"
              "decl %%ecx;"
              "jmp sacar4;"
              "binario4: movl %%ebx, %0" : "=m" (resultadoExponente): "g" (exponente), "g" (arg2), "g" (contEntera));
    
    if(resultadoExponente < 10000000){
      cout << endl <<"El resultado de Decimal a IEEE 754: "<<signo<<" 0"<<resultadoExponente<<" "<<mantisa;
    }
    else{
      cout << endl <<"El resultado de Decimal a IEEE 754: "<<signo<<" "<<resultadoExponente<<" "<<mantisa;
    }

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuSistemasNumericos();
}

void menuIeeeDecimal(){
  /* Funcion que recibe el signo, el exponente y la mantisa digitados por el usuario. Posteriormente evalua que el numero en IEEE 754 no sea 
  un caso especial, en el caso de serlo le diria al usuario cual es el resultado de ese caso especial y no serlo entonces pasaria el exponente 
  a binario a decimal y luego pasaria la mantisa de binario a decimal evaluando solo los 1 y dependiendo los elevaria 2 a la posicion en que esta 
  en la mantisa en negativo y los hiria sumando. Despues se elevaria 2 a la resta de resultado del exponente menos 127 y se le suma 1 al resultado 
  de la mantisa y luego se multiplica ambos resultado. Al final dependiendo si el signo es 1 se multiplica por -1 y sino se deja igual. Por ultimo se 
  muestra el numero decimal que dio como resultado final*/
  char x = '1';
  while(x == '1'){
    system("clear");
    int factor = 10, contExponente = -1, signo = 0, exponente = 0, resultadoExponente = 0, contPosicion = -1, potencia = 0;
    float resultadoMantisa = 0, resultado = 0, sumando = 1, potenciaFlotante = 0;
    string mantisa, especial;
    bool normal = false;

    cout << endl <<"------->> IEEE 754 a Decimal <<-------" << endl;

    cout << endl <<"Digite el signo: ";
    cin >> signo; 

    cout << endl <<"Digite el exponente: ";
    cin >> exponente; 

    cout << endl <<"Digite la mantisa: ";
    cin >> mantisa;    

    /// Realiza la factorial directamente en el ensambldor
    /// Multiplica el registro ax con el registro bx

    if(exponente == 0 && mantisa == "00000000000000000000000"){
      if(signo == 0){
        especial = "+0";
      }
      else{
        especial = "-0";
      }
    }
    else if(exponente == 11111111 && mantisa == "00000000000000000000000"){
      if(signo == 0){
        especial = "+Infinito";
      }
      else{
        especial = "-Infinito";
      }
    }
    else if(exponente == 0 && mantisa != "00000000000000000000000"){
      especial = "subnormal";
    }
    else if(exponente == 11111111 && mantisa != "00000000000000000000000"){
      if(signo == 0){
        especial = "QNaN";
      }
      else{
        especial = "SNaN";
      }
    }
    else{
      __asm__ ( "movl $0x0, %%edx;"
                "movl $0x0, %%ecx;"
                "movl %1, %%eax;"
                "movl %0, %%ebx;"
                "dividir4: addl %%ecx, %%ebx;"
                "cmpl $0, %%eax;"
                "je decimal4;"
                "movl $0x0, %%edx;"
                "idivl %2;"
                "incl %3;"
                "movl $0x0, %%ecx;"
                "cmpl $0, %%edx;"
                "je dividir4;"
                "cmpl $0, %3;"
                "je sumar4;"
                "movl %3, %%edx;"
                "movl $1, %%ecx;"
                "ciclo4: cmpl $0, %%edx;"
                "je dividir4;"
                "imull $2, %%ecx;"
                "decl %%edx;"
                "jmp ciclo4;"
                "sumar4: addl $1, %%ebx;"
                "jmp dividir4;"
                "decimal4: movl %%ebx, %0" : "=m" (resultadoExponente): "g" (exponente), "g" (factor), "g" (contExponente));

      for (int i = 0; i < 23; i++){
        if(mantisa[i] == '1'){
          resultadoMantisa += pow(2, contPosicion);
        }
        contPosicion--;
      }

      asm ( "movl %1, %%eax;"
            "movl $1, %%ebx;"
            "subl $127, %%eax;"
            "potencia: cmpl $0, %%eax;"
            "je final;"
            "imull $2, %%ebx;"
            "decl %%eax;"
            "jmp potencia;"
            "final: movl %%ebx, %0" : "=m" (potencia) : "g" (resultadoExponente) ) ;

      potenciaFlotante = potencia;

      asm ( "fld %3;"
            "fld %2;"
            "fld %1;"
            "faddp;"
            "fmulp;"
            "fstp %0;" : "=m" (resultado) : "m" (sumando), "m" (resultadoMantisa), "m" (potenciaFlotante) ) ;

      if(signo == 1){
        resultado *= -1;
      }
      normal = true;
    }

    if(normal == true){
      cout << endl <<"El resultado de IEEE 754 a Decimal: "<<resultado;
    }
    else{
      cout << endl <<"El resultado de IEEE 754 a Decimal: "<<especial;
    }
    

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuSistemasNumericos();
}
//----------------------------------------------------------------------------------------------

void menuMetrosKilometros(){
  //Funcion que recibe un numero flotante el cual se encuentra en metros y necesita se convertido a kilometros, este numero es dividido entre mil
  // y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 1000, resultado;

    cout << endl <<"------->> Metros a Kilometros <<-------";

    cout << endl <<"Digite la cantidad de metros: ";
    cin >> num1;

    /// Realiza la division en el ensamblador

    __asm__ ( "fld %2;"
              "fld %1;"
              "fdivp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de metros a kilometros es: "<< num1 <<" / "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuMetros();
}

void menuMetrosMillas(){
  //Funcion que recibe un numero flotante el cual se encuentra en metros y necesita se convertido a millas, este numero es dividido entre 1609
  // y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 1609, resultado;

    cout << endl <<"------->> Metros a Millas <<-------";

    cout << endl <<"Digite la cantidad de metros: ";
    cin >> num1;

    /// Realiza la division en el ensamblador

    __asm__ ( "fld %2;"
              "fld %1;"
              "fdivp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de metros a millas es: "<< num1 <<" / "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuMetros();
}

void menuMetrosPulgadas(){
  //Funcion que recibe un numero flotante el cual se encuentra en metros y necesita se convertido a pulgadas, este numero es multiplicado por 39.37
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 39.37, resultado;

    cout << endl <<"------->> Metros a Pulgadas <<-------";

    cout << endl <<"Digite la cantidad de metros: ";
    cin >> num1;

    /// Realiza la multiplicacion en el ensamblador

    __asm__ ( "fld %2;"
              "fld %1;"
              "fmulp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de metros a pulgadas es: "<< num1 <<" * "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuMetros();
}

void menuMetrosPies(){
  //Funcion que recibe un numero flotante el cual se encuentra en metros y necesita se convertido a pies, este numero es multiplicado por 3.281
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 3.281, resultado;

    cout << endl <<"------->> Metros a Pies <<-------";

    cout << endl <<"Digite la cantidad de metros: ";
    cin >> num1;

    /// Realiza la multiplicacion en el ensamblador

    __asm__ ( "fld %2;"
              "fld %1;"
              "fmulp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de metros a pies es: "<< num1 <<" * "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuMetros();
}

void menuMetros(){
  //Funcion para mostrar un sub menu con todas las opciones para realizar conversiones de metros a otros sistemas de medida, cada una
  //con su indice correspondiente para que el usuario seleccione, y según lo digitado, se evalua en un switch y 
  //así llamar a la funcion correspondiente. 
  system("clear");
  char x = '0';
  cout << endl <<"------->> Metros a<<-------" << endl;
  cout << endl <<"Opciones: ";
  cout << endl <<"1. KILOMETROS";
  cout << endl <<"2. MILLAS";
  cout << endl <<"3. PULGADAS";
  cout << endl <<"4. PIES";   
  cout << endl <<"5. VOLVER AL MENU PRINCIPAL";
  cout << endl <<"6. CERRAR PROGRAMA";
  cout << endl <<"Opcion: ";
  cin >> x;

  switch (x){
    case '1' : menuMetrosKilometros();
      break;
    case '2' : menuMetrosMillas();
      break;
    case '3' : menuMetrosPulgadas();
      break;
    case '4' : menuMetrosPies();
      break;
    case '5' : menuOpciones();
      break;
    case '6' : menuSalir();
      break;
    default: menuMetros();
      break;
  }
}

void menuKilometrosMetros(){
  //Funcion que recibe un numero flotante el cual se encuentra en kilometros y necesita se convertido a metros, este numero es multiplicado por 1000
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 1000, resultado;

    cout << endl <<"------->> Kilometros a Metros <<-------";

    cout << endl <<"Digite la cantidad de kilometros: ";
    cin >> num1;

    /// Realiza la multiplicacion en el ensamblador

    __asm__ ( "fld %2;"
              "fld %1;"
              "fmulp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de kilometros a metros es: "<< num1 <<" * "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuKilometros();
}

void menuKilometrosMillas(){
  //Funcion que recibe un numero flotante el cual se encuentra en kilometros y necesita se convertido a millas, este numero es dividido entre 1.609
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 1.609, resultado;

    cout << endl <<"------->> Kilometros a Millas <<-------";

    cout << endl <<"Digite la cantidad de kilometros: ";
    cin >> num1;

    /// Realiza la division en el ensamblador

    __asm__ ( "fld %2;"
              "fld %1;"
              "fdivp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de kilometros a millas es: "<< num1 <<" / "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuKilometros();
}

void menuKilometrosPulgadas(){
  //Funcion que recibe un numero flotante el cual se encuentra en kilometros y necesita se convertido a pulgadas, este numero es multiplicado por 39370
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 39370, resultado;

    cout << endl <<"------->> Kilometros a Pulgadas <<-------";

    cout << endl <<"Digite la cantidad de kilometros: ";
    cin >> num1;

    /// Realiza la multiplicacion en el ensamblador

    __asm__ ( "fld %2;"
              "fld %1;"
              "fmulp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de kilometros a pulgadas es: "<< num1 <<" * "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuKilometros();
}

void menuKilometrosPies(){
  //Funcion que recibe un numero flotante el cual se encuentra en kilometros y necesita se convertido a pies, este numero es multiplicado por 3281
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 3281, resultado;

    cout << endl <<"------->> Kilometros a Pies <<-------";

    cout << endl <<"Digite la cantidad de kilometros: ";
    cin >> num1;

    /// Realiza la multiplicacion en el ensamblador

    __asm__ ( "fld %2;"
              "fld %1;"
              "fmulp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de kilometros a pies es: "<< num1 <<" * "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuKilometros();
}

void menuKilometros(){
  //Funcion para mostrar un sub menu con todas las opciones para realizar conversiones de kilometros a otros sistemas de medida, cada una
  //con su indice correspondiente para que el usuario seleccione, y según lo digitado, se evalua en un switch y 
  //así llamar a la funcion correspondiente. 
  system("clear");
  char x = '0';
  cout << endl <<"------->> Kilometros a<<-------" << endl;
  cout << endl <<"Opciones: ";
  cout << endl <<"1. METROS";
  cout << endl <<"2. MILLAS";
  cout << endl <<"3. PULGADAS";
  cout << endl <<"4. PIES";   
  cout << endl <<"5. VOLVER AL MENU PRINCIPAL";
  cout << endl <<"6. CERRAR PROGRAMA";
  cout << endl <<"Opcion: ";
  cin >> x;

  switch (x){
    case '1' : menuKilometrosMetros();
      break;
    case '2' : menuKilometrosMillas();
      break;
    case '3' : menuKilometrosPulgadas();
      break;
    case '4' : menuKilometrosPies();
      break;
    case '5' : menuOpciones();
      break;
    case '6' : menuSalir();
      break;
    default: menuKilometros();
      break;
  }
}

void menuMillasMetros(){
  //Funcion que recibe un numero flotante el cual se encuentra en millas y necesita se convertido a metros, este numero es multiplicado por 1609
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 1609, resultado;

    cout << endl <<"------->> Millas a Metros <<-------";

    cout << endl <<"Digite la cantidad de millas: ";
    cin >> num1;

    /// Realiza la multiplicacion en el ensamblador

    __asm__ ( "fld %2;"
              "fld %1;"
              "fmulp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de millas a metros es: "<< num1 <<" * "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuMillas();
}

void menuMillasKilometros(){
  //Funcion que recibe un numero flotante el cual se encuentra en millas y necesita se convertido a kilometros, este numero es multiplicado por 1.609
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 1.609, resultado;

    cout << endl <<"------->> Millas a Kilometros <<-------";

    cout << endl <<"Digite la cantidad de millas: ";
    cin >> num1;

    /// Realiza la multiplicacion en el ensamblador

    __asm__ ( "fld %2;"
              "fld %1;"
              "fmulp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de millas a kilometros es: "<< num1 <<" * "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuMillas();
}

void menuMillasPulgadas(){
  //Funcion que recibe un numero flotante el cual se encuentra en millas y necesita se convertido a pulgades, este numero es multiplicado por 63360
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 63360, resultado;

    cout << endl <<"------->> Millas a Pulgadas <<-------";

    cout << endl <<"Digite la cantidad de millas: ";
    cin >> num1;

    /// Realiza la multiplicacion en el ensamblador

    __asm__ ( "fld %2;"
              "fld %1;"
              "fmulp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de millas a pulgadas es: "<< num1 <<" * "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuMillas();
}

void menuMillasPies(){
  //Funcion que recibe un numero flotante el cual se encuentra en millas y necesita se convertido a pies, este numero es multiplicado por 5280
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 5280, resultado;

    cout << endl <<"------->> Millas a Pies <<-------";

    cout << endl <<"Digite la cantidad de millas: ";
    cin >> num1;

    /// Realiza la multiplicacion en el ensamblador

    __asm__ ( "fld %2;"
              "fld %1;"
              "fmulp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de millas a pies es: "<< num1 <<" * "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuMillas();
}

void menuMillas(){
  //Funcion para mostrar un sub menu con todas las opciones para realizar conversiones de millas a otros sistemas de medida, cada una
  //con su indice correspondiente para que el usuario seleccione, y según lo digitado, se evalua en un switch y 
  //así llamar a la funcion correspondiente. 
  system("clear");
  char x = '0';
  cout << endl <<"------->> Millas a<<-------" << endl;
  cout << endl <<"Opciones: ";
  cout << endl <<"1. METROS";
  cout << endl <<"2. KILOMETROS";
  cout << endl <<"3. PULGADAS";
  cout << endl <<"4. PIES";   
  cout << endl <<"5. VOLVER AL MENU PRINCIPAL";
  cout << endl <<"6. CERRAR PROGRAMA";
  cout << endl <<"Opcion: ";
  cin >> x;

  switch (x){
    case '1' : menuMillasMetros();
      break;
    case '2' : menuMillasKilometros();
      break;
    case '3' : menuMillasPulgadas();
      break;
    case '4' : menuMillasPies();
      break;
    case '5' : menuOpciones();
      break;
    case '6' : menuSalir();
      break;
    default: menuMillas();
      break;
  }
}

void menuPulgadasMetros(){
  //Funcion que recibe un numero flotante el cual se encuentra en pulgadas y necesita se convertido a metros, este numero es dividido entre 39.37
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 39.37, resultado;

    cout << endl <<"------->> Pulgadas a Metros <<-------";

    cout << endl <<"Digite la cantidad de pulgadas: ";
    cin >> num1;

    /// Realiza la division en el ensamblador

    __asm__ ( "fld %2;"
              "fld %1;"
              "fdivp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de pulgadas a metros es: "<< num1 <<" / "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuPulgadas();
}

void menuPulgadasKilometros(){
  //Funcion que recibe un numero flotante el cual se encuentra en pulgadas y necesita se convertido a kilometrosmetros, este numero es dividido entre 39370
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 39370, resultado;

    cout << endl <<"------->> Pulgadas a Kilometros <<-------";

    cout << endl <<"Digite la cantidad de pulgadas: ";
    cin >> num1;

    /// Realiza la division en el ensamblador

    __asm__ ( "fld %2;"
              "fld %1;"
              "fdivp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de pulgadas a kilometros es: "<< num1 <<" / "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuPulgadas();
}

void menuPulgadasMillas(){
  //Funcion que recibe un numero flotante el cual se encuentra en pulgadas y necesita se convertido a millas, este numero es dividido entre 63360
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 63360, resultado;

    cout << endl <<"------->> Pulgadas a Millas <<-------";

    cout << endl <<"Digite la cantidad de pulgadas: ";
    cin >> num1;

    /// Realiza la division en el ensamblador

    __asm__ ( "fld %2;"
              "fld %1;"
              "fdivp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de pulgadas a millas es: "<< num1 <<" / "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuPulgadas();
}

void menuPulgadasPies(){
  //Funcion que recibe un numero flotante el cual se encuentra en pulgadas y necesita se convertido a pies, este numero es dividido entre 12
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 12, resultado;

    cout << endl <<"------->> Pulgadas a Pies <<-------";

    cout << endl <<"Digite la cantidad de pulgadas: ";
    cin >> num1;

    /// Realiza la division en el ensamblador

    __asm__ ( "fld %2;"
              "fld %1;"
              "fdivp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de pulgadas a pies es: "<< num1 <<" / "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuPulgadas();
}

void menuPulgadas(){
  //Funcion para mostrar un sub menu con todas las opciones para realizar conversiones de pulgadas a otros sistemas de medida, cada una
  //con su indice correspondiente para que el usuario seleccione, y según lo digitado, se evalua en un switch y 
  //así llamar a la funcion correspondiente. 
  system("clear");
  char x = '0';
  cout << endl <<"------->> Pulgadas a<<-------" << endl;
  cout << endl <<"Opciones: ";
  cout << endl <<"1. METROS";
  cout << endl <<"2. KILOMETROS";
  cout << endl <<"3. MILLAS";
  cout << endl <<"4. PIES";   
  cout << endl <<"5. VOLVER AL MENU PRINCIPAL";
  cout << endl <<"6. CERRAR PROGRAMA";
  cout << endl <<"Opcion: ";
  cin >> x;

  switch (x){
    case '1' : menuPulgadasMetros();
      break;
    case '2' : menuPulgadasKilometros();
      break;
    case '3' : menuPulgadasMillas();
      break;
    case '4' : menuPulgadasPies();
      break;
    case '5' : menuOpciones();
      break;
    case '6' : menuSalir();
      break;  
    default: menuPulgadas();
      break;
  }
}

void menuPiesMetros(){
  //Funcion que recibe un numero flotante el cual se encuentra en pies y necesita se convertido a metros, este numero es dividido entre 3.281
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 3.281, resultado;

    cout << endl <<"------->> Pies a Metros <<-------";

    cout << endl <<"Digite la cantidad de pies: ";
    cin >> num1;

    /// Realiza la division en el ensamblador

    __asm__ ( "fld %2;"
              "fld %1;"
              "fdivp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de pies a metros es: "<< num1 <<" / "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuPies();
}

void menuPiesKilometros(){
  //Funcion que recibe un numero flotante el cual se encuentra en pies y necesita se convertido a kilometros, este numero es dividido entre 3281
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 3281, resultado;

    cout << endl <<"------->> Pies a Kilometros <<-------";

    cout << endl <<"Digite la cantidad de pies: ";
    cin >> num1;

    /// Realiza la division en el ensamblador

    __asm__ ( "fld %2;"
              "fld %1;"
              "fdivp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de pies a kilometros es: "<< num1 <<" / "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuPies();
}

void menuPiesMillas(){
  //Funcion que recibe un numero flotante el cual se encuentra en pies y necesita se convertido a millas, este numero es dividido entre 5280
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 5280, resultado;

    cout << endl <<"------->> Pies a Millas <<-------";

    cout << endl <<"Digite la cantidad de pies: ";
    cin >> num1;

    /// Realiza la division en el ensamblador

    __asm__ ( "fld %2;"
              "fld %1;"
              "fdivp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de pies a millas es: "<< num1 <<" / "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuPies();
}

void menuPiesPulgadas(){
  //Funcion que recibe un numero flotante el cual se encuentra en pies y necesita se convertido a pulgadas, este numero es multiplicado por 12
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 12, resultado;

    cout << endl <<"------->> Pies a Pulgadas <<-------";

    cout << endl <<"Digite la cantidad de pies: ";
    cin >> num1;

    /// Realiza la multiplicacion en el ensamblador

    __asm__ ( "fld %2;"
              "fld %1;"
              "fmulp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de pies a pulgadas es: "<< num1 <<" / "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuPies();
}

void menuPies(){
  //Funcion para mostrar un sub menu con todas las opciones para realizar conversiones de pies a otros sistemas de medida, cada una
  //con su indice correspondiente para que el usuario seleccione, y según lo digitado, se evalua en un switch y 
  //así llamar a la funcion correspondiente. 
  system("clear");
  char x = '0';
  cout << endl <<"------->> Pies a<<-------" << endl;
  cout << endl <<"Opciones: ";
  cout << endl <<"1. METROS";
  cout << endl <<"2. KILOMETROS";
  cout << endl <<"3. MILLAS";
  cout << endl <<"4. PULGADAS";   
  cout << endl <<"5. VOLVER AL MENU PRINCIPAL";
  cout << endl <<"6. CERRAR PROGRAMA";
  cout << endl <<"Opcion: ";
  cin >> x;

  switch (x){
    case '1' : menuPiesMetros();
      break;
    case '2' : menuPiesKilometros();
      break;
    case '3' : menuPiesMillas();
      break;
    case '4' : menuPiesPulgadas();
      break;
    case '5' : menuOpciones();
      break;
    case '6' : menuSalir();
      break; 
    default: menuPies();
      break;
  }
}
//----------------------------------------------------------------------------

void menuGramosKilogramos(){
  //Funcion que recibe un numero flotante el cual se encuentra en gramos y necesita se convertido a kilogramos, este numero es dividido entre 1000
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 1000, resultado;

    cout << endl <<"------->> Gramos a Kilogramos <<-------";

    cout << endl <<"Digite la cantidad de gramos: ";
    cin >> num1;

    /// Realiza la division en el ensamblador

    asm ( "fld %2;"
              "fld %1;"
              "fdivp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de gramos a kilogramos es: "<< num1 <<" / "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuGramos();
}

void menuGramosLibras(){
  //Funcion que recibe un numero flotante el cual se encuentra en gramos y necesita se convertido a libras, este numero es dividido entre 454
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 454, resultado;

    cout << endl <<"------->> Gramos a Libras <<-------";

    cout << endl <<"Digite la cantidad de gramos: ";
    cin >> num1;

    /// Realiza la division en el ensamblador

    asm ( "fld %2;"
              "fld %1;"
              "fdivp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de gramos a libras es: "<< num1 <<" / "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuGramos();
}

void menuGramos(){
  //Funcion para mostrar un sub menu con todas las opciones para realizar conversiones de gramos a otros sistemas de medida, cada una
  //con su indice correspondiente para que el usuario seleccione, y según lo digitado, se evalua en un switch y 
  //así llamar a la funcion correspondiente. 
  system("clear");
  char x = '0';
  cout << endl <<"------->> Gramos a<<-------" << endl;
  cout << endl <<"Opciones: ";
  cout << endl <<"1. Kilogramos";
  cout << endl <<"2. Libras";
  cout << endl <<"3. VOLVER AL MENU PRINCIPAL";
  cout << endl <<"4. CERRAR PROGRAMA";
  cout << endl <<"Opcion: ";
  cin >> x;

  switch (x){
    case '1' : menuGramosKilogramos();
      break;
    case '2' : menuGramosLibras();
      break;
    case '3' : menuOpciones();
      break;
    case '4' : menuSalir();
      break;
    default: menuGramos();
      break;
  }
}

void menuKilogramosGramos(){
  //Funcion que recibe un numero flotante el cual se encuentra en kilogramos y necesita se convertido a gramos, este numero es multiplicado por 1000
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 1000, resultado;

    cout << endl <<"------->> Kilogramos a Gramos <<-------";

    cout << endl <<"Digite la cantidad de kilogramos: ";
    cin >> num1;

    /// Realiza la multiplicacion en el ensamblador

    asm ( "fld %2;"
              "fld %1;"
              "fmulp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de kilogramos a gramos es: "<< num1 <<" * "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuKilogramos();
}

void menuKilogramosLibras(){
  //Funcion que recibe un numero flotante el cual se encuentra en kilogramos y necesita se convertido a libras, este numero es multiplicado por 2.205
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 2.205, resultado;

    cout << endl <<"------->> Kilogramos a Libras <<-------";

    cout << endl <<"Digite la cantidad de kilogramos: ";
    cin >> num1;

    /// Realiza la multiplicacion en el ensamblador

    asm ( "fld %2;"
              "fld %1;"
              "fmulp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de kilogramos a libras es: "<< num1 <<" * "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuKilogramos();
}

void menuKilogramos(){
  //Funcion para mostrar un sub menu con todas las opciones para realizar conversiones de kilogramos a otros sistemas de medida, cada una
  //con su indice correspondiente para que el usuario seleccione, y según lo digitado, se evalua en un switch y 
  //así llamar a la funcion correspondiente. 
  system("clear");
  char x = '0';
  cout << endl <<"------->> Kilogramos a<<-------" << endl;
  cout << endl <<"Opciones: ";
  cout << endl <<"1. Gramos";
  cout << endl <<"2. Libras";
  cout << endl <<"3. VOLVER AL MENU PRINCIPAL";
  cout << endl <<"4. CERRAR PROGRAMA";
  cout << endl <<"Opcion: ";
  cin >> x;

  switch (x){
    case '1' : menuKilogramosGramos();
      break;
    case '2' : menuKilogramosLibras();
      break;
    case '3' : menuOpciones();
      break;
    case '4' : menuSalir();
      break;  
    default: menuKilogramos();
      break;
  }
}

void menuLibrasGramos(){
  //Funcion que recibe un numero flotante el cual se encuentra en libras y necesita se convertido a gramos, este numero es multiplicado por 454
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 454, resultado;

    cout << endl <<"------->> Libras a Gramos <<-------";

    cout << endl <<"Digite la cantidad de libras: ";
    cin >> num1;

    /// Realiza la multiplicacion en el ensamblador

    asm ( "fld %2;"
              "fld %1;"
              "fmulp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de libras a gramos es: "<< num1 <<" * "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuLibras();
}

void menuLibrasKilogramos(){
  //Funcion que recibe un numero flotante el cual se encuentra en libras y necesita se convertido a kilogramos, este numero es dividido entre 2.205
  //y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 2.205, resultado;

    cout << endl <<"------->> Libras a Kilogramos <<-------";

    cout << endl <<"Digite la cantidad de libras: ";
    cin >> num1;

    /// Realiza la division en el ensamblador

    asm ( "fld %2;"
              "fld %1;"
              "fdivp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de libras a kilogramos es: "<< num1 <<" / "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuLibras();
}

void menuLibras(){
  //Funcion para mostrar un sub menu con todas las opciones para realizar conversiones de librass a otros sistemas de medida, cada una
  //con su indice correspondiente para que el usuario seleccione, y según lo digitado, se evalua en un switch y 
  //así llamar a la funcion correspondiente. 
  system("clear");
  char x = '0';
  cout << endl <<"------->> Libras a<<-------" << endl;
  cout << endl <<"Opciones: ";
  cout << endl <<"1. Gramos";
  cout << endl <<"2. Kilogramos";
  cout << endl <<"3. VOLVER AL MENU PRINCIPAL";
  cout << endl <<"4. CERRAR PROGRAMA";
  cout << endl <<"Opcion: ";
  cin >> x;

  switch (x){
    case '1' : menuLibrasGramos();
      break;
    case '2' : menuLibrasKilogramos();
      break;
    case '3' : menuOpciones();
      break;
    case '4' : menuSalir();
      break;  
    default: menuLibras();
      break;
  }
}

//--------------------------------------------------------------
void menuColonesEuros(){
  //Funcion que recibe un numero flotante el cual se encuentra en colones y necesita se convertido a euros, esta extra de un documento txt que se acutaliza con las
  //con nuevos valores de cambio cada que se desee, con este valor extraido del txt se multiplica y es guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2, resultado;

    num2 = lectura("CRC-EUR");

    cout << endl <<"------->> Colones a Euros <<-------";

    cout << endl <<"Digite la cantidad en Colones: ";
    cin >> num1;

    /// Realiza la division en el ensamblador

    asm ( "fld %2;"
              "fld %1;"
              "fmulp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de colones a euros es: "<< num1 <<" * "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuColones();
}

void menuColonesDolares(){
    //Funcion que recibe un numero flotante el cual se encuentra en colones y necesita se convertido a dolares, esta extra de un documento txt que se acutaliza con las
  //con nuevos valores de cambio cada que se desee, con este valor extraido del txt se multiplica y es guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2, resultado;

    num2 = lectura("CRC-USD");

    cout << endl <<"------->> Colones a Dolares <<-------";

    cout << endl <<"Digite la cantidad en Colones: ";
    cin >> num1;

    /// Realiza la division en el ensamblador

    asm ( "fld %2;"
              "fld %1;"
              "fmulp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de colones a dolares es: "<< num1 <<" * "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuColones();
}

void menuColones(){
  //Funcion para mostrar un sub menu con todas las opciones para realizar conversiones de colones a otros tipo de moneda, cada una
  //con su indice correspondiente para que el usuario seleccione, y según lo digitado, se evalua en un switch y 
  //así llamar a la funcion correspondiente. 
  system("clear");
  char x = '0';
  cout << endl <<"------->> Colones a<<-------" << endl;
  cout << endl <<"Opciones: ";
  cout << endl <<"1. Euros";
  cout << endl <<"2. Dolares";
  cout << endl <<"3. VOLVER AL MENU PRINCIPAL";
  cout << endl <<"4. CERRAR PROGRAMA";
  cout << endl <<"Opcion: ";
  cin >> x;

  switch (x){
    case '1' : menuColonesEuros();
      break;
    case '2' : menuColonesDolares();
      break;
    case '3' : menuOpciones();
      break;
    case '4' : menuSalir();
      break;  
    default: menuLibras();
      break;
  }
}

void menuEurosColones(){
  //Funcion que recibe un numero flotante el cual se encuentra en euros y necesita se convertido a colones, esta extra de un documento txt que se acutaliza con las
  //con nuevos valores de cambio cada que se desee, con este valor extraido del txt se multiplica y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2, resultado;

    num2 = lectura("EUR-CRC");

    cout << endl <<"------->> Euros a Colones <<-------";

    cout << endl <<"Digite la cantidad en Euros: ";
    cin >> num1;

    /// Realiza la division en el ensamblador

    asm ( "fld %2;"
              "fld %1;"
              "fmulp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de euros a colones es: "<< num1 <<" * "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuEuros();
}

void menuEurosDolares(){
  //Funcion que recibe un numero flotante el cual se encuentra en euros y necesita se convertido a dolares, esta extra de un documento txt que se acutaliza con las
  //con nuevos valores de cambio cada que se desee, con este valor extraido del txt se multiplica y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2, resultado;

    num2 = lectura("EUR-USD");

    cout << endl <<"------->> Euros a Dolares <<-------";

    cout << endl <<"Digite la cantidad en Euros: ";
    cin >> num1;

    /// Realiza la division en el ensamblador

    asm ( "fld %2;"
              "fld %1;"
              "fmulp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de euros a dolares es: "<< num1 <<" * "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuEuros();
}

void menuEuros(){
  //Funcion para mostrar un sub menu con todas las opciones para realizar conversiones de euros a otros tipo de moneda, cada una
  //con su indice correspondiente para que el usuario seleccione, y según lo digitado, se evalua en un switch y 
  //así llamar a la funcion correspondiente. 
  system("clear");
  char x = '0';
  cout << endl <<"------->> Euros a<<-------" << endl;
  cout << endl <<"Opciones: ";
  cout << endl <<"1. Colones";
  cout << endl <<"2. Dolares";
  cout << endl <<"3. VOLVER AL MENU PRINCIPAL";
  cout << endl <<"4. CERRAR PROGRAMA";
  cout << endl <<"Opcion: ";
  cin >> x;

  switch (x){
    case '1' : menuEurosColones();
      break;
    case '2' : menuEurosDolares();
      break;
    case '3' : menuOpciones();
      break;
    case '4' : menuSalir();
      break;  
    default: menuLibras();
      break;
  }
}

void menuDolaresColones(){
  //Funcion que recibe un numero flotante el cual se encuentra en dolares y necesita se convertido a colones, esta extra de un documento txt que se acutaliza con las
  //con nuevos valores de cambio cada que se desee, con este valor extraido del txt se multiplica y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2, resultado;

    num2 = lectura("USD-CRC");

    cout << endl <<"------->> Dolares a Colones <<-------";

    cout << endl <<"Digite la cantidad en Dolares: ";
    cin >> num1;

    /// Realiza la division en el ensamblador

    asm ( "fld %2;"
              "fld %1;"
              "fmulp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de dolares a colones es: "<< num1 <<" * "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuDolares();
}

void menuDolaresEuros(){
  //Funcion que recibe un numero flotante el cual se encuentra en dolares y necesita se convertido a euros, esta extra de un documento txt que se acutaliza con las
  //con nuevos valores de cambio cada que se desee, con este valor extraido del txt se multiplica y guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2, resultado;

    num2 = lectura("USD-EUR");

    cout << endl <<"------->> Dolares a Euros <<-------";

    cout << endl <<"Digite la cantidad en Dolares: ";
    cin >> num1;

    /// Realiza la division en el ensamblador

    asm ( "fld %2;"
              "fld %1;"
              "fmulp;"
              "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de dolares a euros es: "<< num1 <<" * "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuDolares();
}

void menuDolares(){
  //Funcion para mostrar un sub menu con todas las opciones para realizar conversiones de dolares a otros tipo de moneda, cada una
  //con su indice correspondiente para que el usuario seleccione, y según lo digitado, se evalua en un switch y 
  //así llamar a la funcion correspondiente. 
  system("clear");
  char x = '0';
  cout << endl <<"------->> Dolares a<<-------" << endl;
  cout << endl <<"Opciones: ";
  cout << endl <<"1. Colones";
  cout << endl <<"2. Euros";
  cout << endl <<"3. VOLVER AL MENU PRINCIPAL";
  cout << endl <<"4. CERRAR PROGRAMA";
  cout << endl <<"Opcion: ";
  cin >> x;

  switch (x){
    case '1' : menuDolaresColones();
      break;
    case '2' : menuDolaresEuros();
      break;
    case '3' : menuOpciones();
      break;
    case '4' : menuSalir();
      break;  
    default: menuLibras();
      break;
  }
}
//--------------------------------------------------------------

void menuCelsiusFahrenheit(){
  //Funcion que recibe un numero flotante el cual se encuentra en celcius y necesita se convertido a fahrenheit, este numero es multiplicado por 1.8
  //y este resultado es sumado con 32, luego es guardado en una variable llamada resultado para ser mostrada al usuario.

  //mult 1 * 2 +
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 1.8, num3 = 32, resultado;

    cout << endl <<"------->> Celsius a Fahrenheit <<-------";

    cout << endl <<"Digite la cantidad de celsius: ";
    cin >> num1;

    /// Realiza la multiplicacion en el ensamblador

    asm ( "fld %3;"
          "fld %2;"
          "fld %1;"
          "fmulp;"
          "faddp;"
          "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2), "m" (num3) ) ;

    cout << endl <<"El resultado de celsius a fahrenheit es: ("<< num1 <<" * "<< num2 <<") + "<< num3 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuCelsius();
}

void menuCelsiusKelvin(){
  //Funcion que recibe un numero flotante el cual se encuentra en celcius y necesita se convertido a kelvin, este numero es 
  //sumado con 273.15, luego se guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 273.15, resultado;

    cout << endl <<"------->> Celsius a kelvin <<-------";

    cout << endl <<"Digite la cantidad de celsius: ";
    cin >> num1;

    /// Realiza la multiplicacion en el ensamblador

    asm ( "fld %2;"
          "fld %1;"
          "faddp;"
          "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de celsius a kelvin es: "<< num1 <<" + "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuCelsius();
}

void menuCelsius(){
  //Funcion para mostrar un sub menu con todas las opciones para realizar conversiones de celcius a otros sistemas de medida, cada una
  //con su indice correspondiente para que el usuario seleccione, y según lo digitado, se evalua en un switch y 
  //así llamar a la funcion correspondiente. 
  system("clear");
  char x = '0';
  cout << endl <<"------->> Celsius a<<-------" << endl;
  cout << endl <<"Opciones: ";
  cout << endl <<"1. Fahrenheit";
  cout << endl <<"2. Kelvin";
  cout << endl <<"3. VOLVER AL MENU PRINCIPAL";
  cout << endl <<"4. CERRAR PROGRAMA";
  cout << endl <<"Opcion: ";
  cin >> x;

  switch (x){
    case '1' : menuCelsiusFahrenheit();
      break;
    case '2' : menuCelsiusKelvin();
      break;
    case '3' : menuOpciones();
      break;
    case '4' : menuSalir();
      break;  
    default: menuCelsius();
      break;
  }
}

void menuFahrenheitCelsius(){
  //Funcion que recibe un numero flotante el cual se encuentra en fahrenheit y necesita se convertido a celsius, este numero es restado con 32
  //y este resultado es multiplicado por 0.55, luego es guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 32, num3 = 0.55, resultado;

    cout << endl <<"------->> Fahrenheit a Celsius <<-------";

    cout << endl <<"Digite la cantidad de fahrenheit: ";
    cin >> num1;

    /// Realiza la multiplicacion en el ensamblador

    asm ( "fld %3;"
          "fld %2;"
          "fld %1;"
          "fsubp;"
          "fmulp;"
          "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2), "m" (num3) ) ;

    cout << endl <<"El resultado de fahrenheit a celsius es: ("<< num1 <<" - "<< num2 <<") * "<< num3 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuFahrenheit();
}

void menuFahrenheitKelvin(){
  //Funcion que recibe un numero flotante el cual se encuentra en fahrenheit y necesita se convertido a kelvin, este numero es restado con 32
  //y este resultado es multiplicado por 0.55, por ultimo es sumado con 273.156, luego es guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 32, num3 = 0.55, num4 = 273.15, resultado;

    cout << endl <<"------->> Fahrenheit a kelvin <<-------";

    cout << endl <<"Digite la cantidad de fahrenheit: ";
    cin >> num1;

    /// Realiza la multiplicacion en el ensamblador

    asm ( "fld %4;"
          "fld %3;"
          "fld %2;"
          "fld %1;"
          "fsubp;"
          "fmulp;"
          "faddp;"
          "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2), "m" (num3), "m" (num4) ) ;

    cout << endl <<"El resultado de fahrenheit a kelvin es: ("<< num1 <<" - "<< num2 <<") * "<< num3 <<" + "<< num4 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuFahrenheit();
}

void menuFahrenheit(){
  //Funcion para mostrar un sub menu con todas las opciones para realizar conversiones de fahrenheit a otros sistemas de medida, cada una
  //con su indice correspondiente para que el usuario seleccione, y según lo digitado, se evalua en un switch y 
  //así llamar a la funcion correspondiente. 
  system("clear");
  char x = '0';
  cout << endl <<"------->> Fahrenheit a <<-------" << endl;
  cout << endl <<"Opciones: ";
  cout << endl <<"1. Celsius";
  cout << endl <<"2. Kelvin";
  cout << endl <<"3. VOLVER AL MENU PRINCIPAL";
  cout << endl <<"4. CERRAR PROGRAMA";
  cout << endl <<"Opcion: ";
  cin >> x;

  switch (x){
    case '1' : menuFahrenheitCelsius();
      break;
    case '2' : menuFahrenheitKelvin();
      break;
    case '3' : menuOpciones();
      break;
    case '4' : menuSalir();
      break;  
    default: menuFahrenheit();
      break;
  }
}

void menuKelvinCelsius(){
  //Funcion que recibe un numero flotante el cual se encuentra en kelvin y necesita se convertido a celsius, este numero es restado con 273.15,
  //luego es guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 273.15, resultado;

    cout << endl <<"------->> Kelvin a Celsius <<-------";

    cout << endl <<"Digite la cantidad de kelvin: ";
    cin >> num1;

    /// Realiza la multiplicacion en el ensamblador

    asm ( "fld %2;"
          "fld %1;"
          "fsubp;"
          "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2) ) ;

    cout << endl <<"El resultado de kelvin a celsius es: "<< num1 <<" - "<< num2 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuKelvin();
}

void menuKelvinFahrenheit(){
  //Funcion que recibe un numero flotante el cual se encuentra en kelvin y necesita se convertido a fahrenheit, este numero es restado con 273.15,
  //seguidamente es multiplicado por 1.8, por ultimo es sumado con 32, luego es guardado en una variable llamada resultado para ser mostrada al usuario.
  char x = '1';

  while(x == '1'){
    system("clear");
    float num1, num2 = 273.15, num3 = 1.8, num4 = 32, resultado;

    cout << endl <<"------->> Kelvin a Fahrenheit <<-------";

    cout << endl <<"Digite la cantidad de kelvin: ";
    cin >> num1;

    /// Realiza la multiplicacion en el ensamblador

    asm ( "fld %4;"
          "fld %3;"
          "fld %2;"
          "fld %1;"
          "fsubp;"
          "fmulp;"
          "faddp;"
          "fstp %0;" : "=m" (resultado) : "m" (num1), "m" (num2), "m" (num3), "m" (num4) ) ;

    cout << endl <<"El resultado de kelvin a fahrenheit es: ("<< num1 <<" - "<< num2 <<") * "<< num3 <<" + "<< num4 << " = "  <<resultado;

    cout << endl << endl <<"--> Presione una tecla para salir....";
    cin >> x;
  }
  menuKelvin();
}

void menuKelvin(){
  //Funcion para mostrar un sub menu con todas las opciones para realizar conversiones de kelvin a otros sistemas de medida, cada una
  //con su indice correspondiente para que el usuario seleccione, y según lo digitado, se evalua en un switch y 
  //así llamar a la funcion correspondiente.
  system("clear");
  char x = '0';
  cout << endl <<"------->> Kelvin a <<-------" << endl;
  cout << endl <<"Opciones: ";
  cout << endl <<"1. Celsius";
  cout << endl <<"2. Fahrenheit";
  cout << endl <<"3. VOLVER AL MENU PRINCIPAL";
  cout << endl <<"4. CERRAR PROGRAMA";
  cout << endl <<"Opcion: ";
  cin >> x;

  switch (x){
    case '1' : menuKelvinCelsius();
      break;
    case '2' : menuKelvinFahrenheit();
      break;
    case '3' : menuOpciones();
      break;
    case '4' : menuSalir();
      break;  
    default: menuKelvin();
      break;
  }
}

//------------------------------------------------------------

float lectura(string tipoCambio){
  //Metodo que lee el archivo txt con los datos de tipo de cambio de las distintas moneda.
    ifstream archivo;
    string texto;
    float cambio;

    archivo.open("Tipo_de_Cambio.txt", ios::in);

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    while (!archivo.eof()){
        getline(archivo, texto);
        size_t found = texto.find(tipoCambio); 
        if (found != string::npos){
            size_t found2 = texto.find("|", 11); 
            string cambioString = texto.substr(found2+1);
            cambio = stof(cambioString);
            size_t foundFecha = texto.find("|", 0); 
            string fecha = texto.substr(0, foundFecha);
            string moneda = texto.substr(foundFecha+1, 7);
            cout<<endl<<"Fecha: "<<fecha<<" Moneda: "<<moneda<<" Cambio: "<<cambio<<endl;
        }
    }

    archivo.close();

    return cambio;

}

void menuSalir(){
  //funcion que termina la aplicacion de consola.
  EXIT_FAILURE;
}

int main() {
  //funcion principal que llama al menu principal cuando el programa se ejecurta por primer vez.
  menuPrincipal();
    
  return 0 ;
}