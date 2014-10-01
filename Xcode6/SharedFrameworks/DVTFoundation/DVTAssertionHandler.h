

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTAssertionHandling-Protocol.h>

@class NSString;

@interface DVTAssertionHandler : NSObject <DVTAssertionHandling>
{
}

+ (void)_crashWithCrashReporterString:(id)arg1 assertionSignature:(id)arg2;
+ (id)assertionLoggingAspect;
+ (void)setCurrentHandler:(id)arg1 forThread:(id)arg2;
+ (id)currentHandlerForThread:(id)arg1;
+ (void)setCurrentHandler:(id)arg1;
+ (id)currentHandler;
- (void)handleWarningInFunction:(id)arg1 fileName:(id)arg2 lineNumber:(long long)arg3 messageFormat:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
- (void)handleWarningInMethod:(SEL)arg1 object:(id)arg2 fileName:(id)arg3 lineNumber:(long long)arg4 messageFormat:(id)arg5 arguments:(struct __va_list_tag [1])arg6;
- (void)handleFailureInFunction:(id)arg1 fileName:(id)arg2 lineNumber:(long long)arg3 assertionSignature:(id)arg4 messageFormat:(id)arg5 arguments:(struct __va_list_tag [1])arg6;
- (void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 fileName:(id)arg3 lineNumber:(long long)arg4 assertionSignature:(id)arg5 messageFormat:(id)arg6 arguments:(struct __va_list_tag [1])arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

