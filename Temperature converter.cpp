#include <iostream>  // Include the standard input-output stream library

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;  // Convert Celsius to Fahrenheit
}

// Function to convert Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;  // Convert Celsius to Kelvin
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;  // Convert Fahrenheit to Celsius
}

// Function to convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit + 459.67) * 5/9;  // Convert Fahrenheit to Kelvin
}

// Function to convert Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;  // Convert Kelvin to Celsius
}

// Function to convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    return (kelvin * 9/5) - 459.67;  // Convert Kelvin to Fahrenheit
}

int main() {
    int choice;  // Variable to store the user's choice of input scale
    double temperature;  // Variable to store the temperature entered by the user

    // Display menu options for the user to choose the input temperature scale
    std::cout << "Temperature Converter\n";
    std::cout << "Choose the input scale:\n";
    std::cout << "1. Celsius\n";
    std::cout << "2. Fahrenheit\n";
    std::cout << "3. Kelvin\n";
    std::cin >> choice;  // Read the user's choice

    // Prompt the user to enter the temperature to be converted
    std::cout << "Enter the temperature: ";
    std::cin >> temperature;  // Read the user's temperature input

    // Switch statement to handle the user's choice and perform the appropriate conversions
    switch(choice) {
        case 1:
            // If the user chose Celsius, convert to Fahrenheit and Kelvin
            std::cout << "Celsius to Fahrenheit: " << celsiusToFahrenheit(temperature) << " °F\n";
            std::cout << "Celsius to Kelvin: " << celsiusToKelvin(temperature) << " K\n";
            break;
        case 2:
            // If the user chose Fahrenheit, convert to Celsius and Kelvin
            std::cout << "Fahrenheit to Celsius: " << fahrenheitToCelsius(temperature) << " °C\n";
            std::cout << "Fahrenheit to Kelvin: " << fahrenheitToKelvin(temperature) << " K\n";
            break;
        case 3:
            // If the user chose Kelvin, convert to Celsius and Fahrenheit
            std::cout << "Kelvin to Celsius: " << kelvinToCelsius(temperature) << " °C\n";
            std::cout << "Kelvin to Fahrenheit: " << kelvinToFahrenheit(temperature) << " °F\n";
            break;
        default:
            // If the user entered an invalid choice, display an error message
            std::cout << "Invalid choice! Please select 1, 2, or 3.\n";
            break;
    }

    return 0;  // End the program successfully
}
