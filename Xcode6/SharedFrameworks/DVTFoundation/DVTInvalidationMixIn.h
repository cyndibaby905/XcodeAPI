

#import <DVTFoundation/DVTMixIn.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString;

@interface DVTInvalidationMixIn : DVTMixIn <DVTInvalidation>
{
}

+ (void)mixInExtendClass:(Class)arg1 assertInDealloc:(BOOL)arg2;
- (void)DVTInvalidationMixIn_SoftAssertDealloc;
- (void)DVTInvalidationMixIn_dealloc;
- (void)invalidate;
- (void)primitiveInvalidate;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

