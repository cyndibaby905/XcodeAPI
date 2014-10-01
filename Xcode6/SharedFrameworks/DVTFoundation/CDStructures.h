

@class DVTWeakCallBack;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct ArrayBuilder {
    id _field1[62];
    id *_field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct DVTBitSet {
    unsigned long long _field1;
    unsigned long long _field2[0];
};

struct DVTMacroNameLookupCursor {
    id _field1;
    unsigned long long _field2;
    id _field3;
    struct DVTMacroValueAssignment *_field4;
};

struct DVTMacroValueAssignment;

struct DVTMacroValueAssignmentMapTable {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    void *_field5;
};

struct DVTNestedMacroExpansionState {
    id _field1;
    unsigned int _field2;
    struct DVTMacroNameLookupCursor _field3;
    id _field4;
    struct DVTNestedMacroExpansionState *_field5;
};

struct DVTSlice {
    void **items;
    char wantsStrong;
    char wantsWeak;
    char wantsARC;
    char shouldCopyIn;
    char usesStrong;
    char usesWeak;
    char usesARC;
    char usesSentinel;
    char pointerPersonality;
    char integerPersonality;
    char simpleReadClear;
    DVTWeakCallBack *callback;
    CDUnknownFunctionPointerType sizeFunction;
    CDUnknownFunctionPointerType hashFunction;
    CDUnknownFunctionPointerType isEqualFunction;
    CDUnknownFunctionPointerType describeFunction;
    CDUnknownFunctionPointerType acquireFunction;
    CDUnknownFunctionPointerType relinquishFunction;
    CDUnknownFunctionPointerType allocateFunction;
    CDUnknownFunctionPointerType freeFunction;
    CDUnknownFunctionPointerType readAt;
    CDUnknownFunctionPointerType clearAt;
    CDUnknownFunctionPointerType storeAt;
};

struct DVTStringBuilder {
    unsigned short _field1[512];
    unsigned short *_field2;
    unsigned long long _field3;
    unsigned long long _field4;
};

struct UParseError {
    int _field1;
    int _field2;
    unsigned short _field3[16];
    unsigned short _field4[16];
};

struct _CSTypeRef {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _DVTDiffContextFlags {
    unsigned int ignoresCase:1;
    unsigned int ignoresLeadingSpaces:1;
    unsigned int ignoresSpacesInRuns:1;
    unsigned int ignoresTrailingSpaces:1;
    unsigned int ignoresLineEnds:1;
    unsigned int ignoresCommon:1;
    unsigned int RESERVED:26;
};

struct _DVTDiffToken {
    NSRange range;
    unsigned long long hash;
    int type;
};


struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct fastsimplearray {
    unsigned long long _field1;
    unsigned long long _field2;
    void **_field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned short *_field1;
    long long _field2;
} CDStruct_f444e920;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    double loadFactor;
    long long numberOfHashFunctions;
    long long windowWidth;
} CDStruct_fd921134;

typedef struct {
    long long expectedNumberOfInsertions;
    double loadFactor;
    long long numberOfHashFunctions;
} CDStruct_d703e233;

typedef struct {
    long long location;
    long long length;
} CDStruct_627e0f85;

typedef struct {
    int tokenType;
    int tokenAltType;
    CDStruct_627e0f85 charRange;
    char *lexeme;
    int lexemeLength;
    int outOfBand;
} CDStruct_341fcc3f;

typedef struct {
    CDStruct_d703e233 bloomFilterSpecification;
    long long windowWidth;
} CDStruct_92de0e9e;

#pragma mark Typedef'd Unions

typedef union {
    struct {
        unsigned short updateComponent;
        unsigned short minorComponent;
        unsigned int majorComponent;
    } independent;
    unsigned long long combined;
} CDUnion_7de6e739;

