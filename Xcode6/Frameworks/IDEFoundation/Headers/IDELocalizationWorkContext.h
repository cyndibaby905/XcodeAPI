

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSMutableSet, NSString;

@interface IDELocalizationWorkContext : NSObject <DVTInvalidation>
{
    NSMutableSet *_toInvalidate;
    id _intermediateResults;
}

+ (void)initialize;
- (void)setIntermediateResults:(id)arg1;
- (id)intermediateResults;
- (void)primitiveInvalidate;
- (void)invalidateLater:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

