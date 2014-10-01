

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDEClientTrackingToken-Protocol.h>

@class DVTSystemActivityToken, IDEConcreteClientTracker, NSString;

@interface IDEConcreteClientTrackingToken : NSObject <IDEClientTrackingToken>
{
    NSString *_clientName;
    CDUnknownBlockType _cancellationBlock;
    BOOL _hasUnregistered;
    IDEConcreteClientTracker *_clientTracker;
    DVTSystemActivityToken *_systemActivityToken;
}

@property(retain) DVTSystemActivityToken *systemActivityToken; // @synthesize systemActivityToken=_systemActivityToken;
@property(readonly) NSString *clientName; // @synthesize clientName=_clientName;
- (void)cancelClient;
- (id)initWithClientName:(id)arg1 clientTracker:(id)arg2 cancellationBlock:(CDUnknownBlockType)arg3;
@property(readonly, copy) NSString *description;
- (void)unregisterClient;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

