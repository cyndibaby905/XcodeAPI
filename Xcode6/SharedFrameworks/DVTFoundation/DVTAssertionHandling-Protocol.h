

#import <Foundation/Foundation.h>

@class NSString;

@protocol DVTAssertionHandling <NSObject>
- (void)handleWarningInFunction:(NSString *)arg1 fileName:(NSString *)arg2 lineNumber:(long long)arg3 messageFormat:(NSString *)arg4 arguments:(struct __va_list_tag [1])arg5;
- (void)handleWarningInMethod:(SEL)arg1 object:(id)arg2 fileName:(NSString *)arg3 lineNumber:(long long)arg4 messageFormat:(NSString *)arg5 arguments:(struct __va_list_tag [1])arg6;
- (void)handleFailureInFunction:(NSString *)arg1 fileName:(NSString *)arg2 lineNumber:(long long)arg3 assertionSignature:(NSString *)arg4 messageFormat:(NSString *)arg5 arguments:(struct __va_list_tag [1])arg6;
- (void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 fileName:(NSString *)arg3 lineNumber:(long long)arg4 assertionSignature:(NSString *)arg5 messageFormat:(NSString *)arg6 arguments:(struct __va_list_tag [1])arg7;
@end

