#ifndef RESERVOIR_H
#define RESERVOIR_H

#include <string>

class Reservoir {
public:
    explicit Reservoir(const std::string& name);
    Reservoir(const std::string& name, double width, double length, double maxDepth);
    ~Reservoir(); 
    Reservoir(const Reservoir& other); 

    double calculateVolume() const;
    double calculateSurfaceArea() const;
    bool isSameType(const Reservoir& other) const;
    bool operator<(const Reservoir& other) const;

   
    void setName(const std::string& name);
    std::string getName() const;
    void setWidth(double width);
    double getWidth() const;
    void setLength(double length);
    double getLength() const;
    void setMaxDepth(double maxDepth);
    double getMaxDepth() const;

    
    void displayInfo() const;

private:
    std::string name;
    double width;
    double length;
    double maxDepth;
};

#endif 
