#ifndef PATHFINDING_H
#define PATHFINDING_H

/* queue_t */
#include "queues.h"
/* graph_t */
#include "graphs.h"


/**
 * struct point_s - Structure storing coordinates
 *
 * @x: X coordinate
 * @y: Y coordinate
 */
typedef struct point_s
{
	int x;
	int y;
} point_t;


/* 0-backtracking_array.c */
queue_t *backtracking_array(char **map, int rows, int cols,
			    point_t const *start, point_t const *target);

/* 1-backtracking_graph.c */
queue_t *backtracking_graph(graph_t *graph, vertex_t const *start,
			    vertex_t const *target);

/* 2-dijkstra_graph.c */
queue_t *dijkstra_graph(graph_t *graph, vertex_t const *start,
			vertex_t const *target);

/* 100-a_star_graph.c */
queue_t *a_star_graph(graph_t *graph, vertex_t const *start,
		      vertex_t const *target);


#endif /* PATHFINDING_H */