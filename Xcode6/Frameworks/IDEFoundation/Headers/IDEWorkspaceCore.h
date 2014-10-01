

#import <IDEFoundation/IDEXMLPackageContainerCore.h>

#import <IDEFoundation/IDEContainerCore.h>

@class DVTStackBacktrace, NSString;

@interface IDEWorkspaceCore : IDEXMLPackageContainerCore <IDEContainerCore>
{
}


// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@end

