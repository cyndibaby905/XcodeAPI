

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDEDebugProcess-Protocol.h>

@class IDELaunchSession, NSArray, NSString;

@interface IDEShellXPCProcess : NSObject <IDEDebugProcess>
{
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *loadedCodeModules;
- (id)contentDelegateUIExtensionIdentifier;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, copy) NSString *associatedProcessUUID;
- (id)initWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

