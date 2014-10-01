

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEWorkspace, NSString;

@interface IDERefactoring : NSObject <DVTInvalidation>
{
    IDEWorkspace *_workspace;
    id _willIndexNotificationObservingToken;
    id _didIndexNotificationObservingToken;
    BOOL _refactoringAllowed;
    id _domainObject;
}

+ (void)initialize;
@property(retain) id domainObject; // @synthesize domainObject=_domainObject;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (id)objCOrCCompilationUnitIndexablesForMainFile:(id)arg1 indexableObjects:(id)arg2;
- (BOOL)isFileObjCCompilationUnitOrHeader:(id)arg1 error:(id *)arg2;
@property(readonly, copy) NSString *description;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

