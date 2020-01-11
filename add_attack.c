#include "spirit_generator.h"

t_attack        *add_attack(t_attack *head, char *type, int force)
{
    t_attack *cursor;
    t_attack *new;

    cursor = head;
    while (cursor->next != NULL)
        cursor = cursor->next;
    new = (t_attack*)ft_memalloc(sizeof(t_attack));
    if(new == NULL)
    {
        ft_putendl("Error creating a new attack node.");
        return (NULL);
    }
    if(ft_strcmp(type, "air") == 0)
    {
        new->name = ft_strdup("Engulf");
        new->DV = force + 2;
        new->close = (force * 2) + 1;
        new->near = -1;
        new->medium = -1;
        new->far = -1;
        new->extreme = -1;
        new->next = NULL;
    }
    if(ft_strcmp(type, "earth") == 0)
    {
        new->name = ft_strdup("Engulf");
        new->DV = force + 2;
        new->close = (force * 2) + 1;
        new->near = -1;
        new->medium = -1;
        new->far = -1;
        new->extreme = -1;
        new->next = NULL;
    }
    if(ft_strcmp(type, "fire") == 0)
    {
        new->name = ft_strdup("Engulf");
        new->DV = force + 2;
        new->close = (force * 2) + 1;
        new->near = -1;
        new->medium = -1;
        new->far = -1;
        new->extreme = -1;
        new->next = NULL;
    }
    if(ft_strcmp(type, "water") == 0)
    {
        new->name = ft_strdup("Engulf");
        new->DV = force + 2;
        new->close = (force * 2) + 1;
        new->near = -1;
        new->medium = -1;
        new->far = -1;
        new->extreme = -1;
        new->next = NULL;
    }
    cursor->next = new;
    return (head);
}