

#import <Foundation/Foundation.h>

@class NSString;

@interface DVTCustomDataOwnership : NSObject
{
    NSString *_ownerName;
    BOOL _isShared;
}

+ (id)ownershipWithName:(id)arg1;
+ (id)ownershipForSharing;
+ (id)ownershipForCurrentUser;
+ (void)initialize;
@property(readonly) BOOL isShared; // @synthesize isShared=_isShared;
@property(readonly) NSString *ownerName; // @synthesize ownerName=_ownerName;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)other;
- (NSString *)description;

@end

