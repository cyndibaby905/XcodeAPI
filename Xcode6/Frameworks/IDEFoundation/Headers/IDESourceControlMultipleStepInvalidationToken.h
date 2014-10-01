

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTCancellable-Protocol.h>

@class IDESourceControlRequest, NSString;

@interface IDESourceControlMultipleStepInvalidationToken : NSObject <DVTCancellable>
{
    IDESourceControlRequest *_currentRequest;
    BOOL _isCancelled;
}

@property __weak IDESourceControlRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
- (void)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

