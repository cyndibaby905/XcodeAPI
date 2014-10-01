

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDETestsInTestableObserver-Protocol.h>

@class DVTStackBacktrace, IDETestManager, NSMutableSet, NSString, NSURL;

@interface _IDETestFileChangeBroker : NSObject <IDETestsInTestableObserver, DVTInvalidation>
{
    IDETestManager *_testManager;
    NSURL *_url;
    NSMutableSet *_fileObservers;
}

+ (void)initialize;
- (void)_notifyWorkspaceReferencedTestableChanged;
- (void)_notifyObserversTestsInFileUpdated;
- (void)workspaceReferencedTestablesChanged;
- (void)testablesChanged:(id)arg1;
- (void)testsChanged:(id)arg1;
- (void)_updateObservation;
- (void)removeTestFileObserver:(id)arg1;
- (void)addTestFileObserver:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithURL:(id)arg1 testManager:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

