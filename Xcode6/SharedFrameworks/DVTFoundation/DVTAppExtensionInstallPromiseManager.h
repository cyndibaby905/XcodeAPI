

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTDTApplicationWorkspaceClient-Protocol.h>

@class NSMapTable, NSString;

@interface DVTAppExtensionInstallPromiseManager : NSObject <DVTDTApplicationWorkspaceClient>
{
    NSMapTable *_promiseMap;
}

+ (BOOL)listenForIDs:(id)arg1 promise:(id)arg2 channel:(id)arg3;
+ (void)initialize;
- (void)applicationUninstalled:(id)arg1;
- (void)applicationInstalled:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

