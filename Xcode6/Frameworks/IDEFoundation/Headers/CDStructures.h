

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _IDEDataMatrixColumnDescriptor {
    char *_field1;
};

struct _IDEDataMatrixDescriptor {
    char *_field1;
    unsigned char _field2;
    unsigned char _field3;
    struct _IDEDataMatrixColumnDescriptor _field4[0];
};

struct _IDEDataMatrixRowOp {
    int _field1;
    NSRange _field2;
};

NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __hash_node<std::__1::__hash_value_type<__NStatSource *, SourceInfo>, void *>;

struct __hash_node<std::__1::__hash_value_type<int, ProcessInfo>, void *>;

struct stat {
    int _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
    int _field7;
    struct timespec _field8;
    struct timespec _field9;
    struct timespec _field10;
    struct timespec _field11;
    long long _field12;
    long long _field13;
    int _field14;
    unsigned int _field15;
    unsigned int _field16;
    int _field17;
    long long _field18[2];
};

struct timespec {
    long long _field1;
    long long _field2;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, SourceInfo>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, SourceInfo>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, SourceInfo>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, SourceInfo>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<__NStatSource *, SourceInfo>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, SourceInfo>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, SourceInfo>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<int, ProcessInfo>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, ProcessInfo>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<int, ProcessInfo>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, ProcessInfo>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<int, ProcessInfo>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, ProcessInfo>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, ProcessInfo>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unordered_map<__NStatSource *, SourceInfo, std::__1::hash<__NStatSource *>, std::__1::equal_to<__NStatSource *>, std::__1::allocator<std::__1::pair<__NStatSource *const, SourceInfo>>> {
    struct __hash_table<std::__1::__hash_value_type<__NStatSource *, SourceInfo>, std::__1::__unordered_map_hasher<__NStatSource *, std::__1::__hash_value_type<__NStatSource *, SourceInfo>, std::__1::hash<__NStatSource *>, true>, std::__1::__unordered_map_equal<__NStatSource *, std::__1::__hash_value_type<__NStatSource *, SourceInfo>, std::__1::equal_to<__NStatSource *>, true>, std::__1::allocator<std::__1::__hash_value_type<__NStatSource *, SourceInfo>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, SourceInfo>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, SourceInfo>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, SourceInfo>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, SourceInfo>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<__NStatSource *, SourceInfo>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<__NStatSource *, SourceInfo>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<__NStatSource *, std::__1::__hash_value_type<__NStatSource *, SourceInfo>, std::__1::hash<__NStatSource *>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<__NStatSource *, std::__1::__hash_value_type<__NStatSource *, SourceInfo>, std::__1::equal_to<__NStatSource *>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_map<int, ProcessInfo, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, ProcessInfo>>> {
    struct __hash_table<std::__1::__hash_value_type<int, ProcessInfo>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, ProcessInfo>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, ProcessInfo>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, ProcessInfo>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<int, ProcessInfo>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, ProcessInfo>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, ProcessInfo>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, ProcessInfo>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, ProcessInfo>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<int, ProcessInfo>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, ProcessInfo>, std::__1::hash<int>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, ProcessInfo>, std::__1::equal_to<int>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct vector<long long, std::__1::allocator<long long>> {
    long long *_field1;
    long long *_field2;
    struct __compressed_pair<long long *, std::__1::allocator<long long>> {
        long long *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned long long _field1[3];
} CDStruct_3c4b7cd8;

typedef struct {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
} CDStruct_9b0a347d;

typedef struct {
    int _field1;
    void *_field2[2];
} CDStruct_9b248d9b;

typedef struct {
    int _field1;
    int _field2;
    void *_field3[3];
} CDStruct_a94d320b;

