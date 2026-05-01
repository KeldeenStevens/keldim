# keldim

Proceso de Instalación de compilador

--------------------------------------------------------------------------

Instalé MSYS2 en el computador, una vez terminada la descarga, lo ejecuté.


Una vez abierta la consola, ejecuto el siguiente comando con el propósito de instalar mi compilador GCC:

$ pacman -S mingw-w64-ucrt-x86_64-gcc

Al ejecutar esto, me presentó en la consola la lista de paquetes que se instalarían, y presione Enter para proceder, tuvo un peso de 510Mib; y en el momento en el que terminó la descarga, mandé el comando de gcc --version en la consola de Windows para asegurarme de que se había instalado correctamente.


Luego, procederé a ir a esta dirreción en mi computadora: C:\msys64\ucrt64\bin, y copiar la ubicación del archivo (que vendría siendo C:\msys64\ucrt64\bin)

Luego abro el Environment Variables de Windows > abro PATH > editar > nuevo y pegar la ubicación (o path) que había copiado (C:\msys64\ucrt64\bin)

Precionar OK para todo, y LISTO!

Al haber hecho todo esto, el usuario debe ser capaz de ejecutar (gcc --version) en su consola y salirle lo siguiente:

gcc.exe (Rev13, Built by MSYS2 project) 15.2.0
Copyright (C) 2025 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.



--------------------------------------------------------------------------------------------


ATENCIÓN MAÑON PORFAVOR

Descubrí la opción de Visual Studio para interactuar con Git y que me permitiera ejecutar commits a través de la misma interfaz, por lo que realicé los "checkpoints" desde ahí, este es el motivo por el que hay 2 commits llamados (Eliminación de tasks.json y tempCodeRunner porque no se para qué funcionan, creación de Menu principal y establecimiento de funciones al final del código) Ya que estuve aprendiendo a hacer los commits de esta forma y cometí el error de hacerlo 2 veces (o colocar 2 nombres no lo sé)

