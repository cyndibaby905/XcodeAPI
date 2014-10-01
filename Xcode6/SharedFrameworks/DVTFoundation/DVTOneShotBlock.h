

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString;

@interface DVTOneShotBlock : NSObject <DVTInvalidation>
{
    CDUnknownBlockType _callbackBlock;
}

+ (void)initialize;
+ (id)oneShotBlockWithMixedInvalidationAndCancellationTokens:(id)arg1;
+ (id)oneShotBlockWithCancellationTokens:(id)arg1;
+ (id)oneShotBlockWithInvalidateTokens:(id)arg1;
+ (id)oneShotBlockWithCallback:(CDUnknownBlockType)arg1;
- (void)primitiveInvalidate;
- (id)initWithCallbackBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

