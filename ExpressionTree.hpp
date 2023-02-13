#ifndef EXPRESSION_TREE
#define EXPRESSION_TREE

#import <string>

class ExpressionTree
{
private:
    struct ExpressionTreeNode
    {
        ExpressionTreeNode(ExpressionTreeNode* l = nullptr, ExpressionTreeNode* r = nullptr) : lft{l}, rght{r}
        {}

        virtual int evaluate() = 0;

    protected:
        ExpressionTreeNode* left() {
            return lft;
        }
        ExpressionTreeNode* right() {
            return rght;
        }

    private:
        ExpressionTreeNode *lft;
        ExpressionTreeNode *rght;
    };

    struct PlusNode: public ExpressionTreeNode {

        int evaluate() {
            return left()->evaluate() + right()->evaluate();
        }
    };
};

#endif // EXPRESSION_TREE