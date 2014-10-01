

#import <IDEFoundation/IDEActivityLogRecord.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTFileDataType, DVTObservingToken, DVTStackBacktrace, IDEActivityLogSection, IDEOnDiskLogStore_Impl, IDETypeIdentifier, NSString;

@interface IDEOnDiskActivityLogRecord : IDEActivityLogRecord <DVTInvalidation>
{
    IDEOnDiskLogStore_Impl *_logStore;
    IDEActivityLogSection *_strongFullLog;
    IDEActivityLogSection *_weakFullLog;
    IDEActivityLogSection *_recorderLog;
    DVTObservingToken *_recorderLogObservingToken;
    NSString *_uniqueIdentifier;
    IDETypeIdentifier *_domainType;
    NSString *_title;
    double _timeStartedRecording;
    double _timeStoppedRecording;
    DVTFileDataType *_documentType;
    NSString *_signature;
    NSString *_highLevelStatus;
}

+ (id)keyPathsForValuesAffectingIsRecording;
+ (void)initialize;
@property(retain, nonatomic) IDEActivityLogSection *recorderLog; // @synthesize recorderLog=_recorderLog;
@property(nonatomic) double timeStoppedRecording; // @synthesize timeStoppedRecording=_timeStoppedRecording;
@property(readonly, copy) NSString *description;
- (id)highLevelStatus;
- (id)signature;
- (id)documentType;
- (double)timeStartedRecording;
- (id)title;
- (id)domainType;
- (id)uniqueIdentifier;
- (BOOL)isRecording;
- (void)_setRemovedState;
- (void)_makeWeak;
- (id)fullLogIfInMemory;
- (id)fullLogWithError:(id *)arg1;
- (void)removeSelfWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)isRemoved;
- (void)primitiveInvalidate;
- (id)initWithUUID:(id)arg1 store:(id)arg2 cacheEntry:(id)arg3 updatedCache:(char *)arg4 error:(id *)arg5;
- (id)initWithLog:(id)arg1 entityIdentifier:(id)arg2 store:(id)arg3;
- (id)testableSummariesPlistFilePath;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

