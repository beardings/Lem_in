//
// Created by Mykola Ponomarov on 24.05.17.
//

#include "lem_in.h"

t_link *create_link(void)
{
	t_link *link;

	link = (t_link *)malloc(sizeof(t_link));
	link->link = NULL;
	link->next = NULL;
	return (link);
}

t_in *create_room(void)
{
	t_in *room;

	room = (t_in *)malloc(sizeof(t_in));
	room->num_r = NULL;
	room->next = NULL;
	room->links = create_link();
	return (room);
}

t_lem *create_lemin(void)
{
	t_lem *lemin;

	lemin = (t_lem *)malloc(sizeof(t_lem));
	lemin->ants = 0;
	lemin->end = NULL;
	lemin->start = NULL;
	lemin->room = create_room();
	return (lemin);
}