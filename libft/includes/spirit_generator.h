#ifndef SPIRIT_GENERATOR_H
# define SPIRIT_GENERATOR_H
# define BUFF_SIZE 8
# define FD_MAX 4864

# include "libft.h"

typedef struct		s_attack
{
	char				*name;
	int					DV;
	int					close;
	int					near;
	int					medium;
	int					far;
	int					extreme;
	struct s_attack		*next;
}					t_attack;

typedef	struct		s_block
{
	int					B;
	int					A;
	int					R;
	int					S;
	int					W;
	int					L;
	int					I;
	int					C;
	int					ESS;
	int					MAG;
	int					INIT;
	int					AS_INIT;
	int					DR;
	int					AR;
	int					CM;
	char				*SKILLS;
	char				*POWERS;
	char				*BONUS_POWERS;
	struct s_attack		*ATTACKS;
	struct s_block	*prev;
	struct s_block	*next;
}					t_block;

t_attack        *add_attack(t_attack *head, char *type, int force);
t_block			*summon_spirit(char *type, int force);
void			print_attacks(t_attack *attacks);
t_attack        *create_attacks_list(char *type, int force);
int				divRoundClosest(const int n, const int d);


#endif
