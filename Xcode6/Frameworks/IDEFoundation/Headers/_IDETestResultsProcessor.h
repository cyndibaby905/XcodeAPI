

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTDevice, DVTStackBacktrace, IDERunOperation, NSMutableArray, NSString;

@interface _IDETestResultsProcessor : NSObject <DVTInvalidation>
{
    BOOL _finished;
    NSString *_targetArchitecture;
    DVTDevice *_targetDevice;
    NSMutableArray *_validatorsStack;
    IDERunOperation *_operation;
    DVTStackBacktrace *_creationBacktrace;
    id <_IDETestResultsProcessorDelegate> _delegate;
}

+ (void)initialize;
@property BOOL finished; // @synthesize finished=_finished;
@property(retain) id <_IDETestResultsProcessorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) DVTStackBacktrace *creationBacktrace; // @synthesize creationBacktrace=_creationBacktrace;
@property(retain) IDERunOperation *operation; // @synthesize operation=_operation;
@property(retain) NSMutableArray *validatorsStack; // @synthesize validatorsStack=_validatorsStack;
@property(retain) DVTDevice *targetDevice; // @synthesize targetDevice=_targetDevice;
@property(retain) NSString *targetArchitecture; // @synthesize targetArchitecture=_targetArchitecture;
- (BOOL)validateEvent:(int)arg1 error:(id *)arg2;
- (void)initializeValidatorsStack;
- (id)initWithSessionStateDelegate:(id)arg1 andOperation:(id)arg2;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

