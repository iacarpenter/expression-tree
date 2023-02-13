#ifndef EXPRESSION_TREE
#define EXPRESSION_TREE

template <typename T>
class ExpressionTree
{
private:
    struct ExpressionTreeNode
    {
        ExpressionTreeNode(const T& o = T(), ExpressionTreeNode* l = nullptr, ExpressionTreeNode* r = nullptr)
                : Operand{o}, left{l}, right{r}
        {
            isOperator = false;
        }

        ExpressionTreeNode(const char& o, ExpressionTreeNode* l = nullptr, ExpressionTreeNode* r = nullptr)
            : Operator{o}, left{l}, right{r}
        {
            isOperator = true;
        }

        T Operand;
        char Operator;
        bool isOperator;
        ExpressionTreeNode *left;
        ExpressionTreeNode *right;
    };
};

#endif // EXPRESSION_TREE