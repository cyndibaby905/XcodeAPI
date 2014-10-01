

@class NSString, NSUUID;

@protocol XCTestManager_DaemonConnectionInterface
- (id)_IDE_beginSessionWithIdentifier:(NSUUID *)arg1 forClient:(NSString *)arg2 atPath:(NSString *)arg3;
- (id)_IDE_requestSessionWithIdentifier:(NSUUID *)arg1;
@end

