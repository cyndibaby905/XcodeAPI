

#import <Foundation/Foundation.h>

@class DVTDispatchLock, NSHashTable, NSMutableData, NSURL;

@interface IDEIndexDBStringStorage : NSObject
{
    NSURL *_fileURL;
    DVTDispatchLock *_lock;
    NSHashTable *_hashTable;
    NSMutableData *_data;
    long long _fileSize;
}

+ (void)initialize;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)findStringsContaining:(const char *)arg1 anchorStart:(BOOL)arg2 anchorEnd:(BOOL)arg3 subsequence:(BOOL)arg4 forEachResult:(CDUnknownBlockType)arg5;
- (id)findStringAtOffset:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (id)writeChangesToDisk;
- (long long)offsetOfString:(const char *)arg1 addIfMissing:(BOOL)arg2;
- (void)close;
- (id)open;
- (id)initWithFileURL:(id)arg1;

@end

