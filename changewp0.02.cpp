/*
   ChangeWP

  A program written in c that allows rotating the desktop background
  at a given time by taking random images from a folder. 
  This program was designed to work with Mate and tested on Linux Mint Mate.

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2, or (at your option)
  any later version.
 
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
 
  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
  02111-1307, USA. https://www.gnu.org/licenses/gpl-3.0.en.html
 
  Written by: Alejandro Cannata <jorch.yr@gmail.com>

*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


static const char uso[]
    =   "\n"
        " Backgorund changer by JorchYR \n"
        " version: 0.02\n\n\n\n"
        " changewp -t 60 -d /home/user/fondos\n\n"
        " Opciones:\n"
        "         -t <numero> Seleciona el intervalo de tiempo en segundo. ej: -t 60\n"
        "         -d <ubicacion> Seleciona la carpeta de imagenes. ej:/home/usuario/fondos\n"
        "\n";


int main(int argc, char *argv[])
{
    // variables de configuracion
    int Tiempo= 0;
    int control1 = 0;
    int control2 = 0;
    char Dir[500];
    char st1[100];
    char st2[22];
    char *cmd;
    
    /*
     Configuracion:
    
      -h -> Muestra el menu de ayuda
      -t -> Seleciona el tiempo entre imagenes
      -d -> Seleciona el directorio donde estan las imagenes

    */
    while ((++argv)[0])
    {
            if (argv[0][0] == '-' )
            {
                    switch (argv[0][1])  {

                            default:
                                    printf("\nOpcion -%c desconocida. Use -h para ayuda. \n\n", argv[0][1]);
                                    break;
                            case 'h':
                                    printf("%s", uso);
                                    break;
                            case 't':
                                    Tiempo = atoi(argv[1]);
                                    control1 = 1;;
                                    break;
                            case 'd':
                                    strcpy(Dir, argv[1]);
                                    control2 = 1;
                                    break;
                    }
            }

    }

    //preparando comando
    strcpy(st1,"gsettings set org.mate.background picture-filename \"$(find ");
    strcpy(st2," -type f | shuf -n1)\"");

    strcat(st1,Dir);
    strcat(st1,st2);
    
    //Bucle principal del programa.
    
    if((control1 == 1) && (control2 == 1))
    {
       while(1)
       {
            system(st1);
            sleep(Tiempo);
       }
    }
}