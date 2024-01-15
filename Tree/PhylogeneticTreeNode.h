#ifndef PHYLOGENETICTREENODE_H
#define PHYLOGENETICTREENODE_H

#include <string>
#include <memory>
#include <vector>
#include <iostream>


struct PhylogeneticTreeNode{
    std::string name;
    float length;
    std::vector<std::shared_ptr<PhylogeneticTreeNode>> children;

    PhylogeneticTreeNode(std::string name, float length) : name(name), length(length){}

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


#endif // PHYLOGENETICTREENODE_H
