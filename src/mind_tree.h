#ifndef MIND_TREE_H
#define MIND_TREE_H

enum mind_tree_type_t
{
	MIND_TREE_TYPE_CAIRO,
	MIND_TREE_TYPE_RECTANGE,
	MIND_TREE_TYPE_LIST
};

struct mind_tree_t
{
	int cx;
	int cy;
	struct mind_tree_t* parent;

	mind_tree_type_t type;
	
	char text[256];
};

void draw_mind_tree(mind_tree_t* tree);


#endif