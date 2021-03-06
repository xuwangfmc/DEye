// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/cluster.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "tensorflow/core/protobuf/cluster.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace tensorflow {

namespace {

const ::google::protobuf::Descriptor* JobDef_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  JobDef_reflection_ = NULL;
const ::google::protobuf::Descriptor* JobDef_TasksEntry_descriptor_ = NULL;
const ::google::protobuf::Descriptor* ClusterDef_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ClusterDef_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto() {
  protobuf_AddDesc_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "tensorflow/core/protobuf/cluster.proto");
  GOOGLE_CHECK(file != NULL);
  JobDef_descriptor_ = file->message_type(0);
  static const int JobDef_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(JobDef, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(JobDef, tasks_),
  };
  JobDef_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      JobDef_descriptor_,
      JobDef::internal_default_instance(),
      JobDef_offsets_,
      -1,
      -1,
      -1,
      sizeof(JobDef),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(JobDef, _internal_metadata_));
  JobDef_TasksEntry_descriptor_ = JobDef_descriptor_->nested_type(0);
  ClusterDef_descriptor_ = file->message_type(1);
  static const int ClusterDef_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClusterDef, job_),
  };
  ClusterDef_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ClusterDef_descriptor_,
      ClusterDef::internal_default_instance(),
      ClusterDef_offsets_,
      -1,
      -1,
      -1,
      sizeof(ClusterDef),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClusterDef, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      JobDef_descriptor_, JobDef::internal_default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
        JobDef_TasksEntry_descriptor_,
        ::google::protobuf::internal::MapEntry<
            ::google::protobuf::int32,
            ::std::string,
            ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
            ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
            0>::CreateDefaultInstance(
                JobDef_TasksEntry_descriptor_));
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ClusterDef_descriptor_, ClusterDef::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto() {
  JobDef_default_instance_.Shutdown();
  delete JobDef_reflection_;
  ClusterDef_default_instance_.Shutdown();
  delete ClusterDef_reflection_;
}

void protobuf_InitDefaults_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  JobDef_default_instance_.DefaultConstruct();
  ::google::protobuf::internal::GetEmptyString();
  ClusterDef_default_instance_.DefaultConstruct();
  JobDef_default_instance_.get_mutable()->InitAsDefaultInstance();
  ClusterDef_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto_once_);
void protobuf_InitDefaults_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto_once_,
                 &protobuf_InitDefaults_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto_impl);
}
void protobuf_AddDesc_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n&tensorflow/core/protobuf/cluster.proto"
    "\022\ntensorflow\"r\n\006JobDef\022\014\n\004name\030\001 \001(\t\022,\n\005"
    "tasks\030\002 \003(\0132\035.tensorflow.JobDef.TasksEnt"
    "ry\032,\n\nTasksEntry\022\013\n\003key\030\001 \001(\005\022\r\n\005value\030\002"
    " \001(\t:\0028\001\"-\n\nClusterDef\022\037\n\003job\030\001 \003(\0132\022.te"
    "nsorflow.JobDefB0\n\032org.tensorflow.distru"
    "ntimeB\rClusterProtosP\001\370\001\001b\006proto3", 273);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/protobuf/cluster.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto_once_);
void protobuf_AddDesc_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto_once_,
                 &protobuf_AddDesc_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto {
  StaticDescriptorInitializer_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto() {
    protobuf_AddDesc_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto();
  }
} static_descriptor_initializer_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int JobDef::kNameFieldNumber;
const int JobDef::kTasksFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

JobDef::JobDef()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.JobDef)
}
JobDef::JobDef(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena),
  tasks_(arena) {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_InitDefaults_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto();
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.JobDef)
}

void JobDef::InitAsDefaultInstance() {
}

JobDef::JobDef(const JobDef& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:tensorflow.JobDef)
}

void JobDef::SharedCtor() {
  tasks_.SetAssignDescriptorCallback(
      protobuf_AssignDescriptorsOnce);
  tasks_.SetEntryDescriptor(
      &::tensorflow::JobDef_TasksEntry_descriptor_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

JobDef::~JobDef() {
  // @@protoc_insertion_point(destructor:tensorflow.JobDef)
  SharedDtor();
}

void JobDef::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  if (arena != NULL) {
    return;
  }

  name_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arena);
}

