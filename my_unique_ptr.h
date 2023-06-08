#pragma once

template<class T>
class my_unique_ptr {
public:
	my_unique_ptr(T* raw_ptr);
	~my_unique_ptr();
	T& operator* ();
	T* operator-> ();
	T* release();
	my_unique_ptr(const my_unique_ptr&) = delete;
	my_unique_ptr& operator= (const my_unique_ptr&) = delete;
private:
	T* ptr_;
};

template<class T>
my_unique_ptr<T>::my_unique_ptr(T* raw_ptr) {
	ptr_ = raw_ptr;
}

template<class T>
my_unique_ptr<T>::~my_unique_ptr() {
	delete ptr_;
}

template<class T>
T& my_unique_ptr<T>:: operator* () {
	return *ptr_;
}

template<class T>
T* my_unique_ptr<T>:: operator-> () {
	return ptr_;
}

template<class T>
T* my_unique_ptr<T>::release() {
	T* result = ptr_;
	ptr_ = nullptr;
	return result;
}