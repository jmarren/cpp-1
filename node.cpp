#include <vector>
#include <iostream>

class Node {
	public:
		std::vector<Node> children;
		int value;

		void addChild(Node node) {
			children.push_back(node);
		}

		void print() { 
			std::cout << "val: " << value << std::endl;
			for (Node c : children)  {
				c.print();
			}
		}
};

Node::Node(int val) {
	value = val;
}


