

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>

@class DVTDocumentLocation, IDEActivityLogSectionRecorder, IDETypeIdentifier, NSArray, NSMutableArray, NSMutableString, NSString, NSURL;

@interface IDEActivityLogSection : NSObject <NSCopying>
{
    IDEActivityLogSectionRecorder *_recorder;
    IDETypeIdentifier *_domainType;
    NSString *_title;
    double _timeStartedRecording;
    double _timeStoppedRecording;
    NSMutableArray *_subsections;
    NSMutableString *_text;
    NSMutableArray *_messages;
    id _representedObject;
    NSString *_subtitle;
    DVTDocumentLocation *_location;
    NSString *_signature;
    NSString *_commandDetailDesc;
    unsigned short _totalTestFailureCount;
    unsigned short _totalErrorCount;
    unsigned short _totalWarningCount;
    unsigned short _totalAnalyzerWarningCount;
    unsigned short _totalAnalyzerResultCount;
    unsigned short _sectionType;
    unsigned short _sectionAuthority;
    unsigned short _resultCode;
    BOOL _wasCancelled;
    BOOL _isQuiet;
    BOOL _wasFetchedFromCache;
    BOOL _hasAddedIssueMessage;
    NSString *_uniqueIdentifier;
    NSString *_localizedResultString;
    int _lock;
}

+ (id)sectionWithContentsOfFile:(id)arg1 error:(id *)arg2;
+ (id)sectionByDeserializingData:(id)arg1 error:(id *)arg2;
+ (unsigned long long)serializationFormatVersion;
+ (id)UUIDWithURL:(id)arg1;
+ (id)URLWithUUID:(id)arg1;
+ (id)defaultMainLogDomainType;
+ (id)defaultLogSectionDomainType;
+ (Class)logRecorderClass;
+ (void)initialize;
@property(readonly) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy) NSString *localizedResultString; // @synthesize localizedResultString=_localizedResultString;
@property BOOL hasAddedIssueMessage; // @synthesize hasAddedIssueMessage=_hasAddedIssueMessage;
@property BOOL wasFetchedFromCache; // @synthesize wasFetchedFromCache=_wasFetchedFromCache;
@property(readonly) IDETypeIdentifier *domainType; // @synthesize domainType=_domainType;
@property unsigned short sectionAuthority; // @synthesize sectionAuthority=_sectionAuthority;
- (id)indexPathForMessageOrSection:(id)arg1;
- (id)indexPathForMessageOrSection:(id)arg1 messageOrSectionEqualityTest:(CDUnknownBlockType)arg2;
- (id)messageOrSectionAtIndexPath:(id)arg1;
- (BOOL)writeToFile:(id)arg1 error:(id *)arg2;
- (id)serializedData;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)addObserverUsingBlock:(CDUnknownBlockType)arg1;
- (id)enumerateMessagesUsingBlock:(CDUnknownBlockType)arg1;
- (id)enumerateSubsectionsRecursivelyUsingPreorderBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateSubsectionsRecursivelyUsingPreorderBlock:(CDUnknownBlockType)arg1 returningFilteredSections:(id)arg2;
@property(readonly) NSURL *logSectionURL;
- (id)emittedOutputText;
- (void)logRecorder:(id)arg1 setCommandDetailDescription:(id)arg2;
@property(readonly) NSString *commandDetailDescription;
@property(readonly) DVTDocumentLocation *location;
- (void)logRecorder:(id)arg1 setWasFetchedFromCache:(BOOL)arg2;
- (void)logRecorder:(id)arg1 setIsQuiet:(BOOL)arg2;
@property(readonly) BOOL isQuiet;
- (void)logRecorder:(id)arg1 adjustMessageCountsWithTestFailureDelta:(long long)arg2 errorCountDelta:(long long)arg3 warningCountDelta:(long long)arg4 analyzerWarningDelta:(long long)arg5 analyzerResultDelta:(long long)arg6;
@property(readonly) unsigned long long totalNumberOfAnalyzerResults;
@property(readonly) unsigned long long totalNumberOfAnalyzerWarnings;
@property(readonly) unsigned long long totalNumberOfWarnings;
@property(readonly) unsigned long long totalNumberOfErrors;
@property(readonly) unsigned long long totalNumberOfTestFailures;
- (NSString *)description;
- (void)logRecorder:(id)arg1 didStopRecordingWithInfo:(id)arg2;
- (void)checkMessageCounts;
@property(readonly) IDEActivityLogSectionRecorder *recorder;
@property(readonly) BOOL isRecording;
- (void)logRecorder:(id)arg1 setWasCancelled:(BOOL)arg2;
@property(readonly) long long resultCode;
@property(readonly) BOOL wasCancelled;
- (void)logRecorder:(id)arg1 addMessage:(id)arg2;
@property(readonly) NSArray *messages;
- (void)logRecorder:(id)arg1 appendText:(id)arg2;
- (void)setAdditionalDescription:(id)arg1;
@property(readonly) NSString *subtitle;
@property(readonly) NSString *text;
- (void)logRecorder:(id)arg1 addSubsection:(id)arg2;
@property(readonly) NSArray *subsections;
@property(readonly) double timeStoppedRecording;
@property(readonly) double timeStartedRecording;
@property(copy) NSString *signature;
@property(readonly) NSString *title;
@property(readonly) id representedObject;
- (void)setRepresentedObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(readonly) unsigned long long sectionType;
- (id)initWithTitle:(id)arg1;
- (id)init;
- (id)initWithSectionType:(unsigned long long)arg1 domainType:(id)arg2 title:(id)arg3;
- (id)initCommandInvocationWithDomainType:(id)arg1 title:(id)arg2 detailDescription:(id)arg3 filePath:(id)arg4;
- (id)initCommandInvocationWithDomainType:(id)arg1 title:(id)arg2 detailDescription:(id)arg3 location:(id)arg4;
- (id)initMajorGroupWithDomainType:(id)arg1 title:(id)arg2 representedObject:(id)arg3 subtitle:(id)arg4;
- (id)initMainLogWithDomainType:(id)arg1 title:(id)arg2;
- (id)initWithSectionType:(unsigned long long)arg1 domainType:(id)arg2 title:(id)arg3 location:(id)arg4;

@end

