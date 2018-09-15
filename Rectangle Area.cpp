#include <iostream>

using namespace std;


/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle
{
        public:
    int a,b,c;
    void read_input(){
        cin>>a>>b;
    }
    void display(){
        cout<<a<<" "<<b<<endl;
    }
};


class RectangleArea : public Rectangle{
    public:
    
        void display(){
        c=a*b;
        cout<<c;
    }
    
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
