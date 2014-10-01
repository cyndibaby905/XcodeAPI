

#import <Foundation/Foundation.h>

@class DVTCustomDataOwnership, NSString;

@interface DVTCustomDataSpecifier : NSObject
{
    NSString *_name;
    NSString *_groupingName;
    DVTCustomDataOwnership *_ownership;
}

+ (id)customDataSpecifierWithName:(id)arg1 groupingName:(id)arg2;
+ (id)customDataSpecifierWithName:(id)arg1 groupingName:(id)arg2 ownership:(id)arg3;
@property(readonly) DVTCustomDataOwnership *ownership; // @synthesize ownership=_ownership;
@property(readonly) NSString *groupingName; // @synthesize groupingName=_groupingName;
@property(readonly) NSString *name; // @synthesize name=_name;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)other;
- (NSString *)description;

@end

