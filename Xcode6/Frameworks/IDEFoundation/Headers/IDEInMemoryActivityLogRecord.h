

#import <IDEFoundation/IDEActivityLogRecord.h>

@class DVTFileDataType, IDEActivityLogSection, IDEInMemoryLogStore_Impl;

@interface IDEInMemoryActivityLogRecord : IDEActivityLogRecord
{
    IDEInMemoryLogStore_Impl *_logStore;
    IDEActivityLogSection *_fullLog;
    DVTFileDataType *_documentType;
}

+ (id)keyPathsForValuesAffectingTimeStoppedRecording;
+ (id)keyPathsForValuesAffectingIsRecording;
- (NSString *)description;
- (double)timeStoppedRecording;
- (id)highLevelStatus;
- (id)signature;
- (id)documentType;
- (double)timeStartedRecording;
- (id)title;
- (id)uniqueIdentifier;
- (id)domainType;
- (BOOL)isRecording;
- (id)fullLogIfInMemory;
- (id)fullLogWithError:(id *)arg1;
- (void)removeSelfWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)isRemoved;
- (id)initWithLog:(id)arg1 entityIdentifier:(id)arg2 store:(id)arg3;

@end

