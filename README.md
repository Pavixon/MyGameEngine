MyOwnGameEngine

Opis projektu

MyOwnGameEngine to autorski silnik gier 2D napisany w języku C++ z wykorzystaniem biblioteki SFML. Projekt powstał w ramach pracy inżynierskiej pt. „Projektowanie i implementacja silnika gier 2D do gier typu top-down”.

Głównym celem projektu jest stworzenie podstawowej architektury silnika umożliwiającej zarządzanie obiektami gry, obsługę wejścia użytkownika, wykrywanie kolizji, renderowanie oraz zarządzanie zasobami.

Technologie

Język programowania: C++

Biblioteka graficzna: SFML

Środowisko programistyczne: Microsoft Visual Studio

System kontroli wersji: Git

Platforma: Windows

Funkcjonalności

Silnik zawiera następujące systemy:

Engine – główna klasa odpowiedzialna za działanie silnika i pętlę gry.

SceneManager – zarządzanie scenami.

GameObjectManager – zarządzanie obiektami gry.

InputManager – obsługa wejścia użytkownika.

CollisionManager – system wykrywania kolizji.

CameraManager – zarządzanie kamerą.

ResourceManager – zarządzanie zasobami.

GameObject – podstawowa klasa obiektów występujących w grze.

Wymagania

Do uruchomienia gotowej wersji projektu wymagane są:

System operacyjny Windows.

Kompatybilne biblioteki DLL biblioteki SFML.

Do kompilacji projektu wymagane są dodatkowo:

Microsoft Visual Studio.

Kompilator C++ obsługujący standard wykorzystywany w projekcie.

Biblioteka SFML w wersji zgodnej z konfiguracją projektu.

Uruchomienie

Pobierz repozytorium lub paczkę z gotowym buildem.

Przejdź do katalogu Build.

Otwórz folder zawierający skompilowaną wersję programu.

Uruchom plik MyOwnGameEngine.exe.

Biblioteki DLL wymagane przez program powinny znajdować się w tym samym katalogu co plik wykonywalny.

Kompilacja projektu

Otwórz plik rozwiązania .sln w Microsoft Visual Studio.

Wybierz konfigurację Release oraz platformę x64.

Sprawdź konfigurację ścieżek do biblioteki SFML.

Wybierz opcję Build Solution.

Gotowy plik wykonywalny zostanie zapisany w katalogu wynikowym projektu.

Struktura projektu

Core – podstawowe elementy silnika.

GameObjects – klasy obiektów gry.

Managers – systemy zarządzające poszczególnymi funkcjonalnościami.

Scenes – definicje scen.

Autor

Projekt wykonany w ramach pracy inżynierskiej na kierunku Informatyka, Uniwersytet Dolnośląski DSW.
