module;

#include <vector>

export module A.Vector;



export
{
	template<typename T>
	class Vec: private std::vector<T>
	{
	public:
		using std::vector<T>::push_back;
		using std::vector<T>::front;
		void pop();
	};
}

module: private;

template<typename T>
void Vec<T>::pop()
{
	std::vector<T>::pop_back();
}
