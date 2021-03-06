// This file is generated by omniidl (C++ backend)- omniORB_3_0. Do not edit.
#ifndef __SynDataSets_hh__
#define __SynDataSets_hh__

#ifndef USE_omniORB_logStream
#define USE_omniORB_logStream
#endif

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB3/CORBA.h>
#endif

#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_SynDataSets
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_SynDataSets
#endif

#ifdef USE_stub_in_nt_dll
#ifndef USE_core_stub_in_nt_dll
#define USE_core_stub_in_nt_dll
#endif
#ifndef USE_dyn_stub_in_nt_dll
#define USE_dyn_stub_in_nt_dll
#endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif

_CORBA_GLOBAL_VAR _dyn_attr const CORBA::TypeCode_ptr _tc_DataSeq;

class DataSeq_var;

class DataSeq : public _CORBA_Unbounded_Sequence< CORBA::Any>  {
public:
  typedef DataSeq_var _var_type;
  inline DataSeq() {}
  inline DataSeq(const DataSeq& s)
    : _CORBA_Unbounded_Sequence< CORBA::Any> (s) {}

  inline DataSeq(_CORBA_ULong _max)
    : _CORBA_Unbounded_Sequence< CORBA::Any> (_max) {}
  inline DataSeq(_CORBA_ULong _max, _CORBA_ULong _len, CORBA::Any* _val, _CORBA_Boolean _rel=0)
    : _CORBA_Unbounded_Sequence< CORBA::Any> (_max, _len, _val, _rel) {}

  inline DataSeq& operator = (const DataSeq& s) {
    _CORBA_Unbounded_Sequence< CORBA::Any> ::operator=(s);
    return *this;
  }
};

class DataSeq_out;

class DataSeq_var {
public:
  typedef DataSeq T;
  typedef DataSeq_var T_var;

  inline DataSeq_var() : _pd_seq(0) {}
  inline DataSeq_var(T* s) : _pd_seq(s) {}
  inline DataSeq_var(const T_var& s) {
    if( s._pd_seq )  _pd_seq = new T(*s._pd_seq);
    else             _pd_seq = 0;
  }
  inline ~DataSeq_var() { if( _pd_seq )  delete _pd_seq; }

  inline T_var& operator = (T* s) {
    if( _pd_seq )  delete _pd_seq;
    _pd_seq = s;
    return *this;
  }
  inline T_var& operator = (const T_var& s) {
    if( s._pd_seq ) {
      if( !_pd_seq )  _pd_seq = new T;
      *_pd_seq = *s._pd_seq;
    } else if( _pd_seq ) {
      delete _pd_seq;
      _pd_seq = 0;
    }
    return *this;
  }

  inline CORBA::Any& operator [] (_CORBA_ULong s) {
    return (*_pd_seq)[s];
  }

  inline T* operator -> () { return _pd_seq; }
#if defined(__GNUG__) && __GNUG__ == 2 && __GNUC_MINOR__ == 7
  inline operator T& () const { return *_pd_seq; }
#else
  inline operator const T& () const { return *_pd_seq; }
  inline operator T& () { return *_pd_seq; }
#endif

  inline const T& in() const { return *_pd_seq; }
  inline T&       inout()    { return *_pd_seq; }
  inline T*&      out() {
    if( _pd_seq ) { delete _pd_seq; _pd_seq = 0; }
    return _pd_seq;
  }
  inline T* _retn() { T* tmp = _pd_seq; _pd_seq = 0; return tmp; }

  friend class DataSeq_out;

private:
  T* _pd_seq;
};

class DataSeq_out {
public:
  typedef DataSeq T;
  typedef DataSeq_var T_var;

  inline DataSeq_out(T*& s) : _data(s) { _data = 0; }
  inline DataSeq_out(T_var& s)
    : _data(s._pd_seq) { s = (T*) 0; }
  inline DataSeq_out(const DataSeq_out& s) : _data(s._data) {}
  inline DataSeq_out& operator = (const DataSeq_out& s) {
    _data = s._data;
    return *this;
  }  inline DataSeq_out& operator = (T* s) {
    _data = s;
    return *this;
  }
  inline operator T*&()  { return _data; }
  inline T*& ptr()       { return _data; }
  inline T* operator->() { return _data; }

  inline CORBA::Any& operator [] (_CORBA_ULong i) {
    return (*_data)[i];
  }

  T*& _data;

private:
  DataSeq_out();
  DataSeq_out& operator=(const T_var&);
};

#ifndef __SynDataSets__
#define __SynDataSets__

