

#import <Foundation/Foundation.h>

@interface DVTUserNotificationCenter : NSObject <NSUserNotificationCenterDelegate>
{
    NSMutableDictionary *_handlers;
}

+ (id)defaultUserNotificationCenter;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didRemoveDeliveredNotifications:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didDeliverNotification:(id)arg2;
- (void)removeAllDeliveredNotifications;
- (void)removeDeliveredNotification:(id)arg1;
- (void)deliverNotification:(id)arg1 withEventHandler:(CDUnknownBlockType)arg2;
- (void)deliverNotification:(id)arg1;
@property(readonly) NSArray *deliveredNotifications;
- (void)removeScheduledNotification:(id)arg1;
- (void)scheduleNotification:(id)arg1 withEventHandler:(CDUnknownBlockType)arg2;
- (void)scheduleNotification:(id)arg1;
@property(copy) NSArray *scheduledNotifications;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
