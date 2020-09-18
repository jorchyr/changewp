# changewp
A program written in c that allows rotating the desktop background at a given time by taking random images from a folder. This program was designed to work with Mate and tested on Linux Mint Mate.

# how to use:

-t To select the time in seconds. (60 = 1 minute)
-d Select the directory from where the program will select a random image.

Example: changewp -t 60 -d /home/user/walpaper

You just have to add the program to mate-session-properties so that it runs in the background after starting the desktop.

# Get changewp

You can download the compiled program from the Release folder or you can compile it on your own. For this you will need the build-essential package (sudo apt-get install build-essential) then use the command: gcc -o changewp changewp0.02.cpp

# ChangeWP

Es un programa escrito en C que permite rotar las imagenes de fondo en un tiempo dado tomando imagenes a lazar de una carpeta. El programa esta pensado para funcionar en el escritorio Mate. Lo he probado y funciona correctamente en Linux Mint Mate. Es probable que funcione tambien en otros escritorios basado en Gnome.

# Modo de uso:

-t Para selecionar el tiempo en minutos. 60 segundo = 1 minuto.
-d Para selecionar una carpeta de la cual tomar imagenes

  Example: changewp -t 60 -d /home/user/walpaper

Simplemente hay que agregar el programa a las aplicaciones que se ejecutal al iniciar el escritorio. En linux mint "aplicaciones al inicio".

Para instalar el program puedes descargarte el binario desde la carpeta release o puedes descargar el codigo fuente y compilarlo por tu cuenta. Es necesario tenes instalado el paquete build-essential (sudo apt-get install build-essential)

Para compilar siemplemente usa gcc -o changewp changewp0.02.cpp
