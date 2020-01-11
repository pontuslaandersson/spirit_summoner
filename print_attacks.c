#include "spirit_generator.h"

void            print_attack_node(t_attack *cursor)
{
        if (cursor == NULL)
                ft_putendl("Error: Cursor is NULL.");
        else
        {
            ft_putstr(cursor->name);
            ft_putstr(" [");
            ft_putnbr(cursor->DV);
            ft_putstr(", ");
            ft_putnbr(cursor->close);
            ft_putchar('/');
            ft_putnbr(cursor->near);
            ft_putchar('/');
            ft_putnbr(cursor->medium);
            ft_putchar('/');
            ft_putnbr(cursor->far);
            ft_putchar('/');
            ft_putnbr(cursor->extreme);
            ft_putchar(']');
            ft_putendl("");
        }
}

void    print_attacks(t_attack *attacks)
{
        t_attack *cursor;
           
        cursor = attacks;
    while (cursor != NULL)
    {
        print_attack_node(cursor);
        cursor = cursor->next;
    }
}