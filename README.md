# Informatik1
Vorlesungsmaterial für Informatik1


## Loesungen zu den Laboren
- [Tic-Tac-Toe Loesungs Code](https://github.com/TEL21D/TicTacToe/tree/loesung)

## Nützliche Online Information

- [hackingcpp.com](https://hackingcpp.com/index.html): Gute Seite mit Infos zu C++ vom Anfänger bis Profi
- [CodeCademy Cheat Sheet](https://www.codecademy.com/learn/learn-c-plus-plus/modules/learn-cpp-hello-world/cheatsheet)
- [Wikibooks - Deutsch](https://de.wikibooks.org/wiki/C%2B%2B-Programmierung)

## Infos zu VsCode und mingw compiler

- Detailliertere Infos folgen mit Beispiel setup
- Link zur VsCode Seite:
  - [Gcc auf Windows mit VsCode](https://code.visualstudio.com/docs/cpp/config-mingw)
  - [Mac mit VsCode](https://code.visualstudio.com/docs/cpp/config-clang-mac)

**MinGW C++ compiler auf Windows installieren**
- Abgespeckte Version direkt mit dem [MinGW Installer von Sourceforge](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/mingw-w64-install.exe/download)
  -  Installation z.B. unter `C:\mingw64`: Dann muss folgender Pfad im Windows `PATH` angegeben werden: `C:\mingw64\bin`
  -  Überprüfen der Installation im Windows Terminal mit `g++ --version`
-  Installation über MSYS2 (Paket Manager für Windows)
    - [Download](https://www.msys2.org/)
    - `msys2-x86_64-20210725.exe` runterladen, installieren und ausführen
    - Paketmanager `pacman` aktualiseren: `pacman -Syu` (falls das Programm schließt erneut öffnen)
    - Den Rest aktualiseren `pacman -Su`
    - Danach development tools und die minGW toolchain installieren: `pacman -S --needed base-devel mingw-w64-x86_64-toolchain`
      - Die Eingabeaufforderung beide Male mit Enter Taste bestätigen und alle Pakete installieren (Ist zwar etwas größer, dafür werden einige Tools mit geliefert)
    - make installieren `pacman -S make`
    - minGW Installation im Windows `PATH` eintragen: `<MSYS2 root>/mingw64/bin`
- Videos:
  - [minGW installieren](https://youtu.be/nHQ9DdLISqY)
  - [VsCode mit C++ konfigurieren](https://youtu.be/FysIjYNbhgw)

## Übungsaufgaben
- Repository mit Einführungsaufgaben zu C++ und zum Programmieren: https://github.com/TEL20A/Aufgaben-Cpp-Basics
- Verschiedene Mathematische Probleme auf Project Eule: https://projecteuler.net/
- [Hackerrank](https://www.hackerrank.com/) bietet unterschiedliche, interaktive Aufgabenstellungen. Es ist aber eine kostenlose Registrierung notwendig.
