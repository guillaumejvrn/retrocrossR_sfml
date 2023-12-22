#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow fenetre(sf::VideoMode(800, 600), "SFML");

    sf::Font police;
    if (!police.loadFromFile("/home/pepito/Documents/font/Roboto-MediumItalic.ttf")) {
        // Gérer l'erreur de chargement de la police
    }

    sf::Text texte;
    texte.setFont(police);
    texte.setString("Hello, SFML!");
    texte.setCharacterSize(24);
    texte.setFillColor(sf::Color::White);
    texte.setPosition(10, 100);

    sf::Texture texture;
    if (!texture.loadFromFile("/home/pepito/Bureau/retrocrossR-sfml/test.jpg")) {
        // Gérer l'erreur de chargement de la texture
    }

    // Création du sprite avec la texture
    sf::Sprite sprite(texture);
    sprite.setPosition(10, 200);

    while (fenetre.isOpen()) {
        sf::Event evenement;
        while (fenetre.pollEvent(evenement)) {
            if (evenement.type == sf::Event::Closed) {
                fenetre.close();
            }
        }

        fenetre.clear();
        fenetre.draw(texte);  // Dessinez le texte
        fenetre.draw(sprite);
        fenetre.display();
    }

    return 0;
}
