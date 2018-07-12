#include <iostream>
#include <string>
#include "Headers/HuffmanTree.h"
#include "Headers/HuffmanNode.h"
#include "Headers/LZW.h"
#include "Headers/Huffman.h"
#include "Headers/Question.h"
#include "Headers/FileUtils.h"

using namespace std;

int main()
{
	string text = "bookkeeper";
	//HuffmanTree* tree = new HuffmanTree(text);

	LZW lz;
	vector<Question> q;
	FileUtils::readFileQuestion("/home/edson/pythonquestions/Questions.csv", q);
    lz.compressQuestions(q);

	//system("PAUSE");
	return 0;
}