#include <string>
#include <vector>
#include <stack>
#include <iostream>

class Node {
public:
    std::string val;
    Node* left;
    Node* right;


    Node(std::string initialVal) {
      val = initialVal;
      left = nullptr;
      right = nullptr;
    }
};


std::vector<std::string> depthFirstValues(Node* root) {
  std::vector<std::string> values;
  std::stack<Node*> stack;
  if (root != nullptr) {
    stack.push(root);
  }

  while (stack.size()) {
    Node* current = stack.top();
    stack.pop();
    values.push_back(current->val);
    if (current->right != nullptr) {
      stack.push(current->right);
    }
    if (current->left != nullptr) {
      stack.push(current->left);
    }
  }
  return values;
}



void run() {
  Node a("a");
  Node b("b");
  Node c("c");
  Node d("d");
  Node e("e");
  Node f("f");
  Node g("g");

  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;
  c.right = &f;
  e.left = &g;

  std::vector<std::string> result = depthFirstValues(&a);

  for(const auto &value : result) {
    std::cout << value << " ";
  }
  std::cout << std::endl;
}

//      a
//    /   \
//   b     c
//  / \     \
// d   e     f
//    /
//   g

//  depthFirstValues(&a);
//    -> ["a", "b", "d", "e", "g", "c", "f"]



