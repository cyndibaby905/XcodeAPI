

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEGaugeDataQueryCoordinator, NSSet, NSString;

@interface IDEGaugeDataQuery : NSObject <DVTInvalidation>
{
    BOOL _isSuspended;
    IDEGaugeDataQueryCoordinator *_queryCoordinator;
    NSSet *_observedAttributes;
    CDUnknownBlockType _resultDictHandler;
}

+ (void)initialize;
@property(nonatomic) BOOL isSuspended; // @synthesize isSuspended=_isSuspended;
@property(copy, nonatomic) CDUnknownBlockType resultDictHandler; // @synthesize resultDictHandler=_resultDictHandler;
@property(copy, nonatomic) NSSet *observedAttributes; // @synthesize observedAttributes=_observedAttributes;
@property(retain) IDEGaugeDataQueryCoordinator *queryCoordinator; // @synthesize queryCoordinator=_queryCoordinator;
- (void)handleResultDict:(id)arg1;
- (void)primitiveInvalidate;
- (id)initForProcessWithPID:(id)arg1 onDevice:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

