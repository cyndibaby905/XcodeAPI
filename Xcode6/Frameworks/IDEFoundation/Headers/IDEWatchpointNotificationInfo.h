

#import <Foundation/Foundation.h>

@class IDEWatchpoint, NSString;

@interface IDEWatchpointNotificationInfo : NSObject
{
    IDEWatchpoint *_watchpoint;
    NSString *_watchpointID;
    NSString *_expression;
    NSString *_oldValue;
    NSString *_newValue;
    NSString *_thread;
}

@property(readonly) NSString *thread; // @synthesize thread=_thread;
@property(readonly) NSString *newValue; // @synthesize newValue=_newValue;
@property(readonly) NSString *oldValue; // @synthesize oldValue=_oldValue;
@property(readonly) NSString *expression; // @synthesize expression=_expression;
@property(readonly) NSString *watchpointID; // @synthesize watchpointID=_watchpointID;
@property(readonly) IDEWatchpoint *watchpoint; // @synthesize watchpoint=_watchpoint;
- (id)consoleOutputStyleDisplayString;
- (id)titleStyleDisplayString;
- (id)initWithWatchpoint:(id)arg1 watchpointID:(id)arg2 expression:(id)arg3 oldValue:(id)arg4 newValue:(id)arg5 thread:(id)arg6;

@end

