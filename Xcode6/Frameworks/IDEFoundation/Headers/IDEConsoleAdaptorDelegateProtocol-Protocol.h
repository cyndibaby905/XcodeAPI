

@class NSString;

@protocol IDEConsoleAdaptorDelegateProtocol

@optional
- (NSString *)parseConsoleOutputFromOriginalOutput:(NSString *)arg1;
- (NSString *)parseConsoleInputFromOriginalInput:(NSString *)arg1;
@end

