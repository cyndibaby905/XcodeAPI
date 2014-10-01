

#import <IDEFoundation/IDEContainerReadOnlyItem.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString;

@interface IDEContainerReadOnlyListeningItem : IDEContainerReadOnlyItem <DVTInvalidation>
{
}

+ (void)initialize;
- (void)parentFilePathDidChange;
- (void)filePathDidChange;
- (void)primitiveInvalidate;
- (id)initWithFilePath:(id)arg1 container:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
