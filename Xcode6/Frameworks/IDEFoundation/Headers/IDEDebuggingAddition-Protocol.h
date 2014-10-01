

#import <DVTFoundation/DVTInvalidation-Protocol.h>
#import <Foundation/Foundation.h>

@class DVTExtension, IDELaunchParametersSnapshot, IDELaunchSession, IDERunDestination, NSString;

@protocol IDEDebuggingAddition <NSObject, DVTInvalidation>
@property(readonly) NSString *identifier;
@property(readonly, nonatomic) IDELaunchSession *launchSession;
- (id)initInLaunchSession:(IDELaunchSession *)arg1 withAppDisplayName:(NSString *)arg2 runDestination:(IDERunDestination *)arg3 fromExtension:(DVTExtension *)arg4;

@optional
+ (BOOL)shouldInstantiateInLaunchSession:(IDELaunchSession *)arg1;
- (void)processFinalLaunchParameters:(IDELaunchParametersSnapshot *)arg1;
- (IDELaunchParametersSnapshot *)adjustedLaunchParametersForLaunchParameters:(IDELaunchParametersSnapshot *)arg1;
@end

