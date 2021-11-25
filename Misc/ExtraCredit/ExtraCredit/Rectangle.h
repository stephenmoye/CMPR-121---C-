class Rectangle
{
private:
	float width;
	float length;
	static int countRectangles;
public:
	Rectangle()
	{
		width = 0;
		length = 0;
		countRectangles++;
	};
	~Rectangle();
	void setDimensions(float width, float length);
	int getCount()const;
	friend void displayCount(Rectangle& rectangle);
	friend ostream& operator <<(ostream& stream, Rectangle& rectangle) 
	{
		return stream;
	}
};

