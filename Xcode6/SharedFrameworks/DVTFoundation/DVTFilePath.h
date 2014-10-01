

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTFileSystemRepresentationProviding-Protocol.h>

@class DVTFileDataType, DVTFileSystemVNode, NSArray, NSDate, NSDictionary, NSString, NSURL;

@interface DVTFilePath : NSObject <NSCopying, DVTFileSystemRepresentationProviding, NSSecureCoding>
{
    DVTFilePath *_parentPath;
    struct fastsimplearray *_childfsaPaths;
    DVTFileSystemVNode *_vnode;
    unsigned long long _numAssociates;
    unsigned long long _numObservers;
    id _associates;
    NSString *_pathString;
    NSURL *_fileURL;
    BOOL _hasResolvedVnode;
    BOOL _cleanRemoveFromParent;
    unsigned char _validationState;
    unsigned short _fsrepLength;
    int _childPathsLock;
    int _associatesLock;
    char _fsrep[0];
}

+ (void)_registerStandardCachedFileInfoDerivationFunctionsIfNeeded;
+ (CDUnknownFunctionPointerType)_cachedInfoDerivationFunctionForKey:(id)arg1 derivationLock:(id *)arg2;
+ (void)registerCachedInfoDerivationFunction:(CDUnknownFunctionPointerType)arg1 forKey:(id)arg2;
+ (id)filePathForFileURL:(id)arg1;
+ (id)filePathForPathString:(id)arg1;
+ (id)filePathForFileSystemRepresentation:(const char *)arg1;
+ (id)filePathForFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)_filePathForParent:(id)arg1 pathString:(id)arg2;
+ (id)_filePathForParent:(id)arg1 fileSystemRepresentation:(const char *)arg2 length:(unsigned long long)arg3 allowCreation:(BOOL)arg4;
+ (BOOL)supportsSecureCoding;
+ (id)_lookupOrCreateFilePathWithParentPath:(id)arg1 fileSystemRepresentation:(const char *)arg2 length:(unsigned long long)arg3 allowCreation:(BOOL)arg4;
+ (id)rootFilePath;
+ (void)initialize;
- (id)_descriptionOfAssociates;
- (NSString *)description;
- (void)dvt_provideFileSystemRepresentationToBlock:(CDUnknownBlockType)arg1;
- (void)removeAllAssociates;
- (void)removeAssociate:(id)arg1;
- (void)removeAssociatesWithRole:(id)arg1;
- (void)removeAssociate:(id)arg1 withRole:(id)arg2;
- (void)addAssociate:(id)arg1 withRole:(id)arg2 observingDidChangeRecursively:(BOOL)arg3 onOperationQueue:(id)arg4 block:(CDUnknownBlockType)arg5;
- (void)addAssociate:(id)arg1 withRole:(id)arg2 observingDidChangeRecursively:(BOOL)arg3 onDispatchQueue:(id)arg4 block:(CDUnknownBlockType)arg5;
- (void)addAssociate:(id)arg1 withRole:(id)arg2;
- (id)associatesWithRole:(id)arg1;
- (id)associatesWithRole:(id)arg1 forAllPathsToSameFile:(BOOL)arg2;
- (void)_addAssociatesWithRole:(id)arg1 toArray:(id *)arg2;
- (void)_notifyAssociatesOfChange;
- (BOOL)_hasChangeObservers;
- (BOOL)_addInfoForObserversOfChangedFilePath:(id)arg1 toObjects:(id)arg2 blocks:(id)arg3 dispatchQueues:(id)arg4 operationQueues:(id)arg5;
- (id)cachedValueForKey:(id)arg1;
- (id)machOArchitecturesWithError:(id *)arg1;
@property(readonly) DVTFileDataType *fileDataTypePresumed;
@property(readonly) DVTFileDataType *fileDataTypeFromFileContent;
@property(readonly) DVTFilePath *symbolicLinkDestinationFilePath;
@property(readonly) NSURL *fileReferenceURL;
@property(readonly) NSDictionary *fileSystemAttributes;
@property(readonly) NSDictionary *fileAttributes;
@property(readonly) NSString *fileTypeAttribute;
@property(readonly) BOOL isDirectory;
@property(readonly) NSArray *sortedDirectoryContents;
@property(readonly) NSArray *directoryContents;
@property(readonly) NSDate *modificationDate;
@property(readonly) BOOL isExcludedFromBackup;
@property(readonly) BOOL isSymbolicLink;
@property(readonly) BOOL isExecutable;
@property(readonly) BOOL isDeletable;
@property(readonly) BOOL isWritable;
@property(readonly) BOOL isReadable;
@property(readonly) BOOL existsInFileSystem;
- (void)excludeFromBackup;
- (BOOL)_hasResolvedVnode;
- (id)_locked_vnode;
- (id)_locked_vnodeKnownDoesNotExist:(BOOL)arg1;
- (void)_invalidateFilePathAndChildrenIncludingEquivalents;
- (void)_invalidateFilePathAndChildren;
- (void)invalidateFilePath;
- (void)_invalidateKnownDoesNotExist:(BOOL)arg1 explicitlyInvalidateChildren:(BOOL)arg2;
- (void)_invalidateChildrenRecursivelyKnownDoesNotExist:(BOOL)arg1;
- (void)_locked_validateTentativelyInvalidatedChildrenRecursively;
- (void)_locked_tentativelyInvalidateChildrenRecursivelyWithChildrenShouldBeTentativelyInvalid:(BOOL)arg1;
- (BOOL)isSameFileAsFilePath:(id)arg1;
- (BOOL)isEqual:(id)other;
- (id)relativePathStringFromFilePath:(id)arg1;
- (id)relativePathStringFromAncestorFilePath:(id)arg1;
- (BOOL)getFullFileSystemRepresentationIntoBuffer:(char **)arg1 ofLength:(unsigned long long)arg2 allowAllocation:(BOOL)arg3;
- (BOOL)_getFSRepIntoBuffer:(char **)arg1 ofLength:(unsigned long long)arg2 requiredLength:(unsigned long long)arg3 endPtr:(char **)arg4 allowAllocation:(BOOL)arg5;
@property(readonly) NSString *fileName;
@property(readonly) NSURL *fileURL;
@property(readonly) NSArray *pathComponents;
@property(readonly) NSString *pathString;
- (id)filePathForUniqueRelativeDirectoryWithPrefix:(id)arg1 error:(id *)arg2;
- (id)filePathForUniqueRelativeFileWithPrefix:(id)arg1 error:(id *)arg2;
- (id)filePathForRelativePathString:(id)arg1;
- (id)filePathForRelativeFileSystemRepresentation:(const char *)arg1;
- (id)filePathForRelativeFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;
- (BOOL)isAncestorOfFilePath:(id)arg1;
@property(readonly) DVTFilePath *volumeFilePath;
@property(readonly) DVTFilePath *parentFilePath;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)_invokeWithLockedAssociates:(CDUnknownBlockType)arg1;
- (void)_invokeWithLockedChildPaths:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

