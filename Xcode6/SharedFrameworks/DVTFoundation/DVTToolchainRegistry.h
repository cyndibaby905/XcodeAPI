

#import <Foundation/Foundation.h>

@class DVTDispatchLock, DVTMutableOrderedDictionary, DVTSearchPath, NSMutableDictionary;

@interface DVTToolchainRegistry : NSObject <NSFastEnumeration>
{
    DVTSearchPath *_searchPath;
    DVTMutableOrderedDictionary *_identsToToolchains;
    NSMutableDictionary *_aliasesToToolchains;
    DVTDispatchLock *_lock;
}

+ (id)defaultRegistry;
@property(readonly) DVTDispatchLock *lock; // @synthesize lock=_lock;
@property(readonly) NSMutableDictionary *aliasesToToolchains; // @synthesize aliasesToToolchains=_aliasesToToolchains;
@property(readonly) DVTMutableOrderedDictionary *identsToToolchains; // @synthesize identsToToolchains=_identsToToolchains;
@property(readonly) DVTSearchPath *searchPath; // @synthesize searchPath=_searchPath;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (BOOL)scanSearchPathAndRegisterToolchains:(id *)arg1;
- (id)allRegisteredToolchains;
- (id)defaultToolchain;
- (id)toolchainForIdentifier:(id)arg1;
- (BOOL)registerToolchain:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithSearchPath:(id)arg1;

@end

