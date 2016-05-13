//
// Created by Brian Sumer on 5/12/16.
//


template <class T> class less {
public:
	bool operator() (const T& lhs, const T& rhs) const {return (lhs < rhs);}
};


template <>
class less<std::string> {
public:
	bool operator() (const std::string &lhs, const std::string &rhs) {return (lhs < rhs);}
};


template <>
class less<const char *> {
public:
	bool operator() (const char *lhs, const char *rhs) {return (*lhs < *rhs);}
};

