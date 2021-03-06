// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlayerMoveData.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_PlayerMoveData_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_PlayerMoveData_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_PlayerMoveData_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_PlayerMoveData_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PlayerMoveData_2eproto;
namespace mongo {
class PlayerMoveData;
class PlayerMoveDataDefaultTypeInternal;
extern PlayerMoveDataDefaultTypeInternal _PlayerMoveData_default_instance_;
}  // namespace mongo
PROTOBUF_NAMESPACE_OPEN
template<> ::mongo::PlayerMoveData* Arena::CreateMaybeMessage<::mongo::PlayerMoveData>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mongo {

// ===================================================================

class PlayerMoveData :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mongo.PlayerMoveData) */ {
 public:
  PlayerMoveData();
  virtual ~PlayerMoveData();

  PlayerMoveData(const PlayerMoveData& from);
  PlayerMoveData(PlayerMoveData&& from) noexcept
    : PlayerMoveData() {
    *this = ::std::move(from);
  }

  inline PlayerMoveData& operator=(const PlayerMoveData& from) {
    CopyFrom(from);
    return *this;
  }
  inline PlayerMoveData& operator=(PlayerMoveData&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const PlayerMoveData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PlayerMoveData* internal_default_instance() {
    return reinterpret_cast<const PlayerMoveData*>(
               &_PlayerMoveData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PlayerMoveData& a, PlayerMoveData& b) {
    a.Swap(&b);
  }
  inline void Swap(PlayerMoveData* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PlayerMoveData* New() const final {
    return CreateMaybeMessage<PlayerMoveData>(nullptr);
  }

  PlayerMoveData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PlayerMoveData>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PlayerMoveData& from);
  void MergeFrom(const PlayerMoveData& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PlayerMoveData* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mongo.PlayerMoveData";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_PlayerMoveData_2eproto);
    return ::descriptor_table_PlayerMoveData_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMoveForwardFieldNumber = 4,
    kMoveRightFieldNumber = 5,
    kAngleFieldNumber = 6,
    kFireingFieldNumber = 7,
    kUsernameFieldNumber = 1,
    kUuidFieldNumber = 2,
    kTimestampFieldNumber = 3,
  };
  // repeated uint32 move_forward = 4;
  int move_forward_size() const;
  private:
  int _internal_move_forward_size() const;
  public:
  void clear_move_forward();
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_move_forward(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      _internal_move_forward() const;
  void _internal_add_move_forward(::PROTOBUF_NAMESPACE_ID::uint32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      _internal_mutable_move_forward();
  public:
  ::PROTOBUF_NAMESPACE_ID::uint32 move_forward(int index) const;
  void set_move_forward(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value);
  void add_move_forward(::PROTOBUF_NAMESPACE_ID::uint32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      move_forward() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      mutable_move_forward();

  // repeated uint32 move_right = 5;
  int move_right_size() const;
  private:
  int _internal_move_right_size() const;
  public:
  void clear_move_right();
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_move_right(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      _internal_move_right() const;
  void _internal_add_move_right(::PROTOBUF_NAMESPACE_ID::uint32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      _internal_mutable_move_right();
  public:
  ::PROTOBUF_NAMESPACE_ID::uint32 move_right(int index) const;
  void set_move_right(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value);
  void add_move_right(::PROTOBUF_NAMESPACE_ID::uint32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      move_right() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      mutable_move_right();

  // repeated int32 angle = 6;
  int angle_size() const;
  private:
  int _internal_angle_size() const;
  public:
  void clear_angle();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_angle(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_angle() const;
  void _internal_add_angle(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_angle();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 angle(int index) const;
  void set_angle(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_angle(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      angle() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_angle();

  // repeated bool fireing = 7;
  int fireing_size() const;
  private:
  int _internal_fireing_size() const;
  public:
  void clear_fireing();
  private:
  bool _internal_fireing(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >&
      _internal_fireing() const;
  void _internal_add_fireing(bool value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >*
      _internal_mutable_fireing();
  public:
  bool fireing(int index) const;
  void set_fireing(int index, bool value);
  void add_fireing(bool value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >&
      fireing() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >*
      mutable_fireing();

  // string username = 1;
  void clear_username();
  const std::string& username() const;
  void set_username(const std::string& value);
  void set_username(std::string&& value);
  void set_username(const char* value);
  void set_username(const char* value, size_t size);
  std::string* mutable_username();
  std::string* release_username();
  void set_allocated_username(std::string* username);
  private:
  const std::string& _internal_username() const;
  void _internal_set_username(const std::string& value);
  std::string* _internal_mutable_username();
  public:

  // string uuid = 2;
  void clear_uuid();
  const std::string& uuid() const;
  void set_uuid(const std::string& value);
  void set_uuid(std::string&& value);
  void set_uuid(const char* value);
  void set_uuid(const char* value, size_t size);
  std::string* mutable_uuid();
  std::string* release_uuid();
  void set_allocated_uuid(std::string* uuid);
  private:
  const std::string& _internal_uuid() const;
  void _internal_set_uuid(const std::string& value);
  std::string* _internal_mutable_uuid();
  public:

  // int64 timestamp = 3;
  void clear_timestamp();
  ::PROTOBUF_NAMESPACE_ID::int64 timestamp() const;
  void set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_timestamp() const;
  void _internal_set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:mongo.PlayerMoveData)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 > move_forward_;
  mutable std::atomic<int> _move_forward_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 > move_right_;
  mutable std::atomic<int> _move_right_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > angle_;
  mutable std::atomic<int> _angle_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool > fireing_;
  mutable std::atomic<int> _fireing_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr username_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr uuid_;
  ::PROTOBUF_NAMESPACE_ID::int64 timestamp_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_PlayerMoveData_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PlayerMoveData

// string username = 1;
inline void PlayerMoveData::clear_username() {
  username_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& PlayerMoveData::username() const {
  // @@protoc_insertion_point(field_get:mongo.PlayerMoveData.username)
  return _internal_username();
}
inline void PlayerMoveData::set_username(const std::string& value) {
  _internal_set_username(value);
  // @@protoc_insertion_point(field_set:mongo.PlayerMoveData.username)
}
inline std::string* PlayerMoveData::mutable_username() {
  // @@protoc_insertion_point(field_mutable:mongo.PlayerMoveData.username)
  return _internal_mutable_username();
}
inline const std::string& PlayerMoveData::_internal_username() const {
  return username_.GetNoArena();
}
inline void PlayerMoveData::_internal_set_username(const std::string& value) {
  
  username_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void PlayerMoveData::set_username(std::string&& value) {
  
  username_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mongo.PlayerMoveData.username)
}
inline void PlayerMoveData::set_username(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  username_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mongo.PlayerMoveData.username)
}
inline void PlayerMoveData::set_username(const char* value, size_t size) {
  
  username_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mongo.PlayerMoveData.username)
}
inline std::string* PlayerMoveData::_internal_mutable_username() {
  
  return username_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* PlayerMoveData::release_username() {
  // @@protoc_insertion_point(field_release:mongo.PlayerMoveData.username)
  
  return username_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void PlayerMoveData::set_allocated_username(std::string* username) {
  if (username != nullptr) {
    
  } else {
    
  }
  username_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), username);
  // @@protoc_insertion_point(field_set_allocated:mongo.PlayerMoveData.username)
}

// string uuid = 2;
inline void PlayerMoveData::clear_uuid() {
  uuid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& PlayerMoveData::uuid() const {
  // @@protoc_insertion_point(field_get:mongo.PlayerMoveData.uuid)
  return _internal_uuid();
}
inline void PlayerMoveData::set_uuid(const std::string& value) {
  _internal_set_uuid(value);
  // @@protoc_insertion_point(field_set:mongo.PlayerMoveData.uuid)
}
inline std::string* PlayerMoveData::mutable_uuid() {
  // @@protoc_insertion_point(field_mutable:mongo.PlayerMoveData.uuid)
  return _internal_mutable_uuid();
}
inline const std::string& PlayerMoveData::_internal_uuid() const {
  return uuid_.GetNoArena();
}
inline void PlayerMoveData::_internal_set_uuid(const std::string& value) {
  
  uuid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void PlayerMoveData::set_uuid(std::string&& value) {
  
  uuid_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mongo.PlayerMoveData.uuid)
}
inline void PlayerMoveData::set_uuid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  uuid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mongo.PlayerMoveData.uuid)
}
inline void PlayerMoveData::set_uuid(const char* value, size_t size) {
  
  uuid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mongo.PlayerMoveData.uuid)
}
inline std::string* PlayerMoveData::_internal_mutable_uuid() {
  
  return uuid_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* PlayerMoveData::release_uuid() {
  // @@protoc_insertion_point(field_release:mongo.PlayerMoveData.uuid)
  
  return uuid_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void PlayerMoveData::set_allocated_uuid(std::string* uuid) {
  if (uuid != nullptr) {
    
  } else {
    
  }
  uuid_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), uuid);
  // @@protoc_insertion_point(field_set_allocated:mongo.PlayerMoveData.uuid)
}

// int64 timestamp = 3;
inline void PlayerMoveData::clear_timestamp() {
  timestamp_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 PlayerMoveData::_internal_timestamp() const {
  return timestamp_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 PlayerMoveData::timestamp() const {
  // @@protoc_insertion_point(field_get:mongo.PlayerMoveData.timestamp)
  return _internal_timestamp();
}
inline void PlayerMoveData::_internal_set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  timestamp_ = value;
}
inline void PlayerMoveData::set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_timestamp(value);
  // @@protoc_insertion_point(field_set:mongo.PlayerMoveData.timestamp)
}

// repeated uint32 move_forward = 4;
inline int PlayerMoveData::_internal_move_forward_size() const {
  return move_forward_.size();
}
inline int PlayerMoveData::move_forward_size() const {
  return _internal_move_forward_size();
}
inline void PlayerMoveData::clear_move_forward() {
  move_forward_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PlayerMoveData::_internal_move_forward(int index) const {
  return move_forward_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PlayerMoveData::move_forward(int index) const {
  // @@protoc_insertion_point(field_get:mongo.PlayerMoveData.move_forward)
  return _internal_move_forward(index);
}
inline void PlayerMoveData::set_move_forward(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value) {
  move_forward_.Set(index, value);
  // @@protoc_insertion_point(field_set:mongo.PlayerMoveData.move_forward)
}
inline void PlayerMoveData::_internal_add_move_forward(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  move_forward_.Add(value);
}
inline void PlayerMoveData::add_move_forward(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_add_move_forward(value);
  // @@protoc_insertion_point(field_add:mongo.PlayerMoveData.move_forward)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
PlayerMoveData::_internal_move_forward() const {
  return move_forward_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
PlayerMoveData::move_forward() const {
  // @@protoc_insertion_point(field_list:mongo.PlayerMoveData.move_forward)
  return _internal_move_forward();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
PlayerMoveData::_internal_mutable_move_forward() {
  return &move_forward_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
PlayerMoveData::mutable_move_forward() {
  // @@protoc_insertion_point(field_mutable_list:mongo.PlayerMoveData.move_forward)
  return _internal_mutable_move_forward();
}

// repeated uint32 move_right = 5;
inline int PlayerMoveData::_internal_move_right_size() const {
  return move_right_.size();
}
inline int PlayerMoveData::move_right_size() const {
  return _internal_move_right_size();
}
inline void PlayerMoveData::clear_move_right() {
  move_right_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PlayerMoveData::_internal_move_right(int index) const {
  return move_right_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PlayerMoveData::move_right(int index) const {
  // @@protoc_insertion_point(field_get:mongo.PlayerMoveData.move_right)
  return _internal_move_right(index);
}
inline void PlayerMoveData::set_move_right(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value) {
  move_right_.Set(index, value);
  // @@protoc_insertion_point(field_set:mongo.PlayerMoveData.move_right)
}
inline void PlayerMoveData::_internal_add_move_right(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  move_right_.Add(value);
}
inline void PlayerMoveData::add_move_right(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_add_move_right(value);
  // @@protoc_insertion_point(field_add:mongo.PlayerMoveData.move_right)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
PlayerMoveData::_internal_move_right() const {
  return move_right_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
PlayerMoveData::move_right() const {
  // @@protoc_insertion_point(field_list:mongo.PlayerMoveData.move_right)
  return _internal_move_right();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
PlayerMoveData::_internal_mutable_move_right() {
  return &move_right_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
PlayerMoveData::mutable_move_right() {
  // @@protoc_insertion_point(field_mutable_list:mongo.PlayerMoveData.move_right)
  return _internal_mutable_move_right();
}

// repeated int32 angle = 6;
inline int PlayerMoveData::_internal_angle_size() const {
  return angle_.size();
}
inline int PlayerMoveData::angle_size() const {
  return _internal_angle_size();
}
inline void PlayerMoveData::clear_angle() {
  angle_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PlayerMoveData::_internal_angle(int index) const {
  return angle_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PlayerMoveData::angle(int index) const {
  // @@protoc_insertion_point(field_get:mongo.PlayerMoveData.angle)
  return _internal_angle(index);
}
inline void PlayerMoveData::set_angle(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  angle_.Set(index, value);
  // @@protoc_insertion_point(field_set:mongo.PlayerMoveData.angle)
}
inline void PlayerMoveData::_internal_add_angle(::PROTOBUF_NAMESPACE_ID::int32 value) {
  angle_.Add(value);
}
inline void PlayerMoveData::add_angle(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_angle(value);
  // @@protoc_insertion_point(field_add:mongo.PlayerMoveData.angle)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
PlayerMoveData::_internal_angle() const {
  return angle_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
PlayerMoveData::angle() const {
  // @@protoc_insertion_point(field_list:mongo.PlayerMoveData.angle)
  return _internal_angle();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
PlayerMoveData::_internal_mutable_angle() {
  return &angle_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
PlayerMoveData::mutable_angle() {
  // @@protoc_insertion_point(field_mutable_list:mongo.PlayerMoveData.angle)
  return _internal_mutable_angle();
}

// repeated bool fireing = 7;
inline int PlayerMoveData::_internal_fireing_size() const {
  return fireing_.size();
}
inline int PlayerMoveData::fireing_size() const {
  return _internal_fireing_size();
}
inline void PlayerMoveData::clear_fireing() {
  fireing_.Clear();
}
inline bool PlayerMoveData::_internal_fireing(int index) const {
  return fireing_.Get(index);
}
inline bool PlayerMoveData::fireing(int index) const {
  // @@protoc_insertion_point(field_get:mongo.PlayerMoveData.fireing)
  return _internal_fireing(index);
}
inline void PlayerMoveData::set_fireing(int index, bool value) {
  fireing_.Set(index, value);
  // @@protoc_insertion_point(field_set:mongo.PlayerMoveData.fireing)
}
inline void PlayerMoveData::_internal_add_fireing(bool value) {
  fireing_.Add(value);
}
inline void PlayerMoveData::add_fireing(bool value) {
  _internal_add_fireing(value);
  // @@protoc_insertion_point(field_add:mongo.PlayerMoveData.fireing)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >&
PlayerMoveData::_internal_fireing() const {
  return fireing_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >&
PlayerMoveData::fireing() const {
  // @@protoc_insertion_point(field_list:mongo.PlayerMoveData.fireing)
  return _internal_fireing();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >*
PlayerMoveData::_internal_mutable_fireing() {
  return &fireing_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >*
PlayerMoveData::mutable_fireing() {
  // @@protoc_insertion_point(field_mutable_list:mongo.PlayerMoveData.fireing)
  return _internal_mutable_fireing();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mongo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_PlayerMoveData_2eproto
