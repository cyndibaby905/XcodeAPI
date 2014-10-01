

#import <Foundation/Foundation.h>

@interface DVTSystemEvents : NSObject
{
    BOOL _systemNotificationsEnabled;
    dispatch_source_t _cache_event_source;
}

+ (void)stop;
+ (void)start;
- (void)_stopEvents;
- (void)_startEvents;
- (id)_initInternal;
- (id)init;
- (void)_postNotificationWhenNotTerminating:(id)arg1 object:(id)arg2;
- (void)_applicationWillTerminate:(id)arg1;

@end

