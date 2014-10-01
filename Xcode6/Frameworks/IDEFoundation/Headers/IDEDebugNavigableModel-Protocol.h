

#import <Foundation/Foundation.h>

@class IDELaunchSession, NSString;

@protocol IDEDebugNavigableModel <NSObject>
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, copy) NSString *associatedProcessUUID;
@end

