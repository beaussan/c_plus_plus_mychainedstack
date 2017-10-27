#ifndef DEF_MYSTACK
#define DEF_MYSTACK

class Mystack
{
    // Méthodes
    public:
    	void push(int number);
    	int pop(void);
	Mystack *operator+(Mystack s2);
	void clear();
};

#endif
