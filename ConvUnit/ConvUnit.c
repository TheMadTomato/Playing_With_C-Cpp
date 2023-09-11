#include <stdio.h>

// Function to convert pounds to kilograms
float lb_to_kg(float pounds) {
    return pounds * 0.453592;
}

// Function to convert kilograms to pounds
float kg_to_lb(float kilograms) {
    return kilograms / 0.453592;
}

// Function to convert pounds to grams
float lb_to_g(float pounds) {
    return pounds * 453.592;
}

// Function to convert grams to pounds
float g_to_lb(float grams) {
    return grams / 453.592;
}

// Function to convert kilograms to grams
float kg_to_g(float kilograms) {
    return kilograms * 1000;
}

// Function to convert grams to kilograms
float g_to_kg(float grams) {
    return grams / 1000;
}

// Function to convert gallons to liters
float gal_to_l(float gallons) {
    return gallons * 3.78541;
}

// Function to convert liters to gallons
float l_to_gal(float liters) {
    return liters / 3.78541;
}

// Function to convert fluid ounces to milliliters
float fl_oz_to_ml(float fluid_ounces) {
    return fluid_ounces * 29.5735;
}

// Function to convert milliliters to fluid ounces
float ml_to_fl_oz(float milliliters) {
    return milliliters / 29.5735;
}

// Function to convert cubic inches to cubic centimeters
float cu_in_to_cu_cm(float cubic_inches) {
    return cubic_inches * 16.3871;
}

// Function to convert cubic centimeters to cubic inches
float cu_cm_to_cu_in(float cubic_centimeters) {
    return cubic_centimeters / 16.3871;
}

// Function to convert cubic feet to cubic meters
float cu_ft_to_cu_m(float cubic_feet) {
    return cubic_feet * 0.0283168;
}

// Function to convert cubic meters to cubic feet
float cu_m_to_cu_ft(float cubic_meters) {
    return cubic_meters / 0.0283168;
}

// Function to convert feet to meters
float ft_to_m(float feet) {
    return feet * 0.3048;
}

// Function to convert meters to feet
float m_to_ft(float meters) {
    return meters / 0.3048;
}

// Function to convert inches to centimeters
float in_to_cm(float inches) {
    return inches * 2.54;
}

// Function to convert centimeters to inches
float cm_to_in(float centimeters) {
    return centimeters / 2.54;
}

int main() {
    int choice;
    float value;

    // ASCII logo
    printf("\n");
    printf(" ____ _           _           _______         \n");
    printf("|  _ (_)         (_)         |__   __|        \n");
    printf("| |_) |_  ___ ___ _ _ __ ______| | ___   ___  \n");
    printf("|  _ <| |/ __/ __| | '__|______| |/ _ \\ / _ \\ \n");
    printf("| |_) | | (__\\__ \\ | |         | | (_) | (_) |\n");
    printf("|____/|_|\\___|___/_|_|         |_|\\___/ \\___/ \n");
    printf("\n");

    while (1) {
        // Display menu
        printf("Menu:\n");
        printf("1. Convert pounds to kilograms\n");
        printf("2. Convert kilograms to pounds\n");
        printf("3. Convert pounds to grams\n");
        printf("4. Convert grams to pounds\n");
        printf("5. Convert kilograms to grams\n");
        printf("6. Convert grams to kilograms\n");
        printf("7. Convert gallons to liters\n");
        printf("8. Convert liters to gallons\n");
        printf("9. Convert fluid ounces to milliliters\n");
        printf("10. Convert milliliters to fluid ounces\n");
        printf("11. Convert cubic inches to cubic centimeters\n");
        printf("12. Convert cubic centimeters to cubic inches\n");
        printf("13. Convert cubic feet to cubic meters\n");
        printf("14. Convert cubic meters to cubic feet\n");
        printf("15. Convert feet to meters\n");
        printf("16. Convert meters to feet\n");
        printf("17. Convert inches to centimeters\n");
        printf("18. Convert centimeters to inches\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            break;
        }

        if (choice >= 1 && choice <= 18) {
            printf("Enter the value to convert: ");
            scanf("%f", &value);

            switch (choice) {
                case 1:
                    printf("%.2f pounds is %.2f kilograms\n", value, lb_to_kg(value));
                    break;
                case 2:
                    printf("%.2f kilograms is %.2f pounds\n", value, kg_to_lb(value));
                    break;
                case 3:
                    printf("%.2f pounds is %.2f grams\n", value, lb_to_g(value));
                    break;
                case 4:
                    printf("%.2f grams is %.2f pounds\n", value, g_to_lb(value));
                    break;
                case 5:
                    printf("%.2f kilograms is %.2f grams\n", value, kg_to_g(value));
                    break;
                case 6:
                    printf("%.2f grams is %.2f kilograms\n", value, g_to_kg(value));
                    break;
                case 7:
                    printf("%.2f gallons is %.2f liters\n", value, gal_to_l(value));
                    break;
                case 8:
                    printf("%.2f liters is %.2f gallons\n", value, l_to_gal(value));
                    break;
                case 9:
                    printf("%.2f fluid ounces is %.2f milliliters\n", value, fl_oz_to_ml(value));
                    break;
                case 10:
                    printf("%.2f milliliters is %.2f fluid ounces\n", value, ml_to_fl_oz(value));
                    break;
                case 11:
                    printf("%.2f cubic inches is %.2f cubic centimeters\n", value, cu_in_to_cu_cm(value));
                    break;
                case 12:
                    printf("%.2f cubic centimeters is %.2f cubic inches\n", value, cu_cm_to_cu_in(value));
                    break;
                case 13:
                    printf("%.2f cubic feet is %.2f cubic meters\n", value, cu_ft_to_cu_m(value));
                    break;
                case 14:
                    printf("%.2f cubic meters is %.2f cubic feet\n", value, cu_m_to_cu_ft(value));
                    break;
                case 15:
                    printf("%.2f feet is %.2f meters\n", value, ft_to_m(value));
                    break;
                case 16:
                    printf("%.2f meters is %.2f feet\n", value, m_to_ft(value));
                    break;
                case 17:
                    printf("%.2f inches is %.2f centimeters\n", value, in_to_cm(value));
                    break;
                case 18:
                    printf("%.2f centimeters is %.2f inches\n", value, cm_to_in(value));
                    break;
            }
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

