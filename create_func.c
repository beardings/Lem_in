//
// Created by Mykola Ponomarov on 24.05.17.
//

#include "lem_in.h"

t_link *create_link(void)
{
	t_link *link;

	link = (t_link *)malloc(sizeof(t_link));
	link->link = 0;
	link->next = 0;
	return (link);
}

t_in *create_room(void)
{
	t_in *room;

	room = (t_in *)malloc(sizeof(t_in));
	room->num_r = 0;
	room->next = 0;
	room->links = create_link();
	return (room);
}

t_lem *create_lemin(void)
{
	t_lem *lemin;

	lemin = (t_lem *)malloc(sizeof(t_lem));
	lemin->ants = 0;
	lemin->end = 0;
	lemin->start = 0;
	lemin->room = create_room();
	return (lemin);
}