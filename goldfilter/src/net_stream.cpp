#include "net_stream.hpp"

NetStream::NetStream(const std::string &name, const std::string &ns, const std::string &id)
    : name(name),
      ns(ns),
      id(id),
      flag(STREAM_NOOP)
{
}

NetStream::~NetStream()
{
}