void JobDef::ArenaDtor(void* object) {
  JobDef* _this = reinterpret_cast< JobDef* >(object);
  (void)_this;
}
void JobDef::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void JobDef::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* JobDef::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return JobDef_descriptor_;
}

const JobDef& JobDef::default_instance() {
  protobuf_InitDefaults_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<JobDef> JobDef_default_instance_;

JobDef* JobDef::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<JobDef>(arena);
}

void JobDef::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.JobDef)
  name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  tasks_.Clear();
}

bool JobDef::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.JobDef)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.JobDef.name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_tasks;
        break;
      }

      // map<int32, string> tasks = 2;
      case 2: {
        if (tag == 18) {
         parse_tasks:
          DO_(input->IncrementRecursionDepth());
         parse_loop_tasks:
          JobDef_TasksEntry::Parser< ::google::protobuf::internal::MapField<
              ::google::protobuf::int32, ::std::string,
              ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              0 >,
            ::google::protobuf::Map< ::google::protobuf::int32, ::std::string > > parser(&tasks_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            parser.value().data(), parser.value().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.JobDef.TasksEntry.value"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_tasks;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tensorflow.JobDef)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.JobDef)
  return false;
#undef DO_
}

void JobDef::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.JobDef)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.JobDef.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // map<int32, string> tasks = 2;
  if (!this->tasks().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::int32, ::std::string >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::int32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), p->second.length(),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "tensorflow.JobDef.TasksEntry.value");
      }
    };

    if (output->IsSerializationDeterminstic() &&
        this->tasks().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->tasks().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::int32, ::std::string >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::int32, ::std::string >::const_iterator
          it = this->tasks().begin();
          it != this->tasks().end(); ++it, ++n) {
        items[n] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[n], Less());
      ::google::protobuf::scoped_ptr<JobDef_TasksEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(tasks_.NewEntryWrapper(
            items[i].second->first, items[i].second->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            2, *entry, output);
        if (entry->GetArena() != NULL) {
          entry.release();
        }
        Utf8Check::Check(items[i].second);
      }
    } else {
      ::google::protobuf::scoped_ptr<JobDef_TasksEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::int32, ::std::string >::const_iterator
          it = this->tasks().begin();
          it != this->tasks().end(); ++it) {
        entry.reset(tasks_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            2, *entry, output);
        if (entry->GetArena() != NULL) {
          entry.release();
        }
        Utf8Check::Check(&*it);
      }
    }
  }

  // @@protoc_insertion_point(serialize_end:tensorflow.JobDef)
}

::google::protobuf::uint8* JobDef::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.JobDef)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.JobDef.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // map<int32, string> tasks = 2;
  if (!this->tasks().empty()) {
    typedef ::google::protobuf::Map< ::google::protobuf::int32, ::std::string >::const_pointer
        ConstPtr;
    typedef ::google::protobuf::internal::SortItem< ::google::protobuf::int32, ConstPtr > SortItem;
    typedef ::google::protobuf::internal::CompareByFirstField<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
          p->second.data(), p->second.length(),
          ::google::protobuf::internal::WireFormatLite::SERIALIZE,
          "tensorflow.JobDef.TasksEntry.value");
      }
    };

    if (deterministic &&
        this->tasks().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->tasks().size()]);
      typedef ::google::protobuf::Map< ::google::protobuf::int32, ::std::string >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::google::protobuf::int32, ::std::string >::const_iterator
          it = this->tasks().begin();
          it != this->tasks().end(); ++it, ++n) {
        items[n] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[n], Less());
      ::google::protobuf::scoped_ptr<JobDef_TasksEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(tasks_.NewEntryWrapper(
            items[i].second->first, items[i].second->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       2, *entry, deterministic, target);
;
        if (entry->GetArena() != NULL) {
          entry.release();
        }
        Utf8Check::Check(items[i].second);
      }
    } else {
      ::google::protobuf::scoped_ptr<JobDef_TasksEntry> entry;
      for (::google::protobuf::Map< ::google::protobuf::int32, ::std::string >::const_iterator
          it = this->tasks().begin();
          it != this->tasks().end(); ++it) {
        entry.reset(tasks_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       2, *entry, deterministic, target);
;
        if (entry->GetArena() != NULL) {
          entry.release();
        }
        Utf8Check::Check(&*it);
      }
    }
  }

  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.JobDef)
  return target;
}

