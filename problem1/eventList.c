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



void RemoveEvent(EventList *this, char *name)
{
    Event *a = this->head;

    Event *t = SearchEvent(this, name);

    if (t == NULL)
        return;
    if (this->isEmpty == 0)
    {
        return;
    }
    
    else
    {
       
        while (a != NULL)
        {
            
            
            if (*(this->head->eventName + 2) == *(name + 2))
            {
                this->head = this->head->next;
                break;
            }

            else if (*(a->next->eventName + 2) == *(name + 2))
            {
                a->next = a->next->next;
                break;
            }

            a = a->next;
            
        }
        if (this->head==NULL)
        {
            this->isEmpty = 0;
        }
    }
}

void ListEvents(EventList *this)
{
    Event *a = this->head;
    
    if (this->isEmpty == 0)
        printf("empty\n");
    else
    {
        while (a != NULL)
        {
            printf("%s\n", a->eventName); 
            a = a->next;
        }
    }
}
