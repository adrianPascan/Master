/**
 * Autogenerated by Thrift Compiler (0.14.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Reports_H
#define Reports_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include <memory>
#include "Task_types.h"

namespace Task2 {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class ReportsIf {
 public:
  virtual ~ReportsIf() {}
  virtual bool saveSummary(const Summary& summary) = 0;
};

class ReportsIfFactory {
 public:
  typedef ReportsIf Handler;

  virtual ~ReportsIfFactory() {}

  virtual ReportsIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(ReportsIf* /* handler */) = 0;
};

class ReportsIfSingletonFactory : virtual public ReportsIfFactory {
 public:
  ReportsIfSingletonFactory(const ::std::shared_ptr<ReportsIf>& iface) : iface_(iface) {}
  virtual ~ReportsIfSingletonFactory() {}

  virtual ReportsIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(ReportsIf* /* handler */) {}

 protected:
  ::std::shared_ptr<ReportsIf> iface_;
};

class ReportsNull : virtual public ReportsIf {
 public:
  virtual ~ReportsNull() {}
  bool saveSummary(const Summary& /* summary */) {
    bool _return = false;
    return _return;
  }
};

typedef struct _Reports_saveSummary_args__isset {
  _Reports_saveSummary_args__isset() : summary(false) {}
  bool summary :1;
} _Reports_saveSummary_args__isset;

class Reports_saveSummary_args {
 public:

  Reports_saveSummary_args(const Reports_saveSummary_args&);
  Reports_saveSummary_args& operator=(const Reports_saveSummary_args&);
  Reports_saveSummary_args() {
  }

  virtual ~Reports_saveSummary_args() noexcept;
  Summary summary;

  _Reports_saveSummary_args__isset __isset;

  void __set_summary(const Summary& val);

  bool operator == (const Reports_saveSummary_args & rhs) const
  {
    if (!(summary == rhs.summary))
      return false;
    return true;
  }
  bool operator != (const Reports_saveSummary_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Reports_saveSummary_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Reports_saveSummary_pargs {
 public:


  virtual ~Reports_saveSummary_pargs() noexcept;
  const Summary* summary;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Reports_saveSummary_result__isset {
  _Reports_saveSummary_result__isset() : success(false), protocolException(false) {}
  bool success :1;
  bool protocolException :1;
} _Reports_saveSummary_result__isset;

class Reports_saveSummary_result {
 public:

  Reports_saveSummary_result(const Reports_saveSummary_result&);
  Reports_saveSummary_result& operator=(const Reports_saveSummary_result&);
  Reports_saveSummary_result() : success(0) {
  }

  virtual ~Reports_saveSummary_result() noexcept;
  bool success;
  ProtocolException protocolException;

  _Reports_saveSummary_result__isset __isset;

  void __set_success(const bool val);

  void __set_protocolException(const ProtocolException& val);

  bool operator == (const Reports_saveSummary_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(protocolException == rhs.protocolException))
      return false;
    return true;
  }
  bool operator != (const Reports_saveSummary_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Reports_saveSummary_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Reports_saveSummary_presult__isset {
  _Reports_saveSummary_presult__isset() : success(false), protocolException(false) {}
  bool success :1;
  bool protocolException :1;
} _Reports_saveSummary_presult__isset;

class Reports_saveSummary_presult {
 public:


  virtual ~Reports_saveSummary_presult() noexcept;
  bool* success;
  ProtocolException protocolException;

  _Reports_saveSummary_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class ReportsClient : virtual public ReportsIf {
 public:
  ReportsClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  ReportsClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  bool saveSummary(const Summary& summary);
  void send_saveSummary(const Summary& summary);
  bool recv_saveSummary();
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class ReportsProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::std::shared_ptr<ReportsIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (ReportsProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_saveSummary(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  ReportsProcessor(::std::shared_ptr<ReportsIf> iface) :
    iface_(iface) {
    processMap_["saveSummary"] = &ReportsProcessor::process_saveSummary;
  }

  virtual ~ReportsProcessor() {}
};

class ReportsProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  ReportsProcessorFactory(const ::std::shared_ptr< ReportsIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::std::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::std::shared_ptr< ReportsIfFactory > handlerFactory_;
};

class ReportsMultiface : virtual public ReportsIf {
 public:
  ReportsMultiface(std::vector<std::shared_ptr<ReportsIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~ReportsMultiface() {}
 protected:
  std::vector<std::shared_ptr<ReportsIf> > ifaces_;
  ReportsMultiface() {}
  void add(::std::shared_ptr<ReportsIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  bool saveSummary(const Summary& summary) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->saveSummary(summary);
    }
    return ifaces_[i]->saveSummary(summary);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class ReportsConcurrentClient : virtual public ReportsIf {
 public:
  ReportsConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(prot);
  }
  ReportsConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  bool saveSummary(const Summary& summary);
  int32_t send_saveSummary(const Summary& summary);
  bool recv_saveSummary(const int32_t seqid);
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif

} // namespace

#endif
