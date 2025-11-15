# Snake Game (C++)

## Descriere
Un joc simplu Snake implementat în C++.

## Structuri implementate
- `Point` – coordonate pe tablă
- `Apple` – generare poziție nouă
- `Snake` – mișcare, creștere, coliziune
- `Engine` – logica jocului
- `Viewer` – afișarea jocului în consolă

## Metoda de construire

### Compilare manuală (un singur fișier)
```bat
cl /c Apple.cpp




Joc Snake realizat in c++
Ce reprezintă jocul?
Jocul Snake este un joc clasic de tip arcade, în care jucătorul controlează un șarpe care se deplasează pe ecran, consumă mere și crește în lungime. Scopul jocului este să acumulezi un scor cât mai mare, evitând coliziunile cu pereții sau cu propriul corp. Jocul se încheie dacă șarpele se lovește de marginea ecranului sau de el însuși.

Cum se joacă?
Jucătorul controlează direcția de deplasare a șarpelui folosind tastele săgeți (↑, ↓, ←, →)
La fiecare măr consumat, șarpele crește în lungime.
Mărul apare într-o poziție aleatoare pe hartă.
Dacă șarpele se lovește de pereți sau de propriul corp, jocul se termină (game over).
Jocul poate fi resetat pentru o nouă rundă.

-Structura codului și fișierele .hpp
Apple.hpp
Definește structura unui măr din joc.
position: coordonatele mărului.
regenerate: funcție care poziționează mărul într-un loc nou aleatoriu pe hartă.

Direction.hpp
Enumerarea direcțiilor posibile de mișcare ale șarpelui

Engine.hpp
Componenta principală a jocului care controlează logica jocului.
pdate(): actualizează starea jocului (mișcarea șarpelui, verificarea coliziunilor etc.).
reset(): reîncepe jocul.

Point.hpp
Reprezintă o coordonată în plan (poziție pe hartă).

Snake.hpp
Structura care definește șarpele.
body: un vector de puncte care formează corpul șarpelui.
dir: direcția curentă de deplasare.
move(): mută șarpele într-o nouă poziție.
grow(): adaugă un segment nou la corpul șarpelui.
check_collision(): verifică dacă șarpele s-a ciocnit cu ceva.

Viewer.hpp
Se ocupă de afișarea grafică a jocului.
draw(): funcție care desenează șarpele, mărul și starea jocului pe ecran.

Concluzie
Jocul Snake în C++ este o implementare clasică a unui joc simplu dar captivant, împărțit în module logice care separă logica jocului, afișarea grafică, și controlul entităților. Acest stil modular de programare permite o întreținere ușoară și extindere viitoare (de exemplu, scor, niveluri de dificultate, etc.).
