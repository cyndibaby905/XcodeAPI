

#import <IDEFoundation/IDEContainerCore.h>

#import <IDEFoundation/IDEFolderCore.h>

@class DVTStackBacktrace, NSString;

@interface IDEFolderCore : IDEContainerCore <IDEFolderCore>
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

