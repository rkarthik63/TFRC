#ifndef A_H
#define A_H

class A {
public:
	A();
    A(int a);

	int getRoot() const;
	void setRoot(int a);
private:
	int root;
};

#endif /* end A_H */
