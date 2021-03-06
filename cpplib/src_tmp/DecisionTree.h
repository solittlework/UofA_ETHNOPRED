// DecisionTree.h: interface for the DecisionTree class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DECISIONTREE_H__FCC1D907_3482_4CD4_9FB8_4352829DF1B4__INCLUDED_)
#define AFX_DECISIONTREE_H__FCC1D907_3482_4CD4_9FB8_4352829DF1B4__INCLUDED_
#include "common.hpp"
#include "TreeNode.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class DecisionTree
{
public:
	void RemoveNode(TreeNode* node);
	void OutputBinaryTree(const std::string & tag, TreeNode* currentNode);
	void Output();
	std::string AskQuestion(TreeNode* node, std::vector<std::vector<std::string> > inputVector);
	std::string Query(std::vector<std::vector<std::string> > inputVector);
	std::string QueryBinaryTree(TreeNode* rootNode, std::vector<std::vector<std::string> > inputVector);
	bool SearchTreeAndAddNoNode(TreeNode* currentNode, const std::string & existingNodeID, const std::string & newNodeID, const std::string & newQorA, const double & newNodeValue);
	void AddNoNode(const std::string & existingNodeID, const std::string & newNodeID, const std::string & newQorA, const double & newNodeValue);
	bool SearchTreeAndAddYesNode(TreeNode* currentNode, const std::string & existingNodeID, const std::string & newNodeID, const std::string & newQorA, const double & newNodeValue);
	void AddYesNode(const std::string & existingNodeID, const std::string & newNodeID, const std::string & newQorA, const double & newNodeValue);
	void CreateRootNode(const std::string & nodeID, const std::string & newQorA, const double & nodeValue);
	double findPosReturnValue(std::vector<std::vector<std::string> > inputVector, const std::string & a);
	//the key root node to which all other nodes are added.
	TreeNode* m_pRootNode;
	DecisionTree();
	virtual ~DecisionTree();

};

#endif // !defined(AFX_DECISIONTREE_H__FCC1D907_3482_4CD4_9FB8_4352829DF1B4__INCLUDED_)
