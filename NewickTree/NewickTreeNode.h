#ifndef NEWICKTREENODE_H
#define NEWICKTREENODE_H

#include <string>
#include <memory>
#include <vector>
#include <iostream>


struct NewickTreeNode{
    std::string name;
    float length; 
    std::vector<std::unique_ptr<NewickTreeNode>> children;

    NewickTreeNode(std::string name, float length) : name(name), length(length){}

    void print(int depth=1){
        for (int i = 0; i < depth; i++){
            std::cout << " ";
        }

        std::cout << name << " " << length << std::endl;
        for (auto& child : children){
            child->print(depth+1);
        }
    }
};


#endif // NEWICKTREENODE_H