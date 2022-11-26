# http-routing
Algorithms Practice Project at WS22/23 TU Darmstadt 

Mithilfe der [net](https://github.com/motis-project/net) library und [cista](https://github.com/felixguendling/cista)
soll per C++ Meta-Programmierung eine HTTP
Server Libray erstellt werden, die es ermöglicht, URLs effizient auf die registrierten
Funktionen im Server zu matchen sowie Parameter aus der URL zu entnehmen und an die
C++ Funktion zu übergeben. Zudem soll es ermöglicht werden, C++ Klassen-Felder per
Template zu annotieren. Diese Annotationen sollen genutzt werden, um Instanzen dieser
Klassen von/nach JSON zu konvertieren. Die im HTTP Server registrierten Funktionen
sollen Instanzen dieser annotierten Klassen annehmen und zurückgeben können. Die
Konvertierung von JSON in die C++ Klasse und zurück soll von der zu entwickelnden
Library im Hintergrund übernommen werden. Der Server generiert automatisiert eine
OpenAPI Beschreibung.
