#include "spirit_generator.h"

t_block *summon_spirit(char *type, int force)
{
    t_block *spirit;

    ft_putstr("Spirit type: ");
    ft_putendl(type);
    ft_putstr("Force used for calculations: ");
    ft_putnbr(force);
    ft_putendl("");
    if (!(spirit = (t_block*)ft_memalloc(sizeof(t_block))))
    {
        ft_putendl("Error: Could not allocate memory for spirit.");
        return (NULL);
    }
    if(ft_strcmp(type, "air") == 0)
    {
        spirit->B = (force - 2);
        if (spirit->B < 1)
            spirit->B = 1;
        spirit->A = (force + 3);
        spirit->R = force + 4;
        spirit->S = force - 3;
        if (spirit->S < 1)
            spirit->S = 1;
        spirit->W = force;
        spirit->L = force;
        spirit->I = force;
        spirit->C = force;
        spirit->ESS = force;
        spirit->MAG = force;
        spirit->INIT = force + spirit->R;
        spirit->AS_INIT = (force * 2);
        spirit->DR = spirit->B;
        spirit->AR = spirit->R + spirit->S;
        spirit->CM = (divRoundClosest(force, 2)) + 8;
        spirit->SKILLS = ft_strdup("Astral, Athletics, Close Combat, Exotic Ranged Weapon, Perception");
        spirit->POWERS = ft_strdup("Accident, Astral Form, Concealment, Confusion, Engulf (Air), \nMaterialization, Movement, Sapience, Search");
        spirit->BONUS_POWERS = ft_strdup("Elemental Attack (Cold), Elemental Attack (Electricity), \nEnergy Aura, Fear, Guard, Noxious Breath, Psychokinesis");
        spirit->ATTACKS = create_attacks_list(type, force);
        spirit->ATTACKS = add_attack(spirit->ATTACKS, type, force);
    }
    if(ft_strcmp(type, "beasts") == 0)
    {
        spirit->B = (force + 2);
        spirit->A = (force + 1);
        spirit->R = force;
        spirit->S = (force + 2);
        spirit->W = force;
        spirit->L = force;
        spirit->I = force;
        spirit->C = force;
        spirit->ESS = force;
        spirit->MAG = force;
        spirit->INIT = force + spirit->R;
        spirit->AS_INIT = (force * 2);
        spirit->DR = spirit->B;
        spirit->AR = spirit->R + spirit->S;
        spirit->CM = (divRoundClosest(force, 2)) + 8;
        spirit->SKILLS = ft_strdup("Astral, Close Combat, Perception");
        spirit->POWERS = ft_strdup("Animal Control, Astral Form, Enhanced Senses (hearing, low-light vision, \nsmell), Fear, Materialization, Movement, Sapience");
        spirit->BONUS_POWERS = ft_strdup("Concealment, Confusion, Guard, Natural Weapon (claws/bite), \nNoxious Breath, Search, Venom");
        spirit->ATTACKS = create_attacks_list(type, force);
    }
    if(ft_strcmp(type, "earth") == 0)
    {
        spirit->B = (force + 4);
        spirit->A = (force - 2);
        if (spirit->A < 1)
            spirit->A = 1;
        spirit->R = (force - 1);
        if (spirit->R < 1)
            spirit->R = 1;
        spirit->S = (force + 4);
        spirit->W = force;
        spirit->L = force;
        spirit->I = force;
        spirit->C = force;
        spirit->ESS = force;
        spirit->MAG = force;
        spirit->INIT = force + spirit->R;
        spirit->AS_INIT = (force * 2);
        spirit->DR = spirit->B;
        spirit->AR = spirit->R + spirit->S;
        spirit->CM = (divRoundClosest(force, 2)) + 8;
        spirit->SKILLS = ft_strdup("Astral, Close Combat, Exotic Ranged Weapon, Perception");
        spirit->POWERS = ft_strdup("Astral Form, Binding, Guard, Materialization, Movement, \nSapience, Search");
        spirit->BONUS_POWERS = ft_strdup("Concealment, Confusion, Elemental Attack (chemical), \nEngulf (Earth), Fear");
        spirit->ATTACKS = create_attacks_list(type, force);
        spirit->ATTACKS = add_attack(spirit->ATTACKS, type, force);
    }
    if(ft_strcmp(type, "fire") == 0)
    {
        spirit->B = (force + 1);
        spirit->A = (force + 2);
        spirit->R = (force + 3);
        spirit->S = (force - 2);
        if (spirit->S < 1)
            spirit->S = 1;
        spirit->W = force;
        spirit->L = force;
        spirit->I = (force + 1);
        spirit->C = force;
        spirit->ESS = force;
        spirit->MAG = force;
        spirit->INIT = force + spirit->R;
        spirit->AS_INIT = (force * 2);
        spirit->DR = spirit->B;
        spirit->AR = spirit->R + spirit->S;
        spirit->CM = (divRoundClosest(force, 2)) + 8;
        spirit->SKILLS = ft_strdup("Astral, Athletics, Close Combat, Exotic Ranged Weapon, Perception");
        spirit->POWERS = ft_strdup("Accident, Astral Form, Confusion, Elemental Attacks (Fire), \nEnergy Aura (Fire), Engulf (Fire), Materialization, Sapience");
        spirit->BONUS_POWERS = ft_strdup("Fear, Guard, Noxious Breath, Search");
        spirit->ATTACKS = create_attacks_list(type, force);
        spirit->ATTACKS = add_attack(spirit->ATTACKS, type, force);
    }
    if(ft_strcmp(type, "kin") == 0){
        spirit->B = (force + 1);
        spirit->A = force;
        spirit->R = (force + 2);
        spirit->S = (force - 2);
        if (spirit->S < 1)
            spirit->S = 1;
        spirit->W = force;
        spirit->L = force;
        spirit->I = (force + 1);
        spirit->C = force;
        spirit->ESS = force;
        spirit->MAG = force;
        spirit->INIT = force + spirit->R;
        spirit->AS_INIT = (force * 2);
        spirit->DR = spirit->B;
        spirit->AR = spirit->R + spirit->S;
        spirit->CM = (divRoundClosest(force, 2)) + 8;
        spirit->SKILLS = ft_strdup("Astral, Close Combat, Perception, Sorcery");
        spirit->POWERS = ft_strdup("Accident, Astral Form, Concealment, Confusion, Enhanced Senses (low-light\nvision, thermographic vision), Guard, Influence, Materialization, Sapience, Search");
        spirit->BONUS_POWERS = ft_strdup("Fear, Innate Spell (any one spell known by the summoner), Movement, Psychokinesis");
        spirit->ATTACKS = create_attacks_list(type, force);
    }
    if(ft_strcmp(type, "water") == 0)
    {
        spirit->B = force;
        spirit->A = (force + 1);
        spirit->R = (force + 2);
        spirit->S = force;
        spirit->W = force;
        spirit->L = force;
        spirit->I = force;
        spirit->C = force;
        spirit->ESS = force;
        spirit->MAG = force;
        spirit->INIT = force + spirit->R;
        spirit->AS_INIT = (force * 2);
        spirit->DR = spirit->B;
        spirit->AR = spirit->R + spirit->S;
        spirit->CM = (divRoundClosest(force, 2)) + 8;
        spirit->SKILLS = ft_strdup("Astral, Athletics (Swimming), Close Combat, Exotic Ranged Weapon, Perception");
        spirit->POWERS = ft_strdup("Astral Form, Concealment, Confusion, Engulf (Water), Materialization, Movement, \nSapience, Search");
        spirit->BONUS_POWERS = ft_strdup("Accident, Binding, Elemental Attack (Cold), Energy Aura (Cold), Guard, \nWeather Control");
        spirit->ATTACKS = create_attacks_list(type, force);
        spirit->ATTACKS = add_attack(spirit->ATTACKS, type, force);
    }
    return (spirit);
}
