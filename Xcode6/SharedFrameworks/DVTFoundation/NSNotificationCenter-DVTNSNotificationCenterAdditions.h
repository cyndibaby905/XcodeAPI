

#import <Foundation/Foundation.h>

@interface NSNotificationCenter (DVTNSNotificationCenterAdditions)
- (id)dvt_addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)dvt_addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)_dvt_postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
@end

