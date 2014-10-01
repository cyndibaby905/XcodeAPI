

@class NSArray, NSDictionary, NSString;

@protocol DVTObserveXPCServicesProtocol
- (void)enableExtensionWithIdentifier:(NSString *)arg1;
- (void)stopObservingServicesForPid:(int)arg1;
- (void)observerServiceNamed:(NSString *)arg1 parentPid:(int)arg2 args:(NSArray *)arg3 env:(NSDictionary *)arg4 startSuspended:(BOOL)arg5 interposeBinaryAtPath:(NSString *)arg6;
@end

