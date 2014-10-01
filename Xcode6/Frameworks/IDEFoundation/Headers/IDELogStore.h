

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSArray, NSMutableArray, NSString;

@interface IDELogStore : NSObject <DVTInvalidation>
{
    NSMutableArray *_logRecords;
}

+ (id)onDiskOrInMemoryLogStoreInWorkspaceArena:(id)arg1 prefix:(id)arg2;
+ (void)initialize;
- (id)testableSummariesPlistFilePathForActivityLogSection:(id)arg1;
- (id)logRecordWithURL:(id)arg1;
- (id)addLog:(id)arg1 entityIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSArray *logRecords; // @dynamic logRecords;
@property(readonly) NSMutableArray *mutableLogRecords; // @dynamic mutableLogRecords;
@property BOOL preserveOldLogs; // @dynamic preserveOldLogs;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

