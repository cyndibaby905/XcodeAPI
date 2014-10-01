

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEActivityLogSection, IDELogStore, IDESourceControlExtension, IDESourceControlOperation, IDESourceControlRepository, IDESourceControlTree, IDESourceControlWorkingCopyConfiguration, NSArray, NSDictionary, NSString;

@interface IDESourceControlRequest : NSObject <DVTInvalidation>
{
    IDESourceControlTree *_sourceTree;
    IDESourceControlWorkingCopyConfiguration *_wcc;
    IDESourceControlRepository *_remote;
    int _type;
    NSString *_startingRevision;
    NSString *_endingRevision;
    NSString *_destination;
    NSArray *_files;
    NSDictionary *_options;
    IDEActivityLogSection *_log;
    IDEActivityLogSection *_logSection;
    NSString *_shortTitle;
    NSString *_longTitle;
    NSString *_workspaceName;
    IDELogStore *_logStore;
    IDESourceControlExtension *_sourceControlExtension;
    NSString *_message;
    IDESourceControlOperation *_operation;
    BOOL _stopAllActivityWhenCanceled;
    BOOL _shouldGenerateLog;
    BOOL _cancelable;
    CDUnknownBlockType _progressBlock;
}

+ (void)initialize;
@property(copy) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain) IDESourceControlWorkingCopyConfiguration *wcc; // @synthesize wcc=_wcc;
@property IDESourceControlOperation *operation; // @synthesize operation=_operation;
@property BOOL cancelable; // @synthesize cancelable=_cancelable;
@property(readonly) IDELogStore *logStore; // @synthesize logStore=_logStore;
@property BOOL shouldGenerateLog; // @synthesize shouldGenerateLog=_shouldGenerateLog;
@property(readonly, copy) NSString *workspaceName; // @synthesize workspaceName=_workspaceName;
@property(retain) IDEActivityLogSection *logSection; // @synthesize logSection=_logSection;
@property(retain) IDEActivityLogSection *log; // @synthesize log=_log;
@property BOOL stopAllActivityWhenCanceled; // @synthesize stopAllActivityWhenCanceled=_stopAllActivityWhenCanceled;
@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(copy) NSArray *files; // @synthesize files=_files;
@property(copy) NSString *destination; // @synthesize destination=_destination;
@property(copy) NSString *message; // @synthesize message=_message;
@property(copy) NSString *endingRevision; // @synthesize endingRevision=_endingRevision;
@property(copy) NSString *startingRevision; // @synthesize startingRevision=_startingRevision;
@property int type; // @synthesize type=_type;
@property(retain) IDESourceControlRepository *remote; // @synthesize remote=_remote;
@property(retain) IDESourceControlTree *sourceTree; // @synthesize sourceTree=_sourceTree;
- (void)primitiveInvalidate;
- (void)cancelOperation;
- (void)setShouldGenerateLog:(BOOL)arg1 logStore:(id)arg2 workspaceName:(id)arg3;
- (void)setShouldGenerateLog:(BOOL)arg1 logStore:(id)arg2 shortTitle:(id)arg3 longTitle:(id)arg4;
@property(readonly, copy) NSString *longTitle; // @synthesize longTitle=_longTitle;
@property(readonly, copy) NSString *shortTitle; // @synthesize shortTitle=_shortTitle;
- (BOOL)isRequestBlacklistedFromLogging;
@property(readonly, copy) NSString *description;
@property(readonly) IDESourceControlRepository *repositoryToAuthenticate;
@property(retain) IDESourceControlExtension *sourceControlExtension; // @synthesize sourceControlExtension=_sourceControlExtension;
- (id)initWithType:(int)arg1 startingRevision:(id)arg2 destination:(id)arg3 options:(id)arg4;
- (id)initWithType:(int)arg1 sourceTree:(id)arg2 files:(id)arg3 options:(id)arg4;
- (id)initWithType:(int)arg1 sourceTree:(id)arg2 destination:(id)arg3 files:(id)arg4 options:(id)arg5;
- (id)initWithType:(int)arg1 sourceTree:(id)arg2 destination:(id)arg3 startingRevision:(id)arg4 endingRevision:(id)arg5 files:(id)arg6 options:(id)arg7;
- (id)initWithType:(int)arg1 sourceTree:(id)arg2 startingRevision:(id)arg3 endingRevision:(id)arg4 files:(id)arg5 options:(id)arg6;
- (id)initWithType:(int)arg1 sourceTree:(id)arg2 message:(id)arg3 files:(id)arg4 options:(id)arg5;
- (id)initWithType:(int)arg1 workingCopyConfiguration:(id)arg2 destination:(id)arg3 files:(id)arg4 options:(id)arg5;
- (id)initWithType:(int)arg1 sourceTree:(id)arg2 files:(id)arg3;
- (id)initWithType:(int)arg1 sourceTree:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

