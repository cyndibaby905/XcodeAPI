

#import <Foundation/Foundation.h>

@protocol DVTPromise;

@interface DVTDownloadable_PKInstallClientDelegate : NSObject
{
    NSTimer *_timer;
    BOOL _isRunningModal;
    id <DVTPromise> _promise;
}

@property(retain) NSTimer *timer; // @synthesize timer=_timer;
- (void)_callPKInstallClientStatusTimer:(id)arg1;
- (void)installClientDidFinish:(id)arg1;
- (void)installClient:(id)arg1 didFailWithError:(id)arg2;
- (void)installClient:(id)arg1 currentState:(int)arg2 package:(id)arg3 progress:(double)arg4 timeRemaining:(double)arg5;
- (void)installClientDidBegin:(id)arg1;
- (id)initForModal:(BOOL)arg1 promise:(id)arg2;

@end

