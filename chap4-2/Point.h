class Point{
    private:
    int x;
    int y;
    public:
    Point(const int &xpos, const int &ypos);
    int getX() const;
    int getY() const;
    bool setx(int xpos);
    bool sety(int ypos);
};