size_t JobDef::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.JobDef)
  size_t total_size = 0;

  // optional string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // map<int32, string> tasks = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->tasks_size());
  {
    ::google::protobuf::scoped_ptr<JobDef_TasksEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::int32, ::std::string >::const_iterator
        it = this->tasks().begin();
        it != this->tasks().end(); ++it) {
      if (entry.get() != NULL && entry->GetArena() != NULL) {
        entry.release();
      }
      entry.reset(tasks_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
    if (entry.get() != NULL && entry->GetArena() != NULL) {
      entry.release();
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void JobDef::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.JobDef)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const JobDef* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const JobDef>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.JobDef)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.JobDef)
    UnsafeMergeFrom(*source);
  }
}

void JobDef::MergeFrom(const JobDef& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.JobDef)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void JobDef::UnsafeMergeFrom(const JobDef& from) {
  GOOGLE_DCHECK(&from != this);
  tasks_.MergeFrom(from.tasks_);
  if (from.name().size() > 0) {
    set_name(from.name());
  }
}

void JobDef::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.JobDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void JobDef::CopyFrom(const JobDef& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.JobDef)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool JobDef::IsInitialized() const {

  return true;
}

void JobDef::Swap(JobDef* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    JobDef temp;
    temp.UnsafeMergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void JobDef::UnsafeArenaSwap(JobDef* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void JobDef::InternalSwap(JobDef* other) {
  name_.Swap(&other->name_);
  tasks_.Swap(&other->tasks_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata JobDef::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = JobDef_descriptor_;
  metadata.reflection = JobDef_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// JobDef

// optional string name = 1;
void JobDef::clear_name() {
  name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
const ::std::string& JobDef::name() const {
  // @@protoc_insertion_point(field_get:tensorflow.JobDef.name)
  return name_.Get(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void JobDef::set_name(const ::std::string& value) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.JobDef.name)
}
void JobDef::set_name(const char* value) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.JobDef.name)
}
void JobDef::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.JobDef.name)
}
::std::string* JobDef::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.JobDef.name)
  return name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* JobDef::release_name() {
  // @@protoc_insertion_point(field_release:tensorflow.JobDef.name)
  
  return name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* JobDef::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.JobDef.name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
void JobDef::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.JobDef.name)
}
void JobDef::unsafe_arena_set_allocated_name(
    ::std::string* name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (name != NULL) {
    
  } else {
    
  }
  name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.JobDef.name)
}

// map<int32, string> tasks = 2;
int JobDef::tasks_size() const {
  return tasks_.size();
}
void JobDef::clear_tasks() {
  tasks_.Clear();
}
 const ::google::protobuf::Map< ::google::protobuf::int32, ::std::string >&
JobDef::tasks() const {
  // @@protoc_insertion_point(field_map:tensorflow.JobDef.tasks)
  return tasks_.GetMap();
}
 ::google::protobuf::Map< ::google::protobuf::int32, ::std::string >*
JobDef::mutable_tasks() {
  // @@protoc_insertion_point(field_mutable_map:tensorflow.JobDef.tasks)
  return tasks_.MutableMap();
}

inline const JobDef* JobDef::internal_default_instance() {
  return &JobDef_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ClusterDef::kJobFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ClusterDef::ClusterDef()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.ClusterDef)
}
ClusterDef::ClusterDef(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena),
  job_(arena) {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_InitDefaults_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto();
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.ClusterDef)
}

void ClusterDef::InitAsDefaultInstance() {
}

