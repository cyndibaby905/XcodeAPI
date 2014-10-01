

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTCustomDataStoring-Protocol.h>

@class DVTDirectoryBasedCustomDataStore, NSString;

@interface DVTGlobalCustomDataStore : NSObject <DVTCustomDataStoring>
{
    DVTDirectoryBasedCustomDataStore *_dataArchiver;
}

+ (id)defaultStore;
@property(readonly) DVTDirectoryBasedCustomDataStore *dataArchiver; // @synthesize dataArchiver=_dataArchiver;
@property(readonly) NSString *displayName;
- (BOOL)supportsCustomDataForOwnership:(id)arg1;
- (void)moveCustomDataWithSpecifier:(id)arg1 toSpecifier:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)removeCustomDataWithSpecifier:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)writeCustomData:(id)arg1 withSpecifier:(id)arg2 forceOverwrite:(BOOL)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)readCustomDataWithSpecifier:(id)arg1 error:(id *)arg2;
- (id)customDataOwnershipsForGrouping:(id)arg1;
- (id)customDataSpecifiersForGrouping:(id)arg1 ownership:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
