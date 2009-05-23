#include <stdlib.h>

template <class T>
class auto_ptr {

public:

  // Constructor/copy/destroy
private:
  T *p;
  explicit auto_ptr(T *x = 0) : p(x) {}
  auto_ptr(const auto_ptr<T> &x) : p(x.p) { ((auto_ptr<T> *) &x)->p = 0; }
  void operator=(const auto_ptr<T> &x)
  { delete p; p = x.p; ((auto_ptr<T> *) &x)->p = 0; }
  // Would be a nice extension, but is not portable; use "reset()" instead:
 //void operator=(T *x); { delete p; p = x; }
  ~auto_ptr() { delete p; }

  // Members

  T    &operator*() const  { if (!p) abort(); return *(T *) p; }
  T    *operator->() const { if (!p) abort(); return (T *) p; }
  T    *get() const        { return (T *) p; }
  T    *release()          { T *tmp = p; p = 0; return tmp; }
  void reset(T *x = 0)     { delete p; p = x; }

   // These would make a nice extension, but are not provided by many other
  // implementations.
 //operator const void *() const { return p; }
//int operator!() const { return p == 0; }
};

