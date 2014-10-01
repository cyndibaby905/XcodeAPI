

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTCancellable-Protocol.h>

@class IDEIssueManager, NSString, NSURL;

@interface IDEIssueManager_ByFileObserverToken : NSObject <DVTCancellable>
{
    IDEIssueManager *_issueManager;
    NSURL *_documentURL;
    unsigned long long _observingOptions;
    CDUnknownBlockType _observerBlock;
}

@property(readonly) unsigned long long observingOptions; // @synthesize observingOptions=_observingOptions;
@property(readonly, copy) CDUnknownBlockType observerBlock; // @synthesize observerBlock=_observerBlock;
@property(readonly) NSURL *documentURL; // @synthesize documentURL=_documentURL;
- (void)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (id)initWithIssueManager:(id)arg1 documentURL:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