class SynDataSets;
class _objref_SynDataSets;
class _impl_SynDataSets;

typedef _objref_SynDataSets* SynDataSets_ptr;
typedef SynDataSets_ptr SynDataSetsRef;

class SynDataSets_Helper {
public:
  typedef SynDataSets_ptr _ptr_type;

  static _ptr_type _nil();
  static _CORBA_Boolean is_nil(_ptr_type);
  static void release(_ptr_type);
  static void duplicate(_ptr_type);
  static size_t NP_alignedSize(_ptr_type, size_t);
  static void marshalObjRef(_ptr_type, NetBufferedStream&);
  static _ptr_type unmarshalObjRef(NetBufferedStream&);
  static void marshalObjRef(_ptr_type, MemBufferedStream&);
  static _ptr_type unmarshalObjRef(MemBufferedStream&);
};

typedef _CORBA_ObjRef_Var<_objref_SynDataSets, SynDataSets_Helper> SynDataSets_var;
typedef _CORBA_ObjRef_OUT_arg<_objref_SynDataSets,SynDataSets_Helper > SynDataSets_out;

#endif

class SynDataSets {
public:
  // Declarations for this interface type.
  typedef SynDataSets_ptr _ptr_type;
  typedef SynDataSets_var _var_type;

  static _ptr_type _duplicate(_ptr_type);
  static _ptr_type _narrow(CORBA::Object_ptr);
  static _ptr_type _nil();

  static inline size_t _alignedSize(_ptr_type, size_t);
  static inline void _marshalObjRef(_ptr_type, NetBufferedStream&);
  static inline void _marshalObjRef(_ptr_type, MemBufferedStream&);

  static inline _ptr_type _unmarshalObjRef(NetBufferedStream& s) {
    CORBA::Object_ptr obj = CORBA::UnMarshalObjRef(_PD_repoId, s);
    _ptr_type result = _narrow(obj);
    CORBA::release(obj);
    return result;
  }

  static inline _ptr_type _unmarshalObjRef(MemBufferedStream& s) {
    CORBA::Object_ptr obj = CORBA::UnMarshalObjRef(_PD_repoId, s);
    _ptr_type result = _narrow(obj);
    CORBA::release(obj);
    return result;
  }

  static _core_attr const char* _PD_repoId;

  // Other IDL defined within this scope.
  
};

class _objref_SynDataSets :
  public virtual CORBA::Object, public virtual omniObjRef
{
public:
  CORBA::Long Lock(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, const char* ObjName);
  CORBA::Long UnLock(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, CORBA::Long index);
  CORBA::Any* GetData(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id);
  CORBA::Any* GetDataMember(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, CORBA::Long MemberId);
  CORBA::Long SetData(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, const CORBA::Any& data);
  CORBA::Long SetDataMember(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, CORBA::Long MemberId, const CORBA::Any& data);
  CORBA::Any* GetDataWithLock(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, CORBA::Long& Result, const char* ObjName);
  CORBA::Any* GetDataMemberWithLock(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, CORBA::Long MemberId, const CORBA::Any& data, CORBA::Long& Result, const char* ObjName);
  CORBA::Long SetDataWithLock(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, const CORBA::Any& data, CORBA::Long& Result, const char* ObjName);
  CORBA::Long SetDataMemberWithLock(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, CORBA::Long MemberId, const CORBA::Any& data, CORBA::Long& Result, const char* ObjName);
  CORBA::Any* GetDataWithOnce(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, CORBA::Long& Result, const char* ObjName);
  CORBA::Any* GetDataMemberWithOnce(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, CORBA::Long MemberId, CORBA::Long& Result, const char* ObjName);
  CORBA::Long SetDataWithOnce(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, const CORBA::Any& data, CORBA::Long& Result, const char* ObjName);
  CORBA::Long SetDataMemberWithOnce(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, CORBA::Long MemberId, const CORBA::Any& data, CORBA::Long& Result, const char* ObjName);
  DataSeq* SaveDataSets(CORBA::Long MapId, CORBA::Long StyleId);
  
  inline _objref_SynDataSets() { _PR_setobj(0); }  // nil
  _objref_SynDataSets(const char*, IOP::TaggedProfileList*, omniIdentity*, omniLocalIdentity*);

protected:
  virtual ~_objref_SynDataSets();

private:
  virtual void* _ptrToObjRef(const char*);

  _objref_SynDataSets(const _objref_SynDataSets&);
  _objref_SynDataSets& operator = (const _objref_SynDataSets&);
  // not implemented
};

