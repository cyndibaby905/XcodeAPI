

#import <Foundation/Foundation.h>

@class DVTFilePath, DVTMountedFileSystem, DVTPointerArray, NSMutableDictionary;

@interface DVTFileSystemVNode : NSObject
{
    NSMutableDictionary *_derivedInfoDict;
    DVTPointerArray *_filePaths;
    DVTFilePath *_filePath;
    unsigned long long _inodeNumber;
    long long _fileSize;
    unsigned long long _statFlags;
    long long _posixModificationTime;
    unsigned int _statUid;
    unsigned int _statGid;
    int _deviceNumber;
    unsigned short _statMode;
}

+ (id)lookupVNodeForDeviceNumber:(int)arg1 inodeNumber:(unsigned long long)arg2;
+ (void)initialize;
@property(readonly) long long posixModificationTime; // @synthesize posixModificationTime=_posixModificationTime;
@property(readonly) long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly) unsigned long long statFlags; // @synthesize statFlags=_statFlags;
@property(readonly) unsigned int statGid; // @synthesize statGid=_statGid;
@property(readonly) unsigned int statUid; // @synthesize statUid=_statUid;
@property(readonly) unsigned short statMode; // @synthesize statMode=_statMode;
@property(readonly) unsigned long long inodeNumber; // @synthesize inodeNumber=_inodeNumber;
@property(readonly) int deviceNumber; // @synthesize deviceNumber=_deviceNumber;
- (NSString *)description;
- (void)recordStatInfo:(const struct stat *)arg1;
- (void)discardCaches;
- (void)addCachedEntriesFromDictionary:(id)arg1;
- (id)cachedValueForKey:(id)arg1;
- (void)removeFilePath:(id)arg1;
- (void)addFilePath:(id)arg1;
- (id)filePath;
- (id)filePaths;
@property(readonly) DVTMountedFileSystem *fileSystem;
- (id)initWithStatInfo:(const struct stat *)arg1;

@end

