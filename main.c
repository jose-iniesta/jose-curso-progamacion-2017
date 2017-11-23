/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: jose
 *
 * Created on November 15, 2017, 2:14 PM
 */

#include <stdio.h>


/*
 *  
 */
int main(void) 
{
    int dni;
    float calculo_dni;
    
    printf("Escribe tu numero de DNI: \n");
    scanf("%i", &dni);
    
    printf("Tu numero de DNI es: %i \n", dni);
    
    calculo_dni = dni/23;
    
    printf("El resultado es %f", calculo_dni);
    
    

    return (0);
}

