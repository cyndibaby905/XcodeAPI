

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEActivityLogSectionRecorder, IDELogStore, NSArray, NSString;

@interface IDEDeviceInstallWorkspaceMonitor : NSObject <DVTInvalidation>
{
    NSString *_appName;
    IDELogStore *_logStore;
    IDEActivityLogSectionRecorder *_logRecorder;
    IDEActivityLogSectionRecorder *_logSectionRecorder;
    NSString *_resultError;
}

+ (id)keyPathsForValuesAffectingLogRecords;
+ (void)initialize;
@property(retain) NSString *resultError; // @synthesize resultError=_resultError;
@property(retain) IDEActivityLogSectionRecorder *logSectionRecorder; // @synthesize logSectionRecorder=_logSectionRecorder;
@property(retain) IDEActivityLogSectionRecorder *logRecorder; // @synthesize logRecorder=_logRecorder;
@property(retain) IDELogStore *logStore; // @synthesize logStore=_logStore;
@property(retain) NSString *appName; // @synthesize appName=_appName;
- (void)setResultErrorString:(id)arg1;
- (void)addOperationToActivityLog:(id)arg1 details:(id)arg2;
- (void)stopActivityLog;
- (void)startActivityLogForAppNamed:(id)arg1 deviceNamed:(id)arg2;
- (void)loadDeviceInstallLogsForWorkspace:(id)arg1;
@property(readonly) NSArray *logRecords;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

