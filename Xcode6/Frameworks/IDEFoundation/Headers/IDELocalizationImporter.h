

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDELocalizationWorkProgress-Protocol.h>

@class DVTNotificationToken, DVTStackBacktrace, IDELocalizationImporterContext, IDELocalizationStream, NSString;

@interface IDELocalizationImporter : NSObject <IDELocalizationWorkProgress, DVTInvalidation>
{
    IDELocalizationStream *_importWork;
    IDELocalizationImporterContext *_importContext;
    long long _workDone;
    long long _workOutstanding;
    DVTNotificationToken *_localizationPhaseObserver;
    DVTNotificationToken *_localizationWorkItemIncrementObserver;
    DVTNotificationToken *_localizationWorkItemDecrementObserver;
    BOOL _complete;
    long long _progress;
    NSString *_phase;
    NSString *_workTitle;
    CDUnknownBlockType _onErrorBlock;
    CDUnknownBlockType _onCompletedBlock;
}

+ (void)initialize;
+ (id)importerFromURL:(id)arg1 container:(id)arg2 sourceLanguage:(id)arg3 onNeedsResolutions:(CDUnknownBlockType)arg4;
+ (id)importWorkForContext:(id)arg1;
@property(copy) CDUnknownBlockType onCompletedBlock; // @synthesize onCompletedBlock=_onCompletedBlock;
@property(copy) CDUnknownBlockType onErrorBlock; // @synthesize onErrorBlock=_onErrorBlock;
@property(readonly) NSString *workTitle; // @synthesize workTitle=_workTitle;
@property(retain) NSString *phase; // @synthesize phase=_phase;
@property BOOL complete; // @synthesize complete=_complete;
@property long long progress; // @synthesize progress=_progress;
- (void)start;
- (void)primitiveInvalidate;
- (id)initWithImportWork:(id)arg1 withContext:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

