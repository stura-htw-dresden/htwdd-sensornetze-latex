htwdd-sensornetze-latex
=======================

In der Hochschule für Technik und Wirtschaft Dresden im Master Angewandte
Informationstechnologien wurden zwei Module zum Thema Sensornetze behandelt:

- Forschungsprojekt/-seminar Sensornetze
- Vorlesung Sensornetze


Vorlesung Sensornetze
---------------------

In der Vorlesung wurden Themen verteilt, die als Vortrag und auch schriiftlich
ausgearbeitet werden sollten.

Ein Thema davon war Contiki, das von Hermann Lorenz und mir (Angelos Drossos)
behandelt wurde. Der Vortrag sowie die Ausarbeitung ist in diesem Repository
unter vorlesung/contiki zu finden.

Da das Betriebssystem Contiki sehr umfragreich ist, wurde der Fokus auf die
Aspekte der Implementierung sowie auf den Netzwerk-Stack (Physikalische Schicht
bis zur Netzwerk-Schicht) gelegt. Im Vortrag wurde am Rande auch das Laden von
Modulen zur Laufzeit (dynamic module loading) behandelt.


Forschungsprojekt Sensornetze
-----------------------------

Projektziele:

Im Rahmen des Forschungsprojektes soll
überprüft werden, inwiefern eine offene/freie Heimautomatisierung
durch Anwendung bestehender Informationstechnologien in
einem Sensornetzwerk realisierbar ist.

Dabei sind für die Konzipierung im Rahmen unseres
Forschungsprojektes die folgenden Zielstellungen erarbeitet
worden:

- Es sollen nur quelloffene und freie Module verwendet
  werden. Dabei ist „frei“ im Sinne der Definition der Free
  Software Foundation zu sehen.
- Das Nutzen existierender, energieeffizienter Standardtechnologien bilden
  die Grundlage für die Interoperabilität (Herstellerunabhängigkeit)
  sowie die Langlebigkeit batteriebetriebener Sensorknoten.
- Die Erweiterbarkeit des Hausautomatisierungssystems
  und damit die Integration anderer -- auch proprietärer
  -- Sensornetze ist zu untersuchen.
- Es ist wünschenswert, dass neue Geräte sich möglichst
  automatisch im System anmelden. Der Ausfall einzelner
  Sensorknoten darf das System nicht gefährden. Somit ist
  eine Skalierbarkeit des Hausautomatisierungssystems von
  Nöten.


Projektanatz:

Die konkret untersuchte Hausautomatisierungslösung besteht
aus einem dedizierten Netzknoten (Server), der die Regelung
des Systems übernimmt. Auf diesem befindet sich folglich
auch die Regelverarbeitung.

Das Sensornetz soll auf dem Funkstandard 6LoWPAN basieren.
Als Sensorknoten sollen ATmega128RFA1-Mikrocontroller
mit dem Betriebssystem Contiki-OS eingesetzt werden.

Der Informationsaustausch zwischen den einzelnen Sensorknoten
und dem Server soll über das Constrained Application
Protocol (CoAP) realisiert werden. CoAP ist ein im Vergleich
zu HTTP energieeffizientes Protokoll, welches dennoch URIs
unterstützt.

Bestehende Sensornetze, wie FS20 oder HomeMatic, werden
mit Hilfe von Gateways integriert, welche ein Mapping
zwischen dem entsprechenden Sensornetzprotokoll und CoAP
durchführen.


Repository:

In diesem Repository sind die letzten zwei Vorträge zum Forschungsprojekt
sowie zum Teilprojekt ''Sensoransteuerung'', bearbeitet von Angelos Drossos
sowie Hermann Lorenz, die Ausarbeitung zu finden.
