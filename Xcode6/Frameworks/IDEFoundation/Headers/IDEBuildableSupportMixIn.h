

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString;

@interface IDEBuildableSupportMixIn : NSObject <DVTInvalidation>
{
    id <IDEBuildable> _buildable;
    BOOL _hasRecursiveDependencyCycle;
}

+ (void)initialize;
- (id)orderedRecursiveDependenciesIncludingSelf:(BOOL)arg1;
- (id)uncachedOrderedRecursiveDependenciesIncludingSelf:(BOOL)arg1 visitedBuildables:(id)arg2;
- (BOOL)hasRecursiveDependencyCycle;
- (void)primitiveInvalidate;
- (id)initWithBuildable:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

