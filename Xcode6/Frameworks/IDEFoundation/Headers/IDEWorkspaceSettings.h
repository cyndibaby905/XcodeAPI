

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEWorkspace, NSMutableDictionary, NSString;

@interface IDEWorkspaceSettings : NSObject <DVTInvalidation>
{
    IDEWorkspace *_workspace;
    NSMutableDictionary *_workspaceSettings;
    BOOL _loadedExistingSettings;
}

+ (void)initialize;
@property(readonly) BOOL loadedExistingSettings; // @synthesize loadedExistingSettings=_loadedExistingSettings;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void)primitiveInvalidate;
- (void)loadSettings;
- (void)saveSettings;
- (id)customDataSpecifier;
- (id)settingsOwnership;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
