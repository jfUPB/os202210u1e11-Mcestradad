#include "eventList.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

EventList *CreateEventList(void)
{
    EventList *eventList = NULL;

    return eventList;
}

void DestroyEventList(EventList *this)
{


    free(this);
}

Event *SearchEvent(EventList *this, char *name)
{
    Event *a = this->head; //Evento de referencia para comenzar a buscarlo en la lista.
    if (this->isEmpty == 0) //Revisar si la lista está vacía.
    {
        return NULL;
    }
    
    else
    {
       
        while (a != NULL)  //Cuando no está vacía.
        {

            int longitud_arr1= sizeof(a->eventName);
            int longitud_arr2= sizeof(*name);

            if (longitud_arr1 != longitud_arr2)
            {
                //printf("No existe el evento");
                return NULL;
            }
            for (int i = 0; i < longitud_arr1; i++) {  //Puede ser cualquier longitud ya que son iguales
                // Obtener elementos de ambos arreglos en misma posición o índice
                char valor_arr1 = a->eventName[i], valor_arr2 = name[i];

                // Comparar 
                if (valor_arr1 == valor_arr2) 
                {
                    
                    return a; 
                }
            }

            

            a = a->next;
        }
    }
    
    DestroyEvent(a);
    return NULL;
}

    return NULL;
}

void AddEvent(EventList *this, Event *event)
{
    Event *a = this->head; //Evento de referencia para comenzar a buscarlo en la lista.
    if (this->isEmpty == 0) //Revisar si la lista está vacía.
    {
        return NULL;
    }
    
    else
    {
       
        while (a != NULL)  //Cuando no está vacía.
        {

            int longitud_arr1= sizeof(a->eventName);
            int longitud_arr2= sizeof(*name);

            if (longitud_arr1 != longitud_arr2)
            {
                //printf("No existe el evento");
                return NULL;
            }
            for (int i = 0; i < longitud_arr1; i++) {  //Puede ser cualquier longitud ya que son iguales
                // Obtener elementos de ambos arreglos en misma posición o índice
                char valor_arr1 = a->eventName[i], valor_arr2 = name[i];

                // Comparar 
                if (valor_arr1 == valor_arr2) 
                {
                    
                    return a; 
                }
            }

            

            a = a->next;
        }
    }
    
    DestroyEvent(a);
    return NULL;
}

void AddEvent(EventList *this, Event *event)
{
    Event *a = this->head;

    if (this->isEmpty!=0)
    {
        
        while (a != NULL)
        {
            int longitud_arr1= sizeof(a->eventName)/sizeof(a->eventName[0]);
            

            
            for (int i = 0; i < longitud_arr1; i++) {  //Puede ser cualquier longitud ya que son iguales
                
                

                // Comparar 
                if (a->eventName[i] == event->eventName[i]) 
                { 
                    return;
                }
                this->head = this->head->next;
            }

        }
        
        this->last->next=event;
        this->last=event;
    
    }
    else{
        this->head = event;
        this->last = event;
        this->isEmpty= 1;
    }
    
    DestroyEvent(a);
}
}

void RemoveEvent(EventList *this, char *name)
{
}

void ListEvents(EventList *this)
{
    // imprime esto si la lista está vacía
    printf("empty\n");
}
