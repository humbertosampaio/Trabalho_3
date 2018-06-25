#ifndef TRABALHO_3_HUFFMANTREE_H
#define TRABALHO_3_HUFFMANTREE_H

#include <set>
#include <vector>
#include "HuffmanNode.h"
#include "CharPathPair.h"

using namespace std;

class HuffmanTree
{
	public:
	HuffmanTree(char key);
	HuffmanTree(string text) : HuffmanTree(text[0])
	{
		for (int i = 1; i < (int)text.size(); i++)
			insert(text[i]);
	};

	void insert(char key);
	HuffmanNode* search(string path);

	void restructureTree(HuffmanNode* insertedNode);

	private:
	set<CharPathPair> dictionary;
	HuffmanNode* root;
	HuffmanNode* ScapeNodeFather; // O pr�ximo n� a ser inserido deve ficar � direita do Escape Node,
								  // e o novo escape node ser� o filho � esquerda do antigo

	vector<HuffmanNode*> fillQueue();
};

#endif //TRABALHO_3_HUFFMANTREE_H