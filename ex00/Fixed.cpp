/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:18:29 by anttorre          #+#    #+#             */
/*   Updated: 2024/06/05 16:20:38 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <iostream>
#include <string>

class Persona {
private:
    std::string nombre;
    int edad;
    int id;

public:
    Persona(const std::string& nombre, int edad, int id) : nombre(nombre), edad(edad), id(id) {
        std::cout << "Se ha creado una persona llamada " << nombre << " con ID " << id << std::endl;
    }

    std::string getNombre() const {
        return nombre;
    }

    // Constructor de copia
    Persona(const Persona& otra) : nombre(otra.nombre), edad(otra.edad), id(otra.id) {
        std::cout << "Se ha creado una copia de la persona " << nombre << " con ID " << id << std::endl;
    }

    // Operador de asignación
    Persona& operator=(const Persona& otra) {
        if (this != &otra) {
            this->nombre = otra.nombre;
            this->edad = otra.edad;
            this->id = otra.id;
        }
        std::cout << "Se ha asignado una persona llamada " << nombre << " con ID " << id << std::endl;
        return *this;
    }

    ~Persona() {
        std::cout << "Se ha destruido a la persona " << nombre << " con ID " << id << std::endl;
    }
};

int main() {
    Persona persona1("Juan", 30, 1);
    Persona persona2 = persona1; // Constructor de copia

    std::cout << "El nombre de persona2 es: " << persona2.getNombre() << std::endl;

    Persona persona3("Maria", 25, 2);
    persona3 = persona2; // Operador de asignación

    return 0;
} */

#include "Fixed.hpp"
Fixed::Fixed()
{
    this->_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    this->_value = other._value;
    std::cout << "Copy constructor called." << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called." << std::endl;
    if (this != &other)
    {
        this->_value = other._value;
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    return this->_value;
}

void    Fixed::setRawBits(const int raw)
{
    this->_value = raw;
}