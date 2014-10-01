

#import <Foundation/Foundation.h>

@class DVTExtension, NSString;

@interface DVTReferenceResolutionStrategy : NSObject
{
    DVTExtension *_extension;
    NSString *_persistenceIdentifier;
    NSString *_displayName;
}

+ (id)strategyWithPersistenceIdentifier:(id)arg1;
+ (id)strategyWithStrategyIdentifier:(id)arg1 persistanceIdentifier:(id)arg2;
+ (void)initialize;
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy) NSString *persistenceIdentifier; // @synthesize persistenceIdentifier=_persistenceIdentifier;
@property(readonly) DVTExtension *extension; // @synthesize extension=_extension;
- (id)displayNameInContext:(id)arg1;
- (id)resolveInput:(id)arg1 inContext:(id)arg2 usingSnapshot:(id)arg3 error:(id *)arg4;
- (id)snapshotForResolution;
@property(readonly) BOOL canResolveInputInBackground;
- (id)initWithExtension:(id)arg1;
- (id)init;

@end
