#include <SFML/Graphics.hpp>  
#include <iostream>  

int main() {  
    sf::Texture texture;  
    if (!texture.loadFromFile("C:\\Users\\Huawei\\Downloads\\Nosferatu.jpg")) { 
        return -1;   
    }  

    sf::Sprite s(texture);  
    std::cout << "Texture loaded successfully!" << '\n';
    return 0;  
}
