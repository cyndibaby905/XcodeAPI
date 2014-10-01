

#import <Foundation/Foundation.h>

@interface NSDistributedNotificationCenter (DVTNSNotificationCenterAdditions)
- (id)dvt_addObserverForName:(id)arg1 object:(id)arg2 suspensionBehavior:(unsigned long long)arg3 queue:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (id)dvt_addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 suspensionBehavior:(unsigned long long)arg5;
- (id)dvt_addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)dvt_addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
@end

