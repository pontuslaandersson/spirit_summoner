#include "spirit_generator.h"

int     main(int argc, char **argv)
{
    t_block *spirit;
    int force;

    if (argc != 3)
    {
        ft_putnbr(argc);
        ft_putendl("");
        ft_putendl(argv[1]);
        ft_putendl("usage: ./spirit_summoner [air/earth/fire/kin/water] [force as int]");
        return (-1);
    }
    force = ft_atoi(argv[2]);
    spirit = summon_spirit(argv[1], force);
    if (spirit == NULL)
    {
        ft_putendl("Error summoning spirit. Exiting.");
        return (-1);
    }
    ft_putstr("Body: ");
    ft_putnbr(spirit->B);
    ft_putendl("");
    ft_putstr("Agility: ");
    ft_putnbr(spirit->A);
    ft_putendl("");
    ft_putstr("Reaction: ");
    ft_putnbr(spirit->R);
    ft_putendl("");
    ft_putstr("Strength: ");
    ft_putnbr(spirit->S);
    ft_putendl("");
    ft_putstr("Willpower: ");
    ft_putnbr(spirit->W);
    ft_putendl("");
    ft_putstr("Logic: ");
    ft_putnbr(spirit->L);
    ft_putendl("");
    ft_putstr("Intuition: ");
    ft_putnbr(spirit->I);
    ft_putendl("");
    ft_putstr("Charisma: ");
    ft_putnbr(spirit->C);
    ft_putendl("");
    ft_putstr("Essence: ");
    ft_putnbr(spirit->ESS);
    ft_putendl("");
    ft_putstr("Magic: ");
    ft_putnbr(spirit->MAG);
    ft_putendl("");
    ft_putstr("Initiative: ");
    ft_putnbr(spirit->INIT);
    ft_putendl(" + 2d6");
    ft_putstr("Astral Initiative: ");
    ft_putnbr(spirit->AS_INIT);
    ft_putendl(" + 3d6");
    ft_putstr("Defense Rating: ");
    ft_putnbr(spirit->DR);
    ft_putendl("");
    ft_putstr("Attack Rating: ");
    ft_putnbr(spirit->AR);
    ft_putendl("");
    ft_putstr("Condition monitor: ");
    ft_putnbr(spirit->CM);
    ft_putendl("");
    ft_putstr("Skills: ");
    ft_putendl(spirit->SKILLS);
    ft_putendl("");
    ft_putstr("Powers: ");
    ft_putendl(spirit->POWERS);
    ft_putendl("");
    ft_putstr("Optional Powers (one per full 3 Force): ");
    ft_putendl(spirit->BONUS_POWERS);
    ft_putendl("");
    print_attacks(spirit->ATTACKS);
    if (spirit != NULL)
        free(spirit);
    return (0);
}