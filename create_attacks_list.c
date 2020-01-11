#include "spirit_generator.h"

t_attack        *create_attacks_list(char *type, int force)
{
    t_attack    *attack;

    if (!(attack = (t_attack*)ft_memalloc(sizeof(t_attack))))
    {
        ft_putendl("Error: Could not allocate memory for attack(s).");
        return (NULL);
    }
    if(ft_strcmp(type, "air") == 0)
    {
        attack->name = ft_strdup("Elemental Attack");
        attack->DV = force;
        attack->close = (force * 2);
        attack->near = (force * 2) - 2;
        attack->medium = (force * 2) - 8;
        if (attack->medium < 0)
            attack->medium = 0;
        attack->far = (force * 2) - 10;
        if (attack->far < 0)
            attack->far = 0;
        attack->extreme = -1;
        attack->next = NULL;
    }
    if(ft_strcmp(type, "beasts") == 0)
    {
        attack->name = ft_strdup("Claw/bite");
        attack->DV = divRoundClosest(force, 2);
        attack->close = (force * 2);
        attack->near = -1;
        attack->medium = -1;
        attack->far = -1;
        attack->extreme = -1;
        attack->next = NULL;
    }
    if(ft_strcmp(type, "earth") == 0)
    {
        attack->name = ft_strdup("Elemental Attack");
        attack->DV = force;
        attack->close = (force * 2);
        attack->near = (force * 2) - 2;
        attack->medium = (force * 2) - 8;
        if (attack->medium < 0)
            attack->medium = 0;
        attack->far = (force * 2) - 10;
        if (attack->far < 0)
            attack->far = 0;
        attack->extreme = -1;
        attack->next = NULL;
    }
    if(ft_strcmp(type, "fire") == 0)
    {
        attack->name = ft_strdup("Elemental Attack");
        attack->DV = force;
        attack->close = (force * 2);
        attack->near = (force * 2) - 2;
        attack->medium = (force * 2) - 8;
        if (attack->medium < 0)
            attack->medium = 0;
        attack->far = (force * 2) - 10;
        if (attack->far < 0)
            attack->far = 0;
        attack->extreme = -1;
        attack->next = NULL;
    }
    if(ft_strcmp(type, "kin") == 0)
    {
        attack->name = ft_strdup("Fists");
        attack->DV = divRoundClosest(force, 2);
        attack->close = (force * 2);
        attack->near = -1;
        attack->medium = -1;
        attack->far = -1;
        attack->extreme = -1;
        attack->next = NULL;
    }
    if(ft_strcmp(type, "water") == 0)
    {
        attack->name = ft_strdup("Elemental Attack");
        attack->DV = force;
        attack->close = (force * 2);
        attack->near = (force * 2) - 2;
        attack->medium = (force * 2) - 8;
        if (attack->medium < 0)
            attack->medium = 0;
        attack->far = (force * 2) - 10;
        if (attack->far < 0)
            attack->far = 0;
        attack->extreme = -1;
        attack->next = NULL;
    }
    return (attack);
}