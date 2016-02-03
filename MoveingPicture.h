#pragma once
ref class moveingPicture
{


	int x;//The coordinates for a picturebox
	int y;


public:
	void moveingPicture::setX(int nx)//changes the value of x to the given value
	{
		x += nx;
	}
	void moveingPicture::setY(int ny)// changes the value of y to the given value
	{
		y += ny;
	}

	int moveingPicture::getX()// retreives the x value
	{
		return x;
	}

	int moveingPicture::getY()//retreives the y value
	{
		return y;
	}
};