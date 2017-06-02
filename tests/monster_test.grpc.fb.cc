// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: monster_test

#include "monster_test_generated.h"
#include "monster_test.grpc.fb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace MyGame {
namespace Example {

static const char* MonsterStorage_method_names[] = {
  "/MyGame.Example.MonsterStorage/Store",
  "/MyGame.Example.MonsterStorage/Retrieve",
};

std::unique_ptr< MonsterStorage::Stub> MonsterStorage::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< MonsterStorage::Stub> stub(new MonsterStorage::Stub(channel));
  return stub;
}

MonsterStorage::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel)  , rpcmethod_Store_(MonsterStorage_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Retrieve_(MonsterStorage_method_names[1], ::grpc::RpcMethod::SERVER_STREAMING, channel)
  {}
  
::grpc::Status MonsterStorage::Stub::Store(::grpc::ClientContext* context, const flatbuffers::BufferRef<Monster>& request, flatbuffers::BufferRef<Stat>* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_Store_, context, request, response);
}

::grpc::ClientAsyncResponseReader< flatbuffers::BufferRef<Stat>>* MonsterStorage::Stub::AsyncStoreRaw(::grpc::ClientContext* context, const flatbuffers::BufferRef<Monster>& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::ClientAsyncResponseReader< flatbuffers::BufferRef<Stat>>::Create(channel_.get(), cq, rpcmethod_Store_, context, request);
}

::grpc::ClientReader< flatbuffers::BufferRef<Monster>>* MonsterStorage::Stub::RetrieveRaw(::grpc::ClientContext* context, const flatbuffers::BufferRef<Stat>& request) {
  return new ::grpc::ClientReader< flatbuffers::BufferRef<Monster>>(channel_.get(), rpcmethod_Retrieve_, context, request);
}

::grpc::ClientAsyncReader< flatbuffers::BufferRef<Monster>>* MonsterStorage::Stub::AsyncRetrieveRaw(::grpc::ClientContext* context, const flatbuffers::BufferRef<Stat>& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::ClientAsyncReader< flatbuffers::BufferRef<Monster>>::Create(channel_.get(), cq, rpcmethod_Retrieve_, context, request, tag);
}

MonsterStorage::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      MonsterStorage_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< MonsterStorage::Service, flatbuffers::BufferRef<Monster>, flatbuffers::BufferRef<Stat>>(
          std::mem_fn(&MonsterStorage::Service::Store), this)));
  AddMethod(new ::grpc::RpcServiceMethod(
      MonsterStorage_method_names[1],
      ::grpc::RpcMethod::SERVER_STREAMING,
      new ::grpc::ServerStreamingHandler< MonsterStorage::Service, flatbuffers::BufferRef<Stat>, flatbuffers::BufferRef<Monster>>(
          std::mem_fn(&MonsterStorage::Service::Retrieve), this)));
}

MonsterStorage::Service::~Service() {
}

::grpc::Status MonsterStorage::Service::Store(::grpc::ServerContext* context, const flatbuffers::BufferRef<Monster>* request, flatbuffers::BufferRef<Stat>* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MonsterStorage::Service::Retrieve(::grpc::ServerContext* context, const flatbuffers::BufferRef<Stat>* request, ::grpc::ServerWriter< flatbuffers::BufferRef<Monster>>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace MyGame
}  // namespace Example
