/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;

int main()
{   
    cout<<"\n";
    cout<<"\n##   ##   ####     #####   ######    #####   ######    ####      ##\n";
    cout<<"##   ##    ##     ##   ##  # ## #   ##   ##   ##  ##    ##      ####\n";
    cout<<"##   ##    ##     #          ##     ##   ##   ##  ##    ##     ##  ##\n";
    cout<<"#######    ##      #####     ##     ##   ##   #####     ##     ##  ##\n";
    cout<<"##   ##    ##          ##    ##     ##   ##   ## ##     ##     ######\n";
    cout<<"##   ##    ##     ##   ##    ##     ##   ##   ##  ##    ##     ##  ##\n";
    cout<<"##   ##   ####     #####    ####     #####   #### ##   ####    ##  ##\n\n";
    
    cout<<"                             #####    #######\n";
    cout<<"                              ## ##    ##   #\n";
    cout<<"                              ##  ##   ## #\n";
    cout<<"                              ##  ##   ####\n";
    cout<<"                              ##  ##   ## #\n";
    cout<<"                              ## ##    ##   #\n";
    cout<<"                             #####    #######\n\n";
            
    cout<<"                         ######  ##   ##  ######\n";
    cout<<"                         ##  ##  ##   ##   ##  ##\n";
    cout<<"                         ##  ##  ##   ##   ##  ##\n";
    cout<<"                         #####   #######   #####\n";
    cout<<"                         ##      ##   ##   ##\n";
    cout<<"                         ##      ##   ##   ##\n";
    cout<<"                         ####    ##   ##  ####\n\n";

    int puntos  = 0;
    cout<<"ʘ‿ʘ--Hola amiguito programador\n";
    usleep(300000);
    cout<<"ʘ‿ʘ--¿Como estas?\n\n";
    int a = 0;
    cout<<"(1)--Bien gracias, ¿y tu?\n";
    cout<<"(2)--¿Que te importa?\n";
    cin>>a;
    if(a == 1){
        cout<<"ʘ‿ʘ--¡Me alegro!, yo tambien estoy bien\n";
        string nombre = "";
        cout<<"ʘ‿ʘ--¿Como te llamas?\n";
        cin>>nombre;
        cout<<"\nʘ‿ʘ--Mucho gusto " + nombre + ", bonito nombre\n";
        usleep(400000);
        cout<<"\nʘ‿ʘ--Me presento, mi nombre es Pakito y hoy me encargare que aprendas un poco sobre PHP\n";
        usleep(400000);
        cout<<"ʘ‿ʘ--Lo haremos de la siguiente manera, te dare 10 preguntas\ncʘ‿ʘ--cada pregunta que aciertes es un punto,";
        usleep(400000);
        cout<<"ʘ‿ʘ--al final contaremos los puntos\nʘ‿ʘ--y te asignare un personaje en funcion a tu calificacion.\n";
        usleep(400000);
        int b = 0;
        cout<<"ʘ‿ʘ--Antes que nada, ¿Sabes que es PHP?\n\n";
        cout<<"(1)--SII\n";
        cout<<"(2)--No:(\n";
        cin>>b;
            if(b ==1){
                cout<<"ʘ‿ʘ--Perfecto, dime que es\n";
                int c=0;
                cout<<"\n(1)--Una tribu nomada venezolana\n";
                cout<<"(2)--Es un lenguaje de programación orientado a aplicaciones web dinámicas.\n";
                cout<<"(3)--Partido politico mexicano\n";
                cin>>c;
                if(c==1 || c == 3){
                    cout<<"ಥ_ಥ--NOOOOO, PHP es un lenguaje de programación orientado a aplicaciones web dinámicas.\n";
                    printf("Puntos: %i",puntos);
                    cout<<"\n\n";
                }else if(b==2){
                    cout<<"ʘ‿ʘ--PERFECTO, efectivamente PHP es un lenguaje de programacion\n";
                    puntos = puntos + 1;
                    printf("Puntos: %i",puntos);
                    cout<<"\n\n";
                }
            }else if(b==2){
                cout<<"ʘ‿ʘ--Okey, te dare una breve introduccion, pero ya perdiste tu primer punto\n";
                usleep(400000);
                cout<<"ʘ‿ʘ--PHP es un lenguaje de programación de uso general que se adapta especialmente al desarrollo web.\n";  
                usleep(400000);
                cout<<"ʘ‿ʘ--Fue creado inicialmente por el programador danés-canadiense Rasmus Lerdorf en 1994.\n";
                usleep(400000);
                cout<<"ʘ‿ʘ--PHP originalmente significaba Personal Home Page (Página personal),\n ʘ‿ʘ--pero ahora significa el inicialismo recursivo PHP: Hypertext Preprocessor.\n";   
                usleep(400000);
                cout<<"ʘ‿ʘ--Bien, estas seran las unicas pistas que te dare hoy, continuemos\n\n";
            }
            
            //-----------------------------------------
            int c = 0;
            cout<<"\nPregunta 2\n";
            usleep(400000);
            cout <<"\nʘ‿ʘ--¿Quien Invento PHP?\n";
            cout<<"\n(1)--Andres Manuel Lopez Obrador\n";
            cout<<"(2)--Kevin Yahir Duarte Salazar\n";
            cout<<"(3)--Rasmus Lerdorf\n";
            cin>>c;
            if(c == 1|| c ==2){
                usleep(600000);
                cout<<"ಥ_ಥ--FALSOOOOOOO, PHP fue inventado por Rasmus Lerdorf\n";
                printf("Puntos: %i",puntos);
                cout<<"\n\n";
            }else if(c==3){
                usleep(600000);
                cout<<"ʘ‿ʘ--CLAROOO, el programador danes Rasmus Lerdorf fue el que invento PHP\n";
                    puntos = puntos + 1;
                    printf("Puntos: %i",puntos);
                    cout<<"\n\n";
            }
            //-----------------------------------------
            int d = 0;
            cout<<"\nPregunta 3\n";
            usleep(400000);
            cout <<"\nʘ‿ʘ--¿Que significan las siglas PHP?\n";
            cout<<"\n(1)--Hypertext Preprocessor\n";
            cout<<"(2)--Pablo hijo de puta\n";
            cout<<"(3)--Personal Home Page\n";
            cin>>d;
            if(d == 3|| d ==2){
                usleep(600000);
                cout<<"ಥ_ಥ--FALLASTEEEEEEEEE, PHP significa Hypertext Preprocessor\n";
                printf("Puntos: %i",puntos);
                cout<<"\n\n";
            }else if(d==1){
                usleep(600000);
                cout<<"ʘ‿ʘ--BIIEEEEEEN, Php significa Hypertext Preprocessor\n";
                    puntos = puntos + 1;
                    printf("Puntos: %i",puntos);
                    cout<<"\n\n";
            }
            //-----------------------------------------
            int e = 0;
            cout<<"\nPregunta 4\n";
            usleep(400000);
            cout <<"\nʘ‿ʘ--¿En que año se fundo PHP?\n";
            cout<<"\n(1)--21A.C\n";
            cout<<"(2)--1994\n";
            cout<<"(3)--2068\n";
            cin>>e;
            if(e == 3|| e ==1){
                usleep(600000);
                cout<<"ಥ_ಥ--MAAAAAAL, PHP se fundo en 1994\n ";
                printf("Puntos: %i",puntos);
                cout<<"\n\n";
            }else if(e==2){
                usleep(600000);
                cout<<"ʘ‿ʘ--BIIEEEEEEN, SIGUE ASI :)\n";
                    puntos = puntos + 1;
                    printf("Puntos: %i",puntos);
                    cout<<"\n\n";
            }
            //-----------------------------------------
             int f = 0;
            cout<<"\nPregunta 5\n";
            usleep(400000);
            cout <<"\nʘ‿ʘ--¿Cual es la finalidad de PHP?\n";
            cout<<"\n(1)--Desarrollo de guantes\n";
            cout<<"(2)--Inteligencia artificial\n";
            cout<<"(3)--Hacer mas dinamicas las paginas web\n";
           
            cin>>e;
            if(e == 2|| e ==1){
                usleep(600000);
                cout<<"ಥ_ಥ--FALLASTEEEEEEEEE, PHP sirve para hacer paginas web y acciones del lado del servidor \n";
                printf("Puntos: %i",puntos);
                cout<<"\n\n";
            }else if(e==3){
                usleep(600000);
                cout<<"ʘ‿ʘ--ESOOOO, Efectivamente PHP esta mas orietnado a paginas web y acciones del lado del servidor :)\n";
                    puntos = puntos + 1;
                    printf("Puntos: %i",puntos);
                    cout<<"\n\n";
            }
            //-----------------------------------------
            if(puntos >= 3){
                cout<<"\nʘ‿ʘ-----------------VENGA, VAS MUY BIEN SIGUE ASI-------------------\n";
            }else{
                cout<<"\n---------------Te voy a ser sincero vamos bastante mal, pero podemos mejorar, todavia quedan 5 preguntas---------------------\n";
            }
            //-----------------------------------------
             int g = 0;
            cout<<"\nPregunta 6\n";
            usleep(400000);
            cout <<"\nʘ‿ʘ--¿Cual de estas paginas utiliza PHP?\n";
            cout<<"\n(1)--ClickSocial\n";
            cout<<"(2)--Tortilleria don toño\n";
            cout<<"(3)--Youtube\n";
            cin>>g;
            if(g == 2|| g ==3){
                usleep(600000);
                cout<<"ಥ_ಥ--NEGATIVO, --ClickSocial es la pagina desarrollada en PHP \n";
                printf("Puntos: %i",puntos);
                cout<<"\n\n";
            }else if(g==1){
                usleep(600000);
                cout<<"ʘ‿ʘ--YEEEEESS, Efectivamente Click social fue desarrollada en PHP\n";
                    puntos = puntos + 1;
                    printf("Puntos: %i",puntos);
                    cout<<"\n\n";
            }
            //-----------------------------------------
             int h = 0;
            cout<<"\nPregunta 7\n";
            usleep(400000);
            cout <<"\nʘ‿ʘ--¿Cual de estas paginas NO utiliza PHP?\n";
            cout<<"\n(1)--Facebook\n";
            cout<<"(2)--Wikipedia\n";
            cout<<"(3)--Friv Juegos\n";
            cin>>h;
            if(h == 2|| h ==1){
                usleep(600000);
                cout<<"ಥ_ಥ--NEEEEEL, -- Friv juegos es la pagina que no usa PHP \n";
                printf("Puntos: %i",puntos);
                cout<<"\n\n";
            }else if(h==3){
                usleep(600000);
                cout<<"ʘ‿ʘ--YEEEEESS, Efectivamente Friv Juegos no utiliza PHP\n";
                    puntos = puntos + 1;
                    printf("Puntos: %i",puntos);
                    cout<<"\n\n";
            }
            //-----------------------------------------
            
            int i = 0;
            cout<<"\nPregunta 8\n";
            usleep(400000);
            cout <<"\nʘ‿ʘ--¿Cual de los siguientes frameworks es de PHP?\n";
            cout<<"\n(1)--Node\n";
            cout<<"(2)--Laravel\n";
            cout<<"(3)--.NET\n";
            cin>>i;
            if(i == 3|| i ==1){
                usleep(600000);
                cout<<"ಥ_ಥ--NEEIIN, -- Laravel es uno de los frameworks que usa PHP \n";
                printf("Puntos: %i",puntos);
                cout<<"\n\n";
            }else if(i==2){
                usleep(600000);
                cout<<"ʘ‿ʘ--OOUUUI, Laravel es uno de los frameworks mas usados de PHP\n";
                    puntos = puntos + 1;
                    printf("Puntos: %i",puntos);
                    cout<<"\n\n";
            }
            //-----------------------------------------
            int j = 0;
            cout<<"\nPregunta 9\n";
            usleep(400000);
            cout <<"\nʘ‿ʘ--¿Cual de las siguientes lineas de codigo pertence a PHP?\n";
            cout<<"\n(1)--$rowA = $sqlA->fetch_array();\n";
            cout<<"(2)--var elemento = document.getElementById('resultado');\n";
            cout<<"(3)--this.substring(0, 1).toUpperCase().plus(this.substring(1))\n";
            cin>>i;
            if(j == 3|| j ==2){
                usleep(600000);
                cout<<"ಥ_ಥ--NEEIIN, -- $rowA = $sqlA->fetch_array(); este uno de los tantos metodos de extraccion de datos que usa php \n";
                printf("Puntos: %i",puntos);
                cout<<"\n\n";
            }else if(j==1){
                usleep(600000);
                cout<<"ʘ‿ʘ--OOUUUI, Efectivamente esa linea de codigo la usa PHP para guardar un dato de un arreglo en una variable\n";
                    puntos = puntos + 1;
                    printf("Puntos: %i",puntos);
                    cout<<"\n\n";
            }
            //-----------------------------------------
            int k = 0;
            cout<<"\nPregunta 10\n";
            usleep(400000);
            cout <<"\nʘ‿ʘ--¿Cual de las siguientes opciones es un servidor local para PHP?\n";
            cout<<"\n(1)--XAMPP\n";
            cout<<"(2)--Bitnami\n";
            cout<<"(3)--Hostinger\n";
            cin>>i;
            if(k == 3|| k ==2){
                usleep(600000);
                cout<<"ಥ_ಥ--NEEIIN, -- XAMPP es el servidor local que usa PHP, entre otros tantos \n";
                printf("Puntos: %i",puntos);
                cout<<"\n\n";
            }else if(k==1){
                usleep(600000);
                cout<<"ʘ‿ʘ--OOUUUI, Efectivamente XAMPP es un servidor local orientado a PHP entre otros lenguajes\n";
                    puntos = puntos + 1;
                    printf("Puntos: %i",puntos);
                    cout<<"\n\n";
            }
            //-----------------------------------------
            
            cout<<"\nʘ‿ʘ--BUENO, esas fueron todas las preguntas\n";
            cout<<"\nʘ‿ʘ--Como crees que te fue?\n";
            int l = 0;
            cout<<"\n(1)--Bien\n";
            cout<<"(2)--Mal\n";
            cin>>l;
            if(l==1){
                cout<<"ʘ‿ʘ--OJALA, VAMOS A VER\n";
                cout<<"....\n";
                usleep(600000);
                cout<<"....\n";
                usleep(600000);
                cout<<"....\n";
                usleep(600000);
                cout<<"....\n";
                usleep(600000);
                cout<<"....\n";
                usleep(600000);
            }else if(l==2){
                cout<<"ʘ‿ʘ--TENTE FE, VEAMOS\n";
                cout<<"....\n";
                usleep(600000);
                cout<<"....\n";
                usleep(600000);
                cout<<"....\n";
                usleep(600000);
                cout<<"....\n";
                usleep(600000);
                cout<<"....\n";
                usleep(600000);
            }
            
               
               
                  if(puntos >=7){
                      cout<<"\nʘ‿ʘ--TE FUE BASTANTE BIEN, ESTOY ORGULLOSO\n";
                      usleep(600000);
                      cout<<"\nʘ‿ʘ--Tu personaje segun tus puntos es el siguiente:\n\n";
                      usleep(600000);
                      
                           cout<<" ______________________________¶\n";
                           cout<<" ______________________________¶¶\n";
                           cout<<" ________¶____________________¶__¶\n";
                           cout<<" ________¶¶___________________¶_¶_¶¶\n";
                           cout<<" ________¶¶¶_________________¶_¶¶__¶¶\n";
                           cout<<" ________¶¶¶¶________________¶__¶¶__¶¶\n";
                           cout<<" _________¶¶_¶______________¶_¶__¶__ ¶¶\n";
                           cout<<" ________¶_¶¶_¶¶____________¶_¶__¶¶_ ¶¶\n";
                           cout<<" ________¶__¶___¶__________¶_¶¶__¶¶_ ¶¶\n";
                           cout<<" ________¶¶_¶¶___¶_________¶_¶¶¶¶¶¶__ ¶\n";
                           cout<<" _________¶__¶____¶_______¶__¶¶¶_¶¶¶_ ¶\n";
                           cout<<" _________¶__¶_____¶______¶__¶¶¶¶¶¶¶_ ¶\n";
                           cout<<" _________¶¶_¶______¶____¶___¶¶¶¶¶¶¶_¶¶\n";
                           cout<<" __________¶_¶______¶¶__¶___¶¶¶¶¶¶¶¶__¶\n";
                           cout<<" __________¶_¶_______¶_¶¶___¶¶¶¶¶¶¶¶__¶\n";
                           cout<<" __________¶_¶________¶______¶¶¶¶¶¶¶__¶\n";
                           cout<<" __________¶________________¶¶¶¶¶¶¶___¶\n";
                           cout<<" _________¶¶________________¶¶¶¶¶¶¶__¶¶\n";
                           cout<<" _________¶___________________¶¶¶¶___¶¶\n";
                           cout<<" ________¶___________________________¶¶\n";
                           cout<<" ______¶¶___________________________¶¶\n";
                           cout<<" ______¶___________________________¶¶\n";
                           cout<<" _____¶____________________________¶¶\n";
                           cout<<" _____¶____________________________¶\n";
                           cout<<" ____¶_____________________________¶\n";
                           cout<<" ____¶_¶¶¶_________¶¶¶¶____________¶\n";
                           cout<<" ____¶¶___¶_______¶____¶___________¶\n";
                           cout<<" ____¶¶_¶_¶______¶_____¶___________¶\n";
                           cout<<" _____¶_¶¶¶______¶__¶¶¶¶___________¶\n";
                           cout<<" __¶¶¶¶¶¶¶_______¶__¶¶¶¶___________¶\n";
                           cout<<" _¶¶¶¶¶¶¶¶¶______¶¶¶¶¶¶____________¶\n";
                           cout<<" ¶¶¶¶¶¶¶¶¶¶¶¶______________________¶\n";
                           cout<<" ¶¶¶¶¶¶¶¶¶¶¶¶______________________¶\n";
                           cout<<" ¶¶¶¶¶¶¶¶¶¶¶¶______________________¶\n";
                           cout<<" ¶¶¶¶¶¶¶¶¶¶¶_________¶¶¶___________¶\n";
                           cout<<" _¶¶¶¶¶¶¶¶¶_________¶______________¶\n";
                           cout<<" __¶¶¶¶¶¶¶_________¶_______________¶\n";
                           cout<<" __¶¶¶¶¶_________¶¶________________¶¶\n";
                           cout<<" ___¶¶_________¶¶__________________¶¶¶\n";
                           cout<<" ____¶¶¶¶¶¶¶¶¶¶___________________¶¶__¶\n";
                           cout<<" _____¶¶¶¶______________________¶¶¶____¶\n";
                           cout<<" _______¶¶_____________________¶¶¶______¶\n";
                           cout<<" _________¶¶¶__________________¶¶________¶\n";
                           cout<<" ___________¶¶________________¶¶¶________¶\n";
                           cout<<" ___________¶¶_______________¶¶¶_________¶\n";
                           cout<<" ___________¶¶¶¶¶__________¶¶¶¶__________¶\n";
                           cout<<" __________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶__________¶¶\n";
                           cout<<" _________¶¶________¶¶¶¶¶¶¶¶¶__________¶¶\n";
                           cout<<" _________¶¶___________¶¶¶____________¶¶\n";
                           cout<<" _________¶¶____________¶____________¶¶\n";

                            cout<<"\nUN PERRO, FELICIDADES\n";
                  }else if(puntos <7 && puntos > 5){
                      
                      cout<<"ʘ‿ʘ--No te fue mal, pero tampoco bien\n";
                       cout<<"\nʘ‿ʘ--Tu personaje segun tus puntos es el siguiente:\n\n";
                       
                       
                       
                       
                                cout<<"──────────────────────────█\n";
                                cout<<"────────────────────────████\n";
                                cout<<"────────────────────────█▓███\n";
                                cout<<"─────────────────────███▓▓▓██\n";
                                cout<<"───────────────────███▓▓▓▓▓▓██\n";
                                cout<<"──────────────────██▓▓▓▓▓▓▓▓▓█\n";
                                cout<<"──────────────────█▓▓▓▓▓▓▓▓▓▓█ \n";
                                cout<<"─────────────────█▓▓▓▓▓▓▓▓▓████\n";
                                cout<<"─────────────────███▓▓▓▓▓▓██──█▄\n";
                                cout<<"────────────────█▓▓██▓▓▓▓██─▄███\n";
                                cout<<"───────────────█▒▒▒▒██▓▓▓█──█─██\n";
                                cout<<"──────────────█▒▒▒▒▒▒██▓█───████\n";
                                cout<<"─────────────█▒▒███▒▒▒█▓█───▀███\n";
                                cout<<"─────────────█▒█▒▒▒█▒▒▒██──────█\n";
                                cout<<"─────────────█▒█▒▒▒▒█▒▒██──────█\n";
                                cout<<"─────────────█▒▒█▒▒▒▒▒▒███────██▄\n";
                                cout<<"─────────────█▒▒▒█▒▒▒▒▒████──██▒█\n";
                                cout<<"─────────────▀█▒▒▒█▒▒▒▒██▒████▒▒█\n";
                                cout<<"─────▄██▄─────▀█▒▒▒▒▒▒███▒▒▒▒▒▒▒█▄\n";
                                cout<<"─────█▓▓██─────▀█▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒█\n";
                                cout<<"─────█▓▓▓█──────▀█▒▒▒█▒▒▒▒▒▒▒▒▒▒▒█\n";
                                cout<<"─────██▓▓██──────▀█▒██▒▒▒▒▒▒▒▒▒▒▒█\n";
                                cout<<"──────█▓▓▓█───────████▒▒▒▒████▒▒▒█\n";
                                cout<<"──────██▓▓█───────████▒▒▒█▓▓▓▓█▒██\n";
                                cout<<"───────█▓▓█──────██▓██▒▒▒█▓▓▓▓████\n";
                                cout<<"───────█▓▓█─────██▓▓▓██▒▒█▓▓▓▓▓█▒█\n";
                                cout<<"───────█▓▓█────██▓▓▓▓▓██▒▒█▓▓▓▓███\n";
                                cout<<"──────▄█▓▓█────██▓▓▓▓▓▓███████▓▓▓█\n";
                                cout<<"──────██▓▓█───██▓▓▓▓▓▓▓▓█▀──▀██▓▓█\n";
                                cout<<"─────██▓▓██──██▓▓▓▓▓▓▓▓▓▓█────█▓▓█\n";
                                cout<<"────██▓▓██──██▓▓▓▓▓▓▓▓▓▓▓██───█▓▓█\n";
                                cout<<"───██▓▓██───█▓▓▓▓▓███▓▓▓▓▓█───█▓▓█\n";
                                cout<<"──██▓▓██───██▓▓▓▓██─██▓▓▓▓▓█─█▓▓▓█\n";
                                cout<<"─██▓▓██────█▓▓▓▓▓█───█▓▓▓▓▓▓█▓▓▓██\n";
                                cout<<"▄█▓▓██─────█▓▓▓▓▓█───██▓▓▓▓▓▓▓▓██▀\n";
                                cout<<"█▓▓██─────██▓▓▓▓▓█────█▓▓▓▓▓▓▓██▀\n";
                                cout<<"█▓▓█──────█▓▓▓▓▓▓█────██▓▓▓▓▓██▀\n";
                                cout<<"█▓▓█─────██▓▓▓▓▓▓█─────██▓▓▓▓██▄\n";
                                cout<<"█▓▓█─────█▓▓▓▓▓▓█─────▄████▓██▓█▄\n";
                                cout<<"█▓▓█─────█▓▓▓▓▓▓█────██▓▓▓███▓▓▓█\n";
                                cout<<"█▓▓█─────█▓▓▓▓▓▓█───█▓▓▓▓▓▓▓▓▓▓██\n";
                                cout<<"█▓▓█─────█▓▓▓▓▓▓▓█─█▓▓▓▓▓▓▓▓▓▓▓██\n";
                                cout<<"█▓▓█─────██▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓██\n";
                                cout<<"█▓▓██─────█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██\n";
                                cout<<"██▓▓██────█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██\n";
                                cout<<"─██▓▓█▄─▄██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██\n";
                                cout<<"──██▓▓█████▓▓▓▓▓▓▓▓▓▓▓▓▓▓███\n";
                                cout<<"───██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██\n";
                                cout<<"────█████████▓▓▓▓▓▓▓▓▓▓▓██▄\n";
                                cout<<"───────────▀████▓▓▓▓▓▓▓▓▓█████▄\n";
                                cout<<"─────────────▀██████▓▓▓▓▓▓▓▓▓▓██\n";
                                cout<<"─────────────────▀███████▓▓▓▓▓██\n";
                                cout<<"──────────────────────▀████████▀\n";
                                
                            cout<<"\nUN CHANGO, suerte para la proxima\n";

                }else if(puntos <=4 ){
                  
                     cout<<"ಥ_ಥ--TE FUE MUY MAL\n";
                       cout<<"\nTu personaje segun tus puntos es el siguiente:\n\n";


                                            cout<<"┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼▒\n";
                                            cout<<"┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼▒▒▒\n";
                                            cout<<"┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼▒▒░▒\n";
                                            cout<<"┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼▒▒░░▒\n";
                                            cout<<"┼┼┼┼┼┼┼┼┼┼┼████▒▒▒░░▒\n";
                                            cout<<"┼┼┼┼┼┼┼┼┼███████▒▒░░▒█\n";
                                            cout<<"┼┼┼┼┼┼┼┼█████████▒▒████\n";
                                            cout<<"┼┼┼┼┼┼┼████████▒█▒▒█████\n";
                                            cout<<"┼┼┼┼┼┼┼████████▒▒▒▒██████\n";
                                            cout<<"┼┼┼┼┼┼████████▒▒▒▒▒███████\n";
                                            cout<<"┼┼┼┼┼┼██████▒█▒▒▒▒▒████████\n";
                                            cout<<"┼┼┼┼┼████▒█▒▒▒▒▒▒▒██████████\n";
                                            cout<<"┼┼┼┼┼┼░▒▒▒░▒▒▒▒▒▒▒███████████\n";
                                            cout<<"┼┼┼┼┼░▒▒▒▒██░▒▒▒▒▒▒███████████\n";
                                            cout<<"┼┼┼┼┼░▒▒▒▒██░▒▒▒▒▒▒███████████\n";
                                            cout<<"┼┼┼┼░▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒█████████\n";
                                            cout<<"┼┼┼┼░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█████████\n";
                                            cout<<"┼┼┼░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██▒██████\n";
                                            cout<<"┼┼░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██▒██████\n";
                                            cout<<"┼┼░▒█▒▒▒▒▒▒▒▒▒▒▒░┼░▒▒█▒▒██████\n";
                                            cout<<"┼┼░▒██▒▒▒▒▒▒▒▒░░┼┼┼░▒▒▒▒██████\n";
                                            cout<<"┼┼░▒▒▒▒▒▒█▒░░┼┼┼┼┼┼┼░▒▒▒██▒███\n";
                                            cout<<"┼┼░▒▒▒▒▒█▒▒░┼┼┼┼┼┼┼┼░▒▒▒██▒███\n";
                                            cout<<"┼┼┼░▒▒▒██▒░┼┼┼┼┼┼┼┼┼┼░▒▒██▒███\n";
                                            cout<<"┼┼┼┼┼▒█▒░┼┼┼┼┼┼┼┼┼┼┼┼┼░▒▒█▒███\n";
                                            cout<<"┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼░▒▒█▒███\n";
                                            cout<<"┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼░▒▒▒███\n";
                                            cout<<"┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼░▒░█░█\n";
                                            
                                            cout<<"\nUN BURRO, TIENES QUE ESTUDIAR\n";

                }
             cout<<"ʘ‿ʘ--OJALA VOLVERTE A VER, CUIDATE\n";
    
        
    }else if(a == 2){
        cout<<"(╬ ಠ益ಠ)--Chinga tu madre pinche mamon\n";
        string nombre = "";
        cout<<"(╬ ಠ益ಠ)--Dime tu puto nombre\n";
        cin>>nombre;
        cout<<"\n(╬ ಠ益ಠ)--JAJAJJAJAJJA " + nombre + ", se te paso de verga tu jefa\n";
        usleep(400000);
        cout<<"\n(╬ ಠ益ಠ)--A ver te voy a hacer unas preguntas sobre PHP, veamos si tu nombre es lo unico que tienes de pendejo\n";
        usleep(400000);
        cout<<"(╬ ಠ益ಠ)--Lo haremos de la siguiente manera, te dare 10 preguntas\n(╬ ಠ益ಠ)--cada pregunta que aciertes es un punto,";
        usleep(400000);
        cout<<"(╬ ಠ益ಠ)--al final contaremos los puntos\n(╬ ಠ益ಠ)--y te asignare un personaje en funcion a tu calificacion, supongo que te tocara el burro.\n";
        usleep(400000);
        int b = 0;
        cout<<"(╬ ಠ益ಠ)--Antes que nada,¿Aunque sea sabes que es PHP?\n\n";
        cout<<"(1)--SII\n";
        cout<<"(2)--No:(\n";
        cin>>b;
         if(b ==1){
                cout<<"(╬ ಠ益ಠ)--¿Muy verga?, dime que es\n";
                int c=0;
                cout<<"\n(1)--Una tribu nomada venezolana\n";
                cout<<"(2)--Es un lenguaje de programación orientado a aplicaciones web dinámicas.\n";
                cout<<"(3)--Partido politico mexicano\n";
                cin>>c;
                if(c==1 || c == 3){
                    cout<<"(╬ ಠ益ಠ)--PENDEJOOOO, PHP es un lenguaje de programación orientado a aplicaciones web dinámicas.\n";
                    printf("Puntos: %i",puntos);
                    cout<<"\n\n";
                }else if(b==2){
                    cout<<"(╬ ಠ益ಠ)--MMMM, efectivamente PHP es un lenguaje de programacion\n";
                    puntos = puntos + 1;
                    printf("Puntos: %i",puntos);
                    cout<<"\n\n";
                }
            }else if(b==2){
                cout<<"(╬ ಠ益ಠ)--JAJAJA si me imaginaba, te voy a dar unas pistas, pero pierdes un punto por pendejo\n";
                usleep(400000);
                cout<<"(╬ ಠ益ಠ)--PHP es un lenguaje de programación de uso general que se adapta especialmente al desarrollo web.\n";  
                usleep(400000);
                cout<<"(╬ ಠ益ಠ)--Fue creado inicialmente por el programador danés-canadiense Rasmus Lerdorf en 1994.\n";
                usleep(400000);
                cout<<"(╬ ಠ益ಠ)--PHP originalmente significaba Personal Home Page (Página personal),\n(╬ ಠ益ಠ)--pero ahora significa el inicialismo recursivo PHP: Hypertext Preprocessor.\n";   
                usleep(400000);
                cout<<"(╬ ಠ益ಠ)--Bien, a ver si con esto se te quita lo estupido, continuemos\n\n";
            }
            
            
            //-----------------------------------------
            int c = 0;
            cout<<"\nPregunta 2\n";
            usleep(400000);
            cout <<"\n(╬ ಠ益ಠ)--¿Quien Invento PHP?\n";
            cout<<"\n(1)--Andres Manuel Lopez Obrador\n";
            cout<<"(2)--Kevin Yahir Duarte Salazar\n";
            cout<<"(3)--Rasmus Lerdorf\n";
            cin>>c;
            if(c == 1|| c ==2){
                usleep(600000);
                cout<<"(╬ ಠ益ಠ)--MONGOLOOOOO, PHP fue inventado por Rasmus Lerdorf\n";
                printf("Puntos: %i",puntos);
                cout<<"\n\n";
            }else if(c==3){
                usleep(600000);
                cout<<"(╬ ಠ益ಠ)--Correcto, el programador danes Rasmus Lerdorf fue el que invento PHP\n";
                    puntos = puntos + 1;
                    printf("Puntos: %i",puntos);
                    cout<<"\n\n";
            }
            //-----------------------------------------
            int d = 0;
            cout<<"\nPregunta 3\n";
            usleep(400000);
            cout <<"\n(╬ ಠ益ಠ)--¿Que significan las siglas PHP?\n";
            cout<<"\n(1)--Hypertext Preprocessor\n";
            cout<<"(2)--Pablo hijo de puta\n";
            cout<<"(3)--Personal Home Page\n";
            cin>>d;
            if(d == 3|| d ==2){
                usleep(600000);
                cout<<"(╬ ಠ益ಠ)--TAN GRANDOTE Y TAN PENDEJO, PHP significa Hypertext Preprocessor\n";
                printf("Puntos: %i",puntos);
                cout<<"\n\n";
            }else if(d==1){
                usleep(600000);
                cout<<"(╬ ಠ益ಠ)--BIEN, Php significa Hypertext Preprocessor\n";
                    puntos = puntos + 1;
                    printf("Puntos: %i",puntos);
                    cout<<"\n\n";
            }
            //-----------------------------------------
            int e = 0;
            cout<<"\nPregunta 4\n";
            usleep(400000);
            cout <<"\n(╬ ಠ益ಠ)--¿En que año se fundo PHP?\n";
            cout<<"\n(1)--21A.C\n";
            cout<<"(2)--1994\n";
            cout<<"(3)--2068\n";
            cin>>e;
            if(e == 3|| e ==1){
                usleep(600000);
                cout<<"(╬ ಠ益ಠ)--JAJAJJAJAJAJA MAL, PHP se fundo en 1994\n ";
                printf("Puntos: %i",puntos);
                cout<<"\n\n";
            }else if(e==2){
                usleep(600000);
                cout<<"(╬ ಠ益ಠ)--SI, CORRECTO :)\n";
                    puntos = puntos + 1;
                    printf("Puntos: %i",puntos);
                    cout<<"\n\n";
            }
            //-----------------------------------------
             int f = 0;
            cout<<"\nPregunta 5\n";
            usleep(400000);
            cout <<"\n(╬ ಠ益ಠ)--¿Cual es la finalidad de PHP?\n";
            cout<<"\n(1)--Desarrollo de guantes\n";
            cout<<"(2)--Inteligencia artificial\n";
            cout<<"(3)--Hacer mas dinamicas las paginas web\n";
           
            cin>>e;
            if(e == 2|| e ==1){
                usleep(600000);
                cout<<"(╬ ಠ益ಠ)--FALLASTEEEEEEEEE JAJAJAJAJA, PHP sirve para hacer paginas web y acciones del lado del servidor \n";
                printf("Puntos: %i",puntos);
                cout<<"\n\n";
            }else if(e==3){
                usleep(600000);
                cout<<"(╬ ಠ益ಠ)--ACERTASTE, Efectivamente PHP esta mas orientado a paginas web y acciones del lado del servidor :)\n";
                    puntos = puntos + 1;
                    printf("Puntos: %i",puntos);
                    cout<<"\n\n";
            }
            //-----------------------------------------
            if(puntos >= 3){
                cout<<"\n(╬ ಠ益ಠ)-----------------DEBO DE RECONOCER QUE POR TU CARA ESPERABA MENOS, NO VAS TAN MAL-------------------\n";
            }else{
                cout<<"\n(╬ ಠ益ಠ)---------------JAJAJJAJAJAJA, PINCHE CHANGO BAJADO DE UN ARBOL VAS DE LA VERGA---------------------\n";
            }
            //-----------------------------------------
             int g = 0;
            cout<<"\nPregunta 6\n";
            usleep(400000);
            cout <<"\n(╬ ಠ益ಠ)--¿Cual de estas paginas utiliza PHP?\n";
            cout<<"\n(1)--ClickSocial\n";
            cout<<"(2)--Tortilleria don toño\n";
            cout<<"(3)--Youtube\n";
            cin>>g;
            if(g == 2|| g ==3){
                usleep(600000);
                cout<<"(╬ ಠ益ಠ)--PUÑETAAAAAS, --ClickSocial es la pagina desarrollada en PHP \n";
                printf("Puntos: %i",puntos);
                cout<<"\n\n";
            }else if(g==1){
                usleep(600000);
                cout<<"(╬ ಠ益ಠ)--BIEN, Efectivamente Click social fue desarrollada en PHP\n";
                    puntos = puntos + 1;
                    printf("Puntos: %i",puntos);
                    cout<<"\n\n";
            }
            //-----------------------------------------
             int h = 0;
            cout<<"\nPregunta 7\n";
            usleep(400000);
            cout <<"\n(╬ ಠ益ಠ)--¿Cual de estas paginas NO utiliza PHP?\n";
            cout<<"\n(1)--Facebook\n";
            cout<<"(2)--Wikipedia\n";
            cout<<"(3)--Friv Juegos\n";
            cin>>h;
            if(h == 2|| h ==1){
                usleep(600000);
                cout<<"(╬ ಠ益ಠ)--TODO TONTO, -- Friv juegos es la pagina que no usa PHP \n";
                printf("Puntos: %i",puntos);
                cout<<"\n\n";
            }else if(h==3){
                usleep(600000);
                cout<<"(╬ ಠ益ಠ)--MMM, Efectivamente Friv Juegos no utiliza PHP\n";
                    puntos = puntos + 1;
                    printf("Puntos: %i",puntos);
                    cout<<"\n\n";
            }
            //-----------------------------------------
            
            int i = 0;
            cout<<"\nPregunta 8\n";
            usleep(400000);
            cout <<"\n(╬ ಠ益ಠ)--¿Cual de los siguientes frameworks es de PHP?\n";
            cout<<"\n(1)--Node\n";
            cout<<"(2)--Laravel\n";
            cout<<"(3)--.NET\n";
            cin>>i;
            if(i == 3|| i ==1){
                usleep(600000);
                cout<<"(╬ ಠ益ಠ)--JAJAJA PUÑETAS, -- Laravel es uno de los frameworks que usa PHP \n";
                printf("Puntos: %i",puntos);
                cout<<"\n\n";
            }else if(i==2){
                usleep(600000);
                cout<<"(╬ ಠ益ಠ)--SI, Laravel es uno de los frameworks mas usados de PHP\n";
                    puntos = puntos + 1;
                    printf("Puntos: %i",puntos);
                    cout<<"\n\n";
            }
            //-----------------------------------------
            int j = 0;
            cout<<"\nPregunta 9\n";
            usleep(400000);
            cout <<"\n(╬ ಠ益ಠ)--¿Cual de las siguientes lineas de codigo pertence a PHP?\n";
            cout<<"\n(1)--$rowA = $sqlA->fetch_array();\n";
            cout<<"(2)--var elemento = document.getElementById('resultado');\n";
            cout<<"(3)--this.substring(0, 1).toUpperCase().plus(this.substring(1))\n";
            cin>>i;
            if(j == 3|| j ==2){
                usleep(600000);
                cout<<"(╬ ಠ益ಠ)--SABIA QUE NO SABIAS PROGRAMAS, $rowA = $sqlA->fetch_array(); este uno de los tantos metodos de extraccion de datos que usa php \n";
                printf("Puntos: %i",puntos);
                cout<<"\n\n";
            }else if(j==1){
                usleep(600000);
                cout<<"(╬ ಠ益ಠ)--BIEN, Efectivamente esa linea de codigo la usa PHP para guardar un dato de un arreglo en una variable\n";
                    puntos = puntos + 1;
                    printf("Puntos: %i",puntos);
                    cout<<"\n\n";
            }
            //-----------------------------------------
            int k = 0;
            cout<<"\nPregunta 10\n";
            usleep(400000);
            cout <<"\n¿Cual de las siguientes opciones es un servidor local para PHP?\n";
            cout<<"\n(1)--XAMPP\n";
            cout<<"(2)--Bitnami\n";
            cout<<"(3)--Hostinger\n";
            cin>>i;
            if(k == 3|| k ==2){
                usleep(600000);
                cout<<"(╬ ಠ益ಠ)--PINCHE GATO, -- XAMPP es el servidor local que usa PHP, entre otros tantos \n";
                printf("Puntos: %i",puntos);
                cout<<"\n\n";
            }else if(k==1){
                usleep(600000);
                cout<<"(╬ ಠ益ಠ)--OKEY, Efectivamente XAMPP es un servidor local orientado a PHP entre otros lenguajes\n";
                    puntos = puntos + 1;
                    printf("Puntos: %i",puntos);
                    cout<<"\n\n";
            }
            //-----------------------------------------
            
            //-----------------------------------------
            
            cout<<"\n(╬ ಠ益ಠ)--BUENO, esas fueron todas las preguntas\n";
            cout<<"(╬ ಠ益ಠ)--Como me caes mal te voy a quitar un punto del total\n";
            puntos = puntos - 1;
            cout<<"\n(╬ ಠ益ಠ)--Como crees que te fue?\n";
            int l = 0;
            cout<<"\n(1)--Bien\n";
            cout<<"(2)--Mal\n";
            cin>>l;
            if(l==1){
                cout<<"(╬ ಠ益ಠ)--ESPERO QUE NO, VAMOS A VER\n";
                cout<<"....\n";
                usleep(600000);
                cout<<"....\n";
                usleep(600000);
                cout<<"....\n";
                usleep(600000);
                cout<<"....\n";
                usleep(600000);
                cout<<"....\n";
                usleep(600000);
            }else if(l==2){
                cout<<"(╬ ಠ益ಠ)--OJALA, VEAMOS\n";
                cout<<"....\n";
                usleep(600000);
                cout<<"....\n";
                usleep(600000);
                cout<<"....\n";
                usleep(600000);
                cout<<"....\n";
                usleep(600000);
                cout<<"....\n";
                usleep(600000);
            }
            
               
               
                  if(puntos >=7){
                      cout<<"\n(╬ ಠ益ಠ)--MMMMM SUPONGO QUE HICISTE TRAMPAS\n";
                      usleep(600000);
                      cout<<"\n(╬ ಠ益ಠ)--Tu personaje segun tus puntos es el siguiente:\n\n";
                      usleep(600000);
                      
                           cout<<" ______________________________¶\n";
                           cout<<" ______________________________¶¶\n";
                           cout<<" ________¶____________________¶__¶\n";
                           cout<<" ________¶¶___________________¶_¶_¶¶\n";
                           cout<<" ________¶¶¶_________________¶_¶¶__¶¶\n";
                           cout<<" ________¶¶¶¶________________¶__¶¶__¶¶\n";
                           cout<<" _________¶¶_¶______________¶_¶__¶__ ¶¶\n";
                           cout<<" ________¶_¶¶_¶¶____________¶_¶__¶¶_ ¶¶\n";
                           cout<<" ________¶__¶___¶__________¶_¶¶__¶¶_ ¶¶\n";
                           cout<<" ________¶¶_¶¶___¶_________¶_¶¶¶¶¶¶__ ¶\n";
                           cout<<" _________¶__¶____¶_______¶__¶¶¶_¶¶¶_ ¶\n";
                           cout<<" _________¶__¶_____¶______¶__¶¶¶¶¶¶¶_ ¶\n";
                           cout<<" _________¶¶_¶______¶____¶___¶¶¶¶¶¶¶_¶¶\n";
                           cout<<" __________¶_¶______¶¶__¶___¶¶¶¶¶¶¶¶__¶\n";
                           cout<<" __________¶_¶_______¶_¶¶___¶¶¶¶¶¶¶¶__¶\n";
                           cout<<" __________¶_¶________¶______¶¶¶¶¶¶¶__¶\n";
                           cout<<" __________¶________________¶¶¶¶¶¶¶___¶\n";
                           cout<<" _________¶¶________________¶¶¶¶¶¶¶__¶¶\n";
                           cout<<" _________¶___________________¶¶¶¶___¶¶\n";
                           cout<<" ________¶___________________________¶¶\n";
                           cout<<" ______¶¶___________________________¶¶\n";
                           cout<<" ______¶___________________________¶¶\n";
                           cout<<" _____¶____________________________¶¶\n";
                           cout<<" _____¶____________________________¶\n";
                           cout<<" ____¶_____________________________¶\n";
                           cout<<" ____¶_¶¶¶_________¶¶¶¶____________¶\n";
                           cout<<" ____¶¶___¶_______¶____¶___________¶\n";
                           cout<<" ____¶¶_¶_¶______¶_____¶___________¶\n";
                           cout<<" _____¶_¶¶¶______¶__¶¶¶¶___________¶\n";
                           cout<<" __¶¶¶¶¶¶¶_______¶__¶¶¶¶___________¶\n";
                           cout<<" _¶¶¶¶¶¶¶¶¶______¶¶¶¶¶¶____________¶\n";
                           cout<<" ¶¶¶¶¶¶¶¶¶¶¶¶______________________¶\n";
                           cout<<" ¶¶¶¶¶¶¶¶¶¶¶¶______________________¶\n";
                           cout<<" ¶¶¶¶¶¶¶¶¶¶¶¶______________________¶\n";
                           cout<<" ¶¶¶¶¶¶¶¶¶¶¶_________¶¶¶___________¶\n";
                           cout<<" _¶¶¶¶¶¶¶¶¶_________¶______________¶\n";
                           cout<<" __¶¶¶¶¶¶¶_________¶_______________¶\n";
                           cout<<" __¶¶¶¶¶_________¶¶________________¶¶\n";
                           cout<<" ___¶¶_________¶¶__________________¶¶¶\n";
                           cout<<" ____¶¶¶¶¶¶¶¶¶¶___________________¶¶__¶\n";
                           cout<<" _____¶¶¶¶______________________¶¶¶____¶\n";
                           cout<<" _______¶¶_____________________¶¶¶______¶\n";
                           cout<<" _________¶¶¶__________________¶¶________¶\n";
                           cout<<" ___________¶¶________________¶¶¶________¶\n";
                           cout<<" ___________¶¶_______________¶¶¶_________¶\n";
                           cout<<" ___________¶¶¶¶¶__________¶¶¶¶__________¶\n";
                           cout<<" __________¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶__________¶¶\n";
                           cout<<" _________¶¶________¶¶¶¶¶¶¶¶¶__________¶¶\n";
                           cout<<" _________¶¶___________¶¶¶____________¶¶\n";
                           cout<<" _________¶¶____________¶____________¶¶\n";

                            cout<<"\nUN PERRO, FELICIDADES\n";
                  }else if(puntos <7 && puntos > 5){
                      
                      cout<<"(╬ ಠ益ಠ)--JAJAJJAJAJAJA pinche mediocre\n";
                       cout<<"\n(╬ ಠ益ಠ)--Tu personaje segun tus puntos es el siguiente:\n\n";
                       
                       
                       
                       
                                cout<<"──────────────────────────█\n";
                                cout<<"────────────────────────████\n";
                                cout<<"────────────────────────█▓███\n";
                                cout<<"─────────────────────███▓▓▓██\n";
                                cout<<"───────────────────███▓▓▓▓▓▓██\n";
                                cout<<"──────────────────██▓▓▓▓▓▓▓▓▓█\n";
                                cout<<"──────────────────█▓▓▓▓▓▓▓▓▓▓█ \n";
                                cout<<"─────────────────█▓▓▓▓▓▓▓▓▓████\n";
                                cout<<"─────────────────███▓▓▓▓▓▓██──█▄\n";
                                cout<<"────────────────█▓▓██▓▓▓▓██─▄███\n";
                                cout<<"───────────────█▒▒▒▒██▓▓▓█──█─██\n";
                                cout<<"──────────────█▒▒▒▒▒▒██▓█───████\n";
                                cout<<"─────────────█▒▒███▒▒▒█▓█───▀███\n";
                                cout<<"─────────────█▒█▒▒▒█▒▒▒██──────█\n";
                                cout<<"─────────────█▒█▒▒▒▒█▒▒██──────█\n";
                                cout<<"─────────────█▒▒█▒▒▒▒▒▒███────██▄\n";
                                cout<<"─────────────█▒▒▒█▒▒▒▒▒████──██▒█\n";
                                cout<<"─────────────▀█▒▒▒█▒▒▒▒██▒████▒▒█\n";
                                cout<<"─────▄██▄─────▀█▒▒▒▒▒▒███▒▒▒▒▒▒▒█▄\n";
                                cout<<"─────█▓▓██─────▀█▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒█\n";
                                cout<<"─────█▓▓▓█──────▀█▒▒▒█▒▒▒▒▒▒▒▒▒▒▒█\n";
                                cout<<"─────██▓▓██──────▀█▒██▒▒▒▒▒▒▒▒▒▒▒█\n";
                                cout<<"──────█▓▓▓█───────████▒▒▒▒████▒▒▒█\n";
                                cout<<"──────██▓▓█───────████▒▒▒█▓▓▓▓█▒██\n";
                                cout<<"───────█▓▓█──────██▓██▒▒▒█▓▓▓▓████\n";
                                cout<<"───────█▓▓█─────██▓▓▓██▒▒█▓▓▓▓▓█▒█\n";
                                cout<<"───────█▓▓█────██▓▓▓▓▓██▒▒█▓▓▓▓███\n";
                                cout<<"──────▄█▓▓█────██▓▓▓▓▓▓███████▓▓▓█\n";
                                cout<<"──────██▓▓█───██▓▓▓▓▓▓▓▓█▀──▀██▓▓█\n";
                                cout<<"─────██▓▓██──██▓▓▓▓▓▓▓▓▓▓█────█▓▓█\n";
                                cout<<"────██▓▓██──██▓▓▓▓▓▓▓▓▓▓▓██───█▓▓█\n";
                                cout<<"───██▓▓██───█▓▓▓▓▓███▓▓▓▓▓█───█▓▓█\n";
                                cout<<"──██▓▓██───██▓▓▓▓██─██▓▓▓▓▓█─█▓▓▓█\n";
                                cout<<"─██▓▓██────█▓▓▓▓▓█───█▓▓▓▓▓▓█▓▓▓██\n";
                                cout<<"▄█▓▓██─────█▓▓▓▓▓█───██▓▓▓▓▓▓▓▓██▀\n";
                                cout<<"█▓▓██─────██▓▓▓▓▓█────█▓▓▓▓▓▓▓██▀\n";
                                cout<<"█▓▓█──────█▓▓▓▓▓▓█────██▓▓▓▓▓██▀\n";
                                cout<<"█▓▓█─────██▓▓▓▓▓▓█─────██▓▓▓▓██▄\n";
                                cout<<"█▓▓█─────█▓▓▓▓▓▓█─────▄████▓██▓█▄\n";
                                cout<<"█▓▓█─────█▓▓▓▓▓▓█────██▓▓▓███▓▓▓█\n";
                                cout<<"█▓▓█─────█▓▓▓▓▓▓█───█▓▓▓▓▓▓▓▓▓▓██\n";
                                cout<<"█▓▓█─────█▓▓▓▓▓▓▓█─█▓▓▓▓▓▓▓▓▓▓▓██\n";
                                cout<<"█▓▓█─────██▓▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓██\n";
                                cout<<"█▓▓██─────█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██\n";
                                cout<<"██▓▓██────█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██\n";
                                cout<<"─██▓▓█▄─▄██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██\n";
                                cout<<"──██▓▓█████▓▓▓▓▓▓▓▓▓▓▓▓▓▓███\n";
                                cout<<"───██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██\n";
                                cout<<"────█████████▓▓▓▓▓▓▓▓▓▓▓██▄\n";
                                cout<<"───────────▀████▓▓▓▓▓▓▓▓▓█████▄\n";
                                cout<<"─────────────▀██████▓▓▓▓▓▓▓▓▓▓██\n";
                                cout<<"─────────────────▀███████▓▓▓▓▓██\n";
                                cout<<"──────────────────────▀████████▀\n";
                                
                            cout<<"\nUN CHANGO, suerte para la proxima\n";

                }else if(puntos <=4 ){
                  
                     cout<<"(╬ ಠ益ಠ)--MUY VERGERO Y NO SACASTE NI 4 BIEN JAJAJAJA\n";
                       cout<<"\n(╬ ಠ益ಠ)--Tu personaje segun tus puntos es el siguiente:\n\n";


                                            cout<<"┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼▒\n";
                                            cout<<"┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼▒▒▒\n";
                                            cout<<"┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼▒▒░▒\n";
                                            cout<<"┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼▒▒░░▒\n";
                                            cout<<"┼┼┼┼┼┼┼┼┼┼┼████▒▒▒░░▒\n";
                                            cout<<"┼┼┼┼┼┼┼┼┼███████▒▒░░▒█\n";
                                            cout<<"┼┼┼┼┼┼┼┼█████████▒▒████\n";
                                            cout<<"┼┼┼┼┼┼┼████████▒█▒▒█████\n";
                                            cout<<"┼┼┼┼┼┼┼████████▒▒▒▒██████\n";
                                            cout<<"┼┼┼┼┼┼████████▒▒▒▒▒███████\n";
                                            cout<<"┼┼┼┼┼┼██████▒█▒▒▒▒▒████████\n";
                                            cout<<"┼┼┼┼┼████▒█▒▒▒▒▒▒▒██████████\n";
                                            cout<<"┼┼┼┼┼┼░▒▒▒░▒▒▒▒▒▒▒███████████\n";
                                            cout<<"┼┼┼┼┼░▒▒▒▒██░▒▒▒▒▒▒███████████\n";
                                            cout<<"┼┼┼┼┼░▒▒▒▒██░▒▒▒▒▒▒███████████\n";
                                            cout<<"┼┼┼┼░▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒█████████\n";
                                            cout<<"┼┼┼┼░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█████████\n";
                                            cout<<"┼┼┼░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██▒██████\n";
                                            cout<<"┼┼░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██▒██████\n";
                                            cout<<"┼┼░▒█▒▒▒▒▒▒▒▒▒▒▒░┼░▒▒█▒▒██████\n";
                                            cout<<"┼┼░▒██▒▒▒▒▒▒▒▒░░┼┼┼░▒▒▒▒██████\n";
                                            cout<<"┼┼░▒▒▒▒▒▒█▒░░┼┼┼┼┼┼┼░▒▒▒██▒███\n";
                                            cout<<"┼┼░▒▒▒▒▒█▒▒░┼┼┼┼┼┼┼┼░▒▒▒██▒███\n";
                                            cout<<"┼┼┼░▒▒▒██▒░┼┼┼┼┼┼┼┼┼┼░▒▒██▒███\n";
                                            cout<<"┼┼┼┼┼▒█▒░┼┼┼┼┼┼┼┼┼┼┼┼┼░▒▒█▒███\n";
                                            cout<<"┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼░▒▒█▒███\n";
                                            cout<<"┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼░▒▒▒███\n";
                                            cout<<"┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼░▒░█░█\n";
                                            
                                            cout<<"\nUN BURRO, suerte para la proxima\n";

                }
            
            cout<<"(╬ ಠ益ಠ)--OJALA NO VOLVERTE A VER, ADIOS\n";
        
    }else{
        cout<<"ಠ_ಠ--Venga carnal no es tan dificil, escoge una opcion correcta\n\n";
    }
    
}
