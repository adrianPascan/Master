/**
 * Autogenerated by Thrift Compiler (0.14.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "Task_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace Task2 {

int _kFetchStatusValues[] = {
  FetchStatus::PENDING,
  FetchStatus::ITEM,
  FetchStatus::ENDED
};
const char* _kFetchStatusNames[] = {
  "PENDING",
  "ITEM",
  "ENDED"
};
const std::map<int, const char*> _FetchStatus_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(3, _kFetchStatusValues, _kFetchStatusNames), ::apache::thrift::TEnumIterator(-1, nullptr, nullptr));

std::ostream& operator<<(std::ostream& out, const FetchStatus::type& val) {
  std::map<int, const char*>::const_iterator it = _FetchStatus_VALUES_TO_NAMES.find(val);
  if (it != _FetchStatus_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

std::string to_string(const FetchStatus::type& val) {
  std::map<int, const char*>::const_iterator it = _FetchStatus_VALUES_TO_NAMES.find(val);
  if (it != _FetchStatus_VALUES_TO_NAMES.end()) {
    return std::string(it->second);
  } else {
    return std::to_string(static_cast<int>(val));
  }
}


InvalidKeyException::~InvalidKeyException() noexcept {
}


void InvalidKeyException::__set_invalidKey(const int32_t val) {
  this->invalidKey = val;
}

void InvalidKeyException::__set_expectedKey(const int32_t val) {
  this->expectedKey = val;
}
std::ostream& operator<<(std::ostream& out, const InvalidKeyException& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t InvalidKeyException::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->invalidKey);
          this->__isset.invalidKey = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->expectedKey);
          this->__isset.expectedKey = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t InvalidKeyException::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("InvalidKeyException");

  xfer += oprot->writeFieldBegin("invalidKey", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->invalidKey);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("expectedKey", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->expectedKey);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(InvalidKeyException &a, InvalidKeyException &b) {
  using ::std::swap;
  swap(a.invalidKey, b.invalidKey);
  swap(a.expectedKey, b.expectedKey);
  swap(a.__isset, b.__isset);
}

InvalidKeyException::InvalidKeyException(const InvalidKeyException& other0) : TException() {
  invalidKey = other0.invalidKey;
  expectedKey = other0.expectedKey;
  __isset = other0.__isset;
}
InvalidKeyException& InvalidKeyException::operator=(const InvalidKeyException& other1) {
  invalidKey = other1.invalidKey;
  expectedKey = other1.expectedKey;
  __isset = other1.__isset;
  return *this;
}
void InvalidKeyException::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "InvalidKeyException(";
  out << "invalidKey=" << to_string(invalidKey);
  out << ", " << "expectedKey=" << to_string(expectedKey);
  out << ")";
}

const char* InvalidKeyException::what() const noexcept {
  try {
    std::stringstream ss;
    ss << "TException - service has thrown: " << *this;
    this->thriftTExceptionMessageHolder_ = ss.str();
    return this->thriftTExceptionMessageHolder_.c_str();
  } catch (const std::exception&) {
    return "TException - service has thrown: InvalidKeyException";
  }
}


ProtocolException::~ProtocolException() noexcept {
}


void ProtocolException::__set_message(const std::string& val) {
  this->message = val;
}
std::ostream& operator<<(std::ostream& out, const ProtocolException& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t ProtocolException::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t ProtocolException::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("ProtocolException");

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ProtocolException &a, ProtocolException &b) {
  using ::std::swap;
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

ProtocolException::ProtocolException(const ProtocolException& other2) : TException() {
  message = other2.message;
  __isset = other2.__isset;
}
ProtocolException& ProtocolException::operator=(const ProtocolException& other3) {
  message = other3.message;
  __isset = other3.__isset;
  return *this;
}
void ProtocolException::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "ProtocolException(";
  out << "message=" << to_string(message);
  out << ")";
}

const char* ProtocolException::what() const noexcept {
  try {
    std::stringstream ss;
    ss << "TException - service has thrown: " << *this;
    this->thriftTExceptionMessageHolder_ = ss.str();
    return this->thriftTExceptionMessageHolder_.c_str();
  } catch (const std::exception&) {
    return "TException - service has thrown: ProtocolException";
  }
}


ItemA::~ItemA() noexcept {
}


void ItemA::__set_fieldX(const std::string& val) {
  this->fieldX = val;
}

void ItemA::__set_fieldY(const std::vector<int16_t> & val) {
  this->fieldY = val;
}

void ItemA::__set_fieldZ(const int32_t val) {
  this->fieldZ = val;
__isset.fieldZ = true;
}
std::ostream& operator<<(std::ostream& out, const ItemA& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t ItemA::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_fieldX = false;
  bool isset_fieldY = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->fieldX);
          isset_fieldX = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->fieldY.clear();
            uint32_t _size4;
            ::apache::thrift::protocol::TType _etype7;
            xfer += iprot->readListBegin(_etype7, _size4);
            this->fieldY.resize(_size4);
            uint32_t _i8;
            for (_i8 = 0; _i8 < _size4; ++_i8)
            {
              xfer += iprot->readI16(this->fieldY[_i8]);
            }
            xfer += iprot->readListEnd();
          }
          isset_fieldY = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->fieldZ);
          this->__isset.fieldZ = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_fieldX)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_fieldY)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t ItemA::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("ItemA");

  xfer += oprot->writeFieldBegin("fieldX", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->fieldX);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("fieldY", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_I16, static_cast<uint32_t>(this->fieldY.size()));
    std::vector<int16_t> ::const_iterator _iter9;
    for (_iter9 = this->fieldY.begin(); _iter9 != this->fieldY.end(); ++_iter9)
    {
      xfer += oprot->writeI16((*_iter9));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  if (this->__isset.fieldZ) {
    xfer += oprot->writeFieldBegin("fieldZ", ::apache::thrift::protocol::T_I32, 3);
    xfer += oprot->writeI32(this->fieldZ);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ItemA &a, ItemA &b) {
  using ::std::swap;
  swap(a.fieldX, b.fieldX);
  swap(a.fieldY, b.fieldY);
  swap(a.fieldZ, b.fieldZ);
  swap(a.__isset, b.__isset);
}

ItemA::ItemA(const ItemA& other10) {
  fieldX = other10.fieldX;
  fieldY = other10.fieldY;
  fieldZ = other10.fieldZ;
  __isset = other10.__isset;
}
ItemA& ItemA::operator=(const ItemA& other11) {
  fieldX = other11.fieldX;
  fieldY = other11.fieldY;
  fieldZ = other11.fieldZ;
  __isset = other11.__isset;
  return *this;
}
void ItemA::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "ItemA(";
  out << "fieldX=" << to_string(fieldX);
  out << ", " << "fieldY=" << to_string(fieldY);
  out << ", " << "fieldZ="; (__isset.fieldZ ? (out << to_string(fieldZ)) : (out << "<null>"));
  out << ")";
}


FetchResult::~FetchResult() noexcept {
}


void FetchResult::__set_status(const FetchStatus::type val) {
  this->status = val;
}

void FetchResult::__set_item(const ItemA& val) {
  this->item = val;
}
std::ostream& operator<<(std::ostream& out, const FetchResult& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t FetchResult::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast12;
          xfer += iprot->readI32(ecast12);
          this->status = (FetchStatus::type)ecast12;
          this->__isset.status = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->item.read(iprot);
          this->__isset.item = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t FetchResult::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("FetchResult");

  xfer += oprot->writeFieldBegin("status", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->status);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("item", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->item.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(FetchResult &a, FetchResult &b) {
  using ::std::swap;
  swap(a.status, b.status);
  swap(a.item, b.item);
  swap(a.__isset, b.__isset);
}

FetchResult::FetchResult(const FetchResult& other13) {
  status = other13.status;
  item = other13.item;
  __isset = other13.__isset;
}
FetchResult& FetchResult::operator=(const FetchResult& other14) {
  status = other14.status;
  item = other14.item;
  __isset = other14.__isset;
  return *this;
}
void FetchResult::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "FetchResult(";
  out << "status=" << to_string(status);
  out << ", " << "item=" << to_string(item);
  out << ")";
}

} // namespace
