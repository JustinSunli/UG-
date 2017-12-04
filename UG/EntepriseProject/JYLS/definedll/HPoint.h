#pragma once
//类型点;
class  HPoint
{
public:
	float		x;	
	float		y;	
	float		z;	
	HPoint() : x(0), y(0), z(0) {};
	HPoint(double*pt){ x=pt[0],y=pt[1];z=pt[2];}
	HPoint(float X, float Y, float Z=0.0f) : x(X), y(Y), z(Z) {};

	HPoint(HPoint const * p) : x(p->x), y(p->y), z(p->z) {};

	HPoint(HPoint const & p) : x(p.x), y(p.y), z(p.z) {};

	void Set(float X, float Y, float Z=0.0f) { x=X; y=Y; z=Z; };

	void Set(HPoint *p) { x=p->x; y=p->y; z=p->z; };

	void Set(HPoint const *p) { x=p->x; y=p->y; z=p->z; };

	void Set(HPoint &p) { x=p.x; y=p.y; z=p.z; };

	void Set(const HPoint &p) { x=p.x; y=p.y; z=p.z; };

	void Add(float X, float Y, float Z=0.0){ x+=X; y+=Y; z+=Z; };

	HPoint const operator -(const HPoint &p2) const
	{
		return HPoint(x-p2.x, y-p2.y, z-p2.z);
	}

	HPoint const operator +(const HPoint &p2) const
	{
		return HPoint(x+p2.x, y+p2.y, z+p2.z);
	}

	HPoint::HPoint(const double* pt)
	{
		x=pt[0];
		y=pt[1]; 
		z=pt[2];
	}

	double   operator * (const HPoint& rhs) const
	{
		return x*rhs.x+y*rhs.y+z*rhs.z;
	}

	HPoint const operator *(float const rhs) const
	{
		return HPoint(x*rhs, y*rhs, z*rhs);
	}

	HPoint const operator /(float const rhs) const
	{
		return HPoint(x/rhs, y/rhs, z/rhs);
	}

	HPoint const & operator += (HPoint const & rhs)
	{
		x += rhs.x;
		y += rhs.y;
		z += rhs.z;
		return *this;
	}

	//添加赋值运算符;
	HPoint&operator=(const double*pPt){
		this->x=pPt[0];
		this->y=pPt[1];
		this->z=pPt[2];    
		return   *this;
	}

	HPoint const & operator -= (HPoint const & rhs)
	{
		x -= rhs.x;
		y -= rhs.y;
		z -= rhs.z;
		return *this;
	}

	HPoint const & operator *= (float const rhs)
	{
		x *= rhs;
		y *= rhs;
		z *= rhs;
		return *this;
	}

	HPoint const & operator /= (float const rhs)
	{
		x /= rhs;
		y /= rhs;
		z /= rhs;
		return *this;
	}

	bool operator ==(HPoint const & rhs) const
	{
		return Equal(&rhs);
	}

	bool operator !=(HPoint const & rhs) const
	{
		return !Equal(&rhs);
	}

#define HPOINT_EPSILON (1e-5f)  

	bool Equal(HPoint const *p, float epsi = HPOINT_EPSILON) const { 
		return (bool)(
			(x - p->x < epsi) && (x - p->x > -epsi) &&
			(y - p->y < epsi) && (y - p->y > -epsi) &&
			(z - p->z < epsi) && (z - p->z > -epsi));
	};

	bool Equal(HPoint const &p, float epsi = HPOINT_EPSILON) const { 
		return Equal(&p, epsi);
	};
};

