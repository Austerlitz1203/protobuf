// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: contacts.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_contacts_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_contacts_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021011 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_contacts_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_contacts_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_contacts_2eproto;
namespace contacts {
class Contacts;
struct ContactsDefaultTypeInternal;
extern ContactsDefaultTypeInternal _Contacts_default_instance_;
class PeopleInfo;
struct PeopleInfoDefaultTypeInternal;
extern PeopleInfoDefaultTypeInternal _PeopleInfo_default_instance_;
class Phone;
struct PhoneDefaultTypeInternal;
extern PhoneDefaultTypeInternal _Phone_default_instance_;
}  // namespace contacts
PROTOBUF_NAMESPACE_OPEN
template<> ::contacts::Contacts* Arena::CreateMaybeMessage<::contacts::Contacts>(Arena*);
template<> ::contacts::PeopleInfo* Arena::CreateMaybeMessage<::contacts::PeopleInfo>(Arena*);
template<> ::contacts::Phone* Arena::CreateMaybeMessage<::contacts::Phone>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace contacts {

// ===================================================================

class Phone final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:contacts.Phone) */ {
 public:
  inline Phone() : Phone(nullptr) {}
  ~Phone() override;
  explicit PROTOBUF_CONSTEXPR Phone(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Phone(const Phone& from);
  Phone(Phone&& from) noexcept
    : Phone() {
    *this = ::std::move(from);
  }

  inline Phone& operator=(const Phone& from) {
    CopyFrom(from);
    return *this;
  }
  inline Phone& operator=(Phone&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Phone& default_instance() {
    return *internal_default_instance();
  }
  static inline const Phone* internal_default_instance() {
    return reinterpret_cast<const Phone*>(
               &_Phone_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Phone& a, Phone& b) {
    a.Swap(&b);
  }
  inline void Swap(Phone* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Phone* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Phone* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Phone>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Phone& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Phone& from) {
    Phone::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Phone* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "contacts.Phone";
  }
  protected:
  explicit Phone(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPhoneNumberFieldNumber = 1,
  };
  // string phone_number = 1;
  void clear_phone_number();
  const std::string& phone_number() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_phone_number(ArgT0&& arg0, ArgT... args);
  std::string* mutable_phone_number();
  PROTOBUF_NODISCARD std::string* release_phone_number();
  void set_allocated_phone_number(std::string* phone_number);
  private:
  const std::string& _internal_phone_number() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_phone_number(const std::string& value);
  std::string* _internal_mutable_phone_number();
  public:

  // @@protoc_insertion_point(class_scope:contacts.Phone)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr phone_number_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_contacts_2eproto;
};
// -------------------------------------------------------------------

class PeopleInfo final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:contacts.PeopleInfo) */ {
 public:
  inline PeopleInfo() : PeopleInfo(nullptr) {}
  ~PeopleInfo() override;
  explicit PROTOBUF_CONSTEXPR PeopleInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PeopleInfo(const PeopleInfo& from);
  PeopleInfo(PeopleInfo&& from) noexcept
    : PeopleInfo() {
    *this = ::std::move(from);
  }

  inline PeopleInfo& operator=(const PeopleInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline PeopleInfo& operator=(PeopleInfo&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const PeopleInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const PeopleInfo* internal_default_instance() {
    return reinterpret_cast<const PeopleInfo*>(
               &_PeopleInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(PeopleInfo& a, PeopleInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(PeopleInfo* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PeopleInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PeopleInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PeopleInfo>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PeopleInfo& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const PeopleInfo& from) {
    PeopleInfo::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PeopleInfo* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "contacts.PeopleInfo";
  }
  protected:
  explicit PeopleInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPhoneFieldNumber = 3,
    kNameFieldNumber = 1,
    kAgeFieldNumber = 2,
  };
  // repeated .contacts.Phone phone = 3;
  int phone_size() const;
  private:
  int _internal_phone_size() const;
  public:
  void clear_phone();
  ::contacts::Phone* mutable_phone(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::contacts::Phone >*
      mutable_phone();
  private:
  const ::contacts::Phone& _internal_phone(int index) const;
  ::contacts::Phone* _internal_add_phone();
  public:
  const ::contacts::Phone& phone(int index) const;
  ::contacts::Phone* add_phone();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::contacts::Phone >&
      phone() const;

  // string name = 1;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // int32 age = 2;
  void clear_age();
  int32_t age() const;
  void set_age(int32_t value);
  private:
  int32_t _internal_age() const;
  void _internal_set_age(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:contacts.PeopleInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::contacts::Phone > phone_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    int32_t age_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_contacts_2eproto;
};
// -------------------------------------------------------------------

class Contacts final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:contacts.Contacts) */ {
 public:
  inline Contacts() : Contacts(nullptr) {}
  ~Contacts() override;
  explicit PROTOBUF_CONSTEXPR Contacts(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Contacts(const Contacts& from);
  Contacts(Contacts&& from) noexcept
    : Contacts() {
    *this = ::std::move(from);
  }

  inline Contacts& operator=(const Contacts& from) {
    CopyFrom(from);
    return *this;
  }
  inline Contacts& operator=(Contacts&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Contacts& default_instance() {
    return *internal_default_instance();
  }
  static inline const Contacts* internal_default_instance() {
    return reinterpret_cast<const Contacts*>(
               &_Contacts_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Contacts& a, Contacts& b) {
    a.Swap(&b);
  }
  inline void Swap(Contacts* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Contacts* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Contacts* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Contacts>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Contacts& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Contacts& from) {
    Contacts::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Contacts* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "contacts.Contacts";
  }
  protected:
  explicit Contacts(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kContactsFieldNumber = 1,
  };
  // repeated .contacts.PeopleInfo contacts = 1;
  int contacts_size() const;
  private:
  int _internal_contacts_size() const;
  public:
  void clear_contacts();
  ::contacts::PeopleInfo* mutable_contacts(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::contacts::PeopleInfo >*
      mutable_contacts();
  private:
  const ::contacts::PeopleInfo& _internal_contacts(int index) const;
  ::contacts::PeopleInfo* _internal_add_contacts();
  public:
  const ::contacts::PeopleInfo& contacts(int index) const;
  ::contacts::PeopleInfo* add_contacts();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::contacts::PeopleInfo >&
      contacts() const;

  // @@protoc_insertion_point(class_scope:contacts.Contacts)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::contacts::PeopleInfo > contacts_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_contacts_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Phone

// string phone_number = 1;
inline void Phone::clear_phone_number() {
  _impl_.phone_number_.ClearToEmpty();
}
inline const std::string& Phone::phone_number() const {
  // @@protoc_insertion_point(field_get:contacts.Phone.phone_number)
  return _internal_phone_number();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Phone::set_phone_number(ArgT0&& arg0, ArgT... args) {
 
 _impl_.phone_number_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:contacts.Phone.phone_number)
}
inline std::string* Phone::mutable_phone_number() {
  std::string* _s = _internal_mutable_phone_number();
  // @@protoc_insertion_point(field_mutable:contacts.Phone.phone_number)
  return _s;
}
inline const std::string& Phone::_internal_phone_number() const {
  return _impl_.phone_number_.Get();
}
inline void Phone::_internal_set_phone_number(const std::string& value) {
  
  _impl_.phone_number_.Set(value, GetArenaForAllocation());
}
inline std::string* Phone::_internal_mutable_phone_number() {
  
  return _impl_.phone_number_.Mutable(GetArenaForAllocation());
}
inline std::string* Phone::release_phone_number() {
  // @@protoc_insertion_point(field_release:contacts.Phone.phone_number)
  return _impl_.phone_number_.Release();
}
inline void Phone::set_allocated_phone_number(std::string* phone_number) {
  if (phone_number != nullptr) {
    
  } else {
    
  }
  _impl_.phone_number_.SetAllocated(phone_number, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.phone_number_.IsDefault()) {
    _impl_.phone_number_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:contacts.Phone.phone_number)
}

// -------------------------------------------------------------------

// PeopleInfo

// string name = 1;
inline void PeopleInfo::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& PeopleInfo::name() const {
  // @@protoc_insertion_point(field_get:contacts.PeopleInfo.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PeopleInfo::set_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:contacts.PeopleInfo.name)
}
inline std::string* PeopleInfo::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:contacts.PeopleInfo.name)
  return _s;
}
inline const std::string& PeopleInfo::_internal_name() const {
  return _impl_.name_.Get();
}
inline void PeopleInfo::_internal_set_name(const std::string& value) {
  
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* PeopleInfo::_internal_mutable_name() {
  
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* PeopleInfo::release_name() {
  // @@protoc_insertion_point(field_release:contacts.PeopleInfo.name)
  return _impl_.name_.Release();
}
inline void PeopleInfo::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:contacts.PeopleInfo.name)
}

// int32 age = 2;
inline void PeopleInfo::clear_age() {
  _impl_.age_ = 0;
}
inline int32_t PeopleInfo::_internal_age() const {
  return _impl_.age_;
}
inline int32_t PeopleInfo::age() const {
  // @@protoc_insertion_point(field_get:contacts.PeopleInfo.age)
  return _internal_age();
}
inline void PeopleInfo::_internal_set_age(int32_t value) {
  
  _impl_.age_ = value;
}
inline void PeopleInfo::set_age(int32_t value) {
  _internal_set_age(value);
  // @@protoc_insertion_point(field_set:contacts.PeopleInfo.age)
}

// repeated .contacts.Phone phone = 3;
inline int PeopleInfo::_internal_phone_size() const {
  return _impl_.phone_.size();
}
inline int PeopleInfo::phone_size() const {
  return _internal_phone_size();
}
inline void PeopleInfo::clear_phone() {
  _impl_.phone_.Clear();
}
inline ::contacts::Phone* PeopleInfo::mutable_phone(int index) {
  // @@protoc_insertion_point(field_mutable:contacts.PeopleInfo.phone)
  return _impl_.phone_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::contacts::Phone >*
PeopleInfo::mutable_phone() {
  // @@protoc_insertion_point(field_mutable_list:contacts.PeopleInfo.phone)
  return &_impl_.phone_;
}
inline const ::contacts::Phone& PeopleInfo::_internal_phone(int index) const {
  return _impl_.phone_.Get(index);
}
inline const ::contacts::Phone& PeopleInfo::phone(int index) const {
  // @@protoc_insertion_point(field_get:contacts.PeopleInfo.phone)
  return _internal_phone(index);
}
inline ::contacts::Phone* PeopleInfo::_internal_add_phone() {
  return _impl_.phone_.Add();
}
inline ::contacts::Phone* PeopleInfo::add_phone() {
  ::contacts::Phone* _add = _internal_add_phone();
  // @@protoc_insertion_point(field_add:contacts.PeopleInfo.phone)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::contacts::Phone >&
PeopleInfo::phone() const {
  // @@protoc_insertion_point(field_list:contacts.PeopleInfo.phone)
  return _impl_.phone_;
}

// -------------------------------------------------------------------

// Contacts

// repeated .contacts.PeopleInfo contacts = 1;
inline int Contacts::_internal_contacts_size() const {
  return _impl_.contacts_.size();
}
inline int Contacts::contacts_size() const {
  return _internal_contacts_size();
}
inline void Contacts::clear_contacts() {
  _impl_.contacts_.Clear();
}
inline ::contacts::PeopleInfo* Contacts::mutable_contacts(int index) {
  // @@protoc_insertion_point(field_mutable:contacts.Contacts.contacts)
  return _impl_.contacts_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::contacts::PeopleInfo >*
Contacts::mutable_contacts() {
  // @@protoc_insertion_point(field_mutable_list:contacts.Contacts.contacts)
  return &_impl_.contacts_;
}
inline const ::contacts::PeopleInfo& Contacts::_internal_contacts(int index) const {
  return _impl_.contacts_.Get(index);
}
inline const ::contacts::PeopleInfo& Contacts::contacts(int index) const {
  // @@protoc_insertion_point(field_get:contacts.Contacts.contacts)
  return _internal_contacts(index);
}
inline ::contacts::PeopleInfo* Contacts::_internal_add_contacts() {
  return _impl_.contacts_.Add();
}
inline ::contacts::PeopleInfo* Contacts::add_contacts() {
  ::contacts::PeopleInfo* _add = _internal_add_contacts();
  // @@protoc_insertion_point(field_add:contacts.Contacts.contacts)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::contacts::PeopleInfo >&
Contacts::contacts() const {
  // @@protoc_insertion_point(field_list:contacts.Contacts.contacts)
  return _impl_.contacts_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace contacts

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_contacts_2eproto
