

#import <Foundation/Foundation.h>

@class NSOperationQueue;

@interface _DVTNotificationReceiver : NSObject
{
    id _observer;
    SEL _selector;
    NSOperationQueue *_queue;
    CDUnknownBlockType _block;
    BOOL _registeredWithBlock;
}

- (void)receiveNotification:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (id)initWithObserver:(id)arg1 selector:(SEL)arg2;

@end

