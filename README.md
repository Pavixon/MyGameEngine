# MyOwnGameEngine

## Opis projektu

MyOwnGameEngine to autorski silnik gier 2D napisany w języku C++ z wykorzystaniem biblioteki SFML. Projekt powstał w ramach pracy inżynierskiej pt. „Projektowanie i implementacja silnika gier 2D do gier typu top-down”.

Głównym celem projektu jest stworzenie podstawowej architektury silnika umożliwiającej zarządzanie obiektami gry, obsługę wejścia użytkownika, wykrywanie kolizji, renderowanie oraz zarządzanie zasobami.

## Technologie

* **Język programowania:** C++
* **Biblioteka graficzna:** SFML 3.1.0
* **Środowisko programistyczne:** Microsoft Visual Studio
* **System kontroli wersji:** Git
* **Platforma:** Windows

## Funkcjonalności

* Silnik zawiera następujące systemy:
* **Engine** – główna klasa odpowiedzialna za działanie silnika i pętlę gry.
* **SceneManager** – zarządzanie scenami.
* **GameObjectManager** – zarządzanie obiektami gry.
* **InputManager** – obsługa wejścia użytkownika.
* **CollisionManager** – system wykrywania kolizji.
* **CameraManager** – zarządzanie kamerą.
* **ResourceManager** – zarządzanie zasobami.
* **GameObject** – podstawowa klasa obiektów występujących w grze.

## Kompilacja i uruchomienie projektu
### Wymagania
* Windows 10 lub Windows 11
* Visual Studio 2022
* Zainstalowany pakiet Desktop development with C++

### Przygotowanie projektu

1. Sklonuj repozytorium lub pobierz je jako archiwum ZIP.
2. Otwórz plik MyOwnGameEngine.sln w Visual Studio.
3. Upewnij się, że wybrana konfiguracja kompilacji to **Release x64**.

### Kompilacja

1. W Visual Studio wybierz Build → Build Solution lub użyj skrótu Ctrl + Shift + B.
2. Poczekaj na zakończenie kompilacji.

### Uruchomienie

Po poprawnej kompilacji uruchom wygenerowany plik wykonywalny .exe.

Uwaga: Biblioteka SFML jest dołączona do repozytorium, dlatego nie wymaga osobnej instalacji.

## Struktura projektu

Projekt składa się z dwóch głównych części: silnika gier oraz aplikacji demonstracyjnej wykorzystującej jego funkcjonalności.
### Engine
* Core – podstawowe elementy silnika, odpowiedzialne za jego działanie i zarządzanie cyklem gry.
* Managers – systemy zarządzające poszczególnymi funkcjonalnościami silnika.
### ExampleGame
* GameObjects – obiekty i klasy implementujące mechaniki prototypowej gry.
* Scenes – sceny aplikacji demonstracyjnej.
* Assets -Zasoby wykorzystywane przez projekt, takie jak tekstury i grafiki.

## Autor

Projekt wykonany przez Pawła N. w ramach pracy inżynierskiej na kierunku Informatyka, Uniwersytet Dolnośląski DSW Ideis.

