/**
 * Autogenerated by Thrift Compiler (0.14.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Task_TYPES_H
#define Task_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <functional>
#include <memory>


namespace Task2 {

struct FetchStatus {
  enum type {
    PENDING = 1,
    ITEM = 2,
    ENDED = 3
  };
};

extern const std::map<int, const char*> _FetchStatus_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const FetchStatus::type& val);

std::string to_string(const FetchStatus::type& val);

typedef std::map<std::string, std::set<std::string> >  Summary;

class InvalidKeyException;

class ProtocolException;

class ItemA;

class FetchResult;

typedef struct _InvalidKeyException__isset {
  _InvalidKeyException__isset() : invalidKey(false), expectedKey(false) {}
  bool invalidKey :1;
  bool expectedKey :1;
} _InvalidKeyException__isset;

class InvalidKeyException : public ::apache::thrift::TException {
 public:

  InvalidKeyException(const InvalidKeyException&);
  InvalidKeyException& operator=(const InvalidKeyException&);
  InvalidKeyException() : invalidKey(0), expectedKey(0) {
  }

  virtual ~InvalidKeyException() noexcept;
  int32_t invalidKey;
  int32_t expectedKey;

  _InvalidKeyException__isset __isset;

  void __set_invalidKey(const int32_t val);

  void __set_expectedKey(const int32_t val);

  bool operator == (const InvalidKeyException & rhs) const
  {
    if (!(invalidKey == rhs.invalidKey))
      return false;
    if (!(expectedKey == rhs.expectedKey))
      return false;
    return true;
  }
  bool operator != (const InvalidKeyException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InvalidKeyException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const noexcept;
};

void swap(InvalidKeyException &a, InvalidKeyException &b);

std::ostream& operator<<(std::ostream& out, const InvalidKeyException& obj);

typedef struct _ProtocolException__isset {
  _ProtocolException__isset() : message(false) {}
  bool message :1;
} _ProtocolException__isset;

class ProtocolException : public ::apache::thrift::TException {
 public:

  ProtocolException(const ProtocolException&);
  ProtocolException& operator=(const ProtocolException&);
  ProtocolException() : message() {
  }

  virtual ~ProtocolException() noexcept;
  std::string message;

  _ProtocolException__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const ProtocolException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const ProtocolException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ProtocolException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const noexcept;
};

void swap(ProtocolException &a, ProtocolException &b);

std::ostream& operator<<(std::ostream& out, const ProtocolException& obj);

typedef struct _ItemA__isset {
  _ItemA__isset() : fieldZ(false) {}
  bool fieldZ :1;
} _ItemA__isset;

class ItemA : public virtual ::apache::thrift::TBase {
 public:

  ItemA(const ItemA&);
  ItemA& operator=(const ItemA&);
  ItemA() : fieldX(), fieldZ(0) {
  }

  virtual ~ItemA() noexcept;
  std::string fieldX;
  std::vector<int16_t>  fieldY;
  int32_t fieldZ;

  _ItemA__isset __isset;

  void __set_fieldX(const std::string& val);

  void __set_fieldY(const std::vector<int16_t> & val);

  void __set_fieldZ(const int32_t val);

  bool operator == (const ItemA & rhs) const
  {
    if (!(fieldX == rhs.fieldX))
      return false;
    if (!(fieldY == rhs.fieldY))
      return false;
    if (__isset.fieldZ != rhs.__isset.fieldZ)
      return false;
    else if (__isset.fieldZ && !(fieldZ == rhs.fieldZ))
      return false;
    return true;
  }
  bool operator != (const ItemA &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ItemA & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(ItemA &a, ItemA &b);

std::ostream& operator<<(std::ostream& out, const ItemA& obj);

typedef struct _FetchResult__isset {
  _FetchResult__isset() : status(false), item(false) {}
  bool status :1;
  bool item :1;
} _FetchResult__isset;

class FetchResult : public virtual ::apache::thrift::TBase {
 public:

  FetchResult(const FetchResult&);
  FetchResult& operator=(const FetchResult&);
  FetchResult() : status((FetchStatus::type)0) {
  }

  virtual ~FetchResult() noexcept;
  /**
   * 
   * @see FetchStatus
   */
  FetchStatus::type status;
  ItemA item;

  _FetchResult__isset __isset;

  void __set_status(const FetchStatus::type val);

  void __set_item(const ItemA& val);

  bool operator == (const FetchResult & rhs) const
  {
    if (!(status == rhs.status))
      return false;
    if (!(item == rhs.item))
      return false;
    return true;
  }
  bool operator != (const FetchResult &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const FetchResult & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(FetchResult &a, FetchResult &b);

std::ostream& operator<<(std::ostream& out, const FetchResult& obj);

} // namespace

#endif
