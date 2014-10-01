

#import <Foundation/Foundation.h>

@class NSArray, NSMutableSet, NSSet, NSString;

@interface DVTPlatformFamily : NSObject
{
    NSString *_identifier;
    NSString *_name;
    NSMutableSet *_platforms;
    NSArray *_osVersions;
}

+ (id)registerPlatformFamilyWithIdentifier:(id)arg1 name:(id)arg2;
+ (id)platformFamilyWithName:(id)arg1;
+ (id)platformFamilyWithIdentifier:(id)arg1;
+ (id)platformFamiliesSortedByName;
+ (id)allPlatformFamilies;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSSet *platforms; // @synthesize platforms=_platforms;
- (void)addPlatform:(id)arg1;
@property(readonly) NSArray *osVersions; // @synthesize osVersions=_osVersions;
- (NSString *)description;

@end