class _pof_SynDataSets : public proxyObjectFactory {
public:
  inline _pof_SynDataSets() : proxyObjectFactory(SynDataSets::_PD_repoId) {}
  virtual ~_pof_SynDataSets();

  virtual omniObjRef* newObjRef(const char*, IOP::TaggedProfileList*,
                                omniIdentity*, omniLocalIdentity*);
  virtual _CORBA_Boolean is_a(const char*) const;
};

class _impl_SynDataSets :
  public virtual omniServant
{
public:
  virtual ~_impl_SynDataSets();

  virtual CORBA::Long Lock(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, const char* ObjName) = 0;
  virtual CORBA::Long UnLock(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, CORBA::Long index) = 0;
  virtual CORBA::Any* GetData(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id) = 0;
  virtual CORBA::Any* GetDataMember(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, CORBA::Long MemberId) = 0;
  virtual CORBA::Long SetData(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, const CORBA::Any& data) = 0;
  virtual CORBA::Long SetDataMember(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, CORBA::Long MemberId, const CORBA::Any& data) = 0;
  virtual CORBA::Any* GetDataWithLock(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, CORBA::Long& Result, const char* ObjName) = 0;
  virtual CORBA::Any* GetDataMemberWithLock(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, CORBA::Long MemberId, const CORBA::Any& data, CORBA::Long& Result, const char* ObjName) = 0;
  virtual CORBA::Long SetDataWithLock(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, const CORBA::Any& data, CORBA::Long& Result, const char* ObjName) = 0;
  virtual CORBA::Long SetDataMemberWithLock(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, CORBA::Long MemberId, const CORBA::Any& data, CORBA::Long& Result, const char* ObjName) = 0;
  virtual CORBA::Any* GetDataWithOnce(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, CORBA::Long& Result, const char* ObjName) = 0;
  virtual CORBA::Any* GetDataMemberWithOnce(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, CORBA::Long MemberId, CORBA::Long& Result, const char* ObjName) = 0;
  virtual CORBA::Long SetDataWithOnce(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, const CORBA::Any& data, CORBA::Long& Result, const char* ObjName) = 0;
  virtual CORBA::Long SetDataMemberWithOnce(CORBA::Long MapId, CORBA::Long StyleId, CORBA::Long Id, CORBA::Long MemberId, const CORBA::Any& data, CORBA::Long& Result, const char* ObjName) = 0;
  virtual DataSeq* SaveDataSets(CORBA::Long MapId, CORBA::Long StyleId) = 0;
  
public:  // Really protected, workaround for xlC
  virtual _CORBA_Boolean _dispatch(GIOP_S&);

private:
  virtual void* _ptrToInterface(const char*);
  virtual const char* _mostDerivedRepoId();
};

_CORBA_GLOBAL_VAR _dyn_attr const CORBA::TypeCode_ptr _tc_SynDataSets;

class POA_SynDataSets :
  public virtual _impl_SynDataSets,
  public virtual PortableServer::ServantBase
{
public:
  virtual ~POA_SynDataSets();

  inline SynDataSets_ptr _this() {
    return (SynDataSets_ptr) _do_this(SynDataSets::_PD_repoId);
  }
};

#undef _core_attr
#undef _dyn_attr

extern void operator <<= (CORBA::Any& _a, const DataSeq& _s);
inline void operator <<= (CORBA::Any& _a, DataSeq* _sp) {
  _a <<= *_sp;
  delete _sp;
}
extern _CORBA_Boolean operator >>= (const CORBA::Any& _a, DataSeq*& _sp);
extern _CORBA_Boolean operator >>= (const CORBA::Any& _a, const DataSeq*& _sp);

void operator<<=(CORBA::Any& _a, SynDataSets_ptr _s);
void operator<<=(CORBA::Any& _a, SynDataSets_ptr* _s);
CORBA::Boolean operator>>=(const CORBA::Any& _a, SynDataSets_ptr& _s);

inline size_t
SynDataSets::_alignedSize(SynDataSets_ptr obj, size_t offset) {
  return CORBA::AlignedObjRef(obj, _PD_repoId, 20, offset);
}

inline void
SynDataSets::_marshalObjRef(SynDataSets_ptr obj, NetBufferedStream& s) {
  CORBA::MarshalObjRef(obj, _PD_repoId, 20, s);
}

inline void
SynDataSets::_marshalObjRef(SynDataSets_ptr obj, MemBufferedStream& s) {
  CORBA::MarshalObjRef(obj, _PD_repoId, 20, s);
}

#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_SynDataSets
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_SynDataSets
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_SynDataSets
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_SynDataSets
#endif

#endif  // __SynDataSets_hh__