ClusterDef::ClusterDef(const ClusterDef& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:tensorflow.ClusterDef)
}

void ClusterDef::SharedCtor() {
  _cached_size_ = 0;
}

ClusterDef::~ClusterDef() {
  // @@protoc_insertion_point(destructor:tensorflow.ClusterDef)
  SharedDtor();
}

void ClusterDef::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  if (arena != NULL) {
    return;
  }

}

void ClusterDef::ArenaDtor(void* object) {
  ClusterDef* _this = reinterpret_cast< ClusterDef* >(object);
  (void)_this;
}
void ClusterDef::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void ClusterDef::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ClusterDef::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ClusterDef_descriptor_;
}

const ClusterDef& ClusterDef::default_instance() {
  protobuf_InitDefaults_tensorflow_2fcore_2fprotobuf_2fcluster_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<ClusterDef> ClusterDef_default_instance_;

ClusterDef* ClusterDef::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<ClusterDef>(arena);
}

void ClusterDef::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.ClusterDef)
  job_.Clear();
}

bool ClusterDef::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.ClusterDef)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .tensorflow.JobDef job = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_job:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_job()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_job;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tensorflow.ClusterDef)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.ClusterDef)
  return false;
#undef DO_
}

void ClusterDef::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.ClusterDef)
  // repeated .tensorflow.JobDef job = 1;
  for (unsigned int i = 0, n = this->job_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->job(i), output);
  }

  // @@protoc_insertion_point(serialize_end:tensorflow.ClusterDef)
}

::google::protobuf::uint8* ClusterDef::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.ClusterDef)
  // repeated .tensorflow.JobDef job = 1;
  for (unsigned int i = 0, n = this->job_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->job(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.ClusterDef)
  return target;
}

size_t ClusterDef::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.ClusterDef)
  size_t total_size = 0;

  // repeated .tensorflow.JobDef job = 1;
  {
    unsigned int count = this->job_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->job(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ClusterDef::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.ClusterDef)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const ClusterDef* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ClusterDef>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.ClusterDef)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.ClusterDef)
    UnsafeMergeFrom(*source);
  }
}

void ClusterDef::MergeFrom(const ClusterDef& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.ClusterDef)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void ClusterDef::UnsafeMergeFrom(const ClusterDef& from) {
  GOOGLE_DCHECK(&from != this);
  job_.MergeFrom(from.job_);
}

void ClusterDef::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.ClusterDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ClusterDef::CopyFrom(const ClusterDef& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.ClusterDef)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool ClusterDef::IsInitialized() const {

  return true;
}

void ClusterDef::Swap(ClusterDef* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    ClusterDef temp;
    temp.UnsafeMergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void ClusterDef::UnsafeArenaSwap(ClusterDef* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void ClusterDef::InternalSwap(ClusterDef* other) {
  job_.UnsafeArenaSwap(&other->job_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ClusterDef::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ClusterDef_descriptor_;
  metadata.reflection = ClusterDef_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ClusterDef

// repeated .tensorflow.JobDef job = 1;
int ClusterDef::job_size() const {
  return job_.size();
}
void ClusterDef::clear_job() {
  job_.Clear();
}
const ::tensorflow::JobDef& ClusterDef::job(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.ClusterDef.job)
  return job_.Get(index);
}
::tensorflow::JobDef* ClusterDef::mutable_job(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.ClusterDef.job)
  return job_.Mutable(index);
}
::tensorflow::JobDef* ClusterDef::add_job() {
  // @@protoc_insertion_point(field_add:tensorflow.ClusterDef.job)
  return job_.Add();
}
::google::protobuf::RepeatedPtrField< ::tensorflow::JobDef >*
ClusterDef::mutable_job() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.ClusterDef.job)
  return &job_;
}
const ::google::protobuf::RepeatedPtrField< ::tensorflow::JobDef >&
ClusterDef::job() const {
  // @@protoc_insertion_point(field_list:tensorflow.ClusterDef.job)
  return job_;
}

inline const ClusterDef* ClusterDef::internal_default_instance() {
  return &ClusterDef_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)
