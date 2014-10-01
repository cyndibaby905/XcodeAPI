

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>

@class NSString;

@interface IDEEntityIdentifier : NSObject <NSCopying>
{
    unsigned long long _hashValue;
    int _sharedState;
    int _entityType;
    NSString *_entityName;
    NSString *_containerName;
    NSString *_entityGUID;
}

+ (id)entityIdentifierFromEntityName:(id)arg1 entityType:(int)arg2 containerName:(id)arg3;
+ (id)entityIdentifierFromEntityName:(id)arg1 entityType:(int)arg2 containerName:(id)arg3 isShared:(BOOL)arg4;
+ (id)entityIdentifierFromGUID:(id)arg1 entityName:(id)arg2 entityType:(int)arg3 containerName:(id)arg4;
+ (id)entityIdentifierFromGUID:(id)arg1 entityName:(id)arg2 entityType:(int)arg3 containerName:(id)arg4 isShared:(BOOL)arg5;
@property(readonly, copy) NSString *entityGUID; // @synthesize entityGUID=_entityGUID;
@property(readonly) int entityType; // @synthesize entityType=_entityType;
@property(readonly, copy) NSString *containerName; // @synthesize containerName=_containerName;
@property(readonly, copy) NSString *entityName; // @synthesize entityName=_entityName;
@property(readonly) int sharedState; // @synthesize sharedState=_sharedState;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isSimilarToEntityIdentifier:(id)arg1;
- (NSUInteger)hash;
- (NSString *)description;
- (BOOL)isEqual:(id)other;
- (id)initWithGUID:(id)arg1 entityName:(id)arg2 entityType:(int)arg3 containerName:(id)arg4 shared:(int)arg5;

@end

