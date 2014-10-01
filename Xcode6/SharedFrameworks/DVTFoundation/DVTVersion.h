

#import <Foundation/Foundation.h>

@class NSString;

@interface DVTVersion : NSObject <NSCopying>
{
    CDUnion_7de6e739 _components;
    NSString *_stringValue;
    NSString *_buildNumber;
}

+ (id)currentSystemVersion;
+ (id)versionWithStringValue:(id)arg1;
+ (id)versionWithStringValue:(id)arg1 buildNumber:(id)arg2;
+ (id)versionWithMajorComponent:(unsigned long long)arg1 minorComponent:(unsigned long long)arg2 updateComponent:(unsigned long long)arg3;
+ (void)initialize;
@property(copy) NSString *buildNumber; // @synthesize buildNumber=_buildNumber;
- (unsigned long long)availabilityFormIncludingUpdate:(BOOL)arg1 shortForm:(BOOL)arg2;
- (id)initWithString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToOrNewerThanVersion:(id)arg1;
- (long long)compare:(id)arg1;
@property(readonly, copy) NSString *stringValue;
@property(readonly) unsigned long long updateComponent;
@property(readonly) unsigned long long minorComponent;
@property(readonly) unsigned long long majorComponent;
- (BOOL)isEqual:(id)other;
- (NSUInteger)hash;
- (NSString *)description;
- (id)initWithVersionComponents:(CDUnion_7de6e739)arg1;

@end

