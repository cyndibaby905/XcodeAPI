

#import <Foundation/Foundation.h>

@class NSString;

@interface DVTToolsVersion : NSObject
{
    NSString *_versionName;
    NSString *_versionNameWithoutUpdate;
    unsigned long long _versionMajor;
    unsigned long long _versionMinor;
    unsigned long long _versionUpdate;
}

+ (id)versionWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 update:(unsigned long long)arg3;
+ (id)version6_0_0;
+ (id)version5_1_0;
+ (id)version5_0_2;
+ (id)version5_0_1;
+ (id)version5_0_0;
+ (id)version4_7_0;
+ (id)version4_6_3;
+ (id)version4_6_2;
+ (id)version4_6_1;
+ (id)version4_6_0;
+ (id)version4_5_2;
+ (id)version4_5_1;
+ (id)version4_5_0;
+ (id)version4_4_1;
+ (id)version4_4_0;
+ (id)version4_3_3;
+ (id)version4_3_2;
+ (id)version4_3_1;
+ (id)version4_3_0;
+ (id)version4_2_5;
+ (id)version4_2_1;
+ (id)version4_2_0;
+ (id)version4_1_0;
+ (id)version4_0_2;
+ (id)version4_0_1;
+ (id)version4_0_0;
+ (id)version3_2_6;
+ (id)version3_2_5;
+ (id)version3_2_4;
+ (id)version3_2_3;
+ (id)version3_2_2;
+ (id)version3_2_1;
+ (id)version3_2_0;
+ (id)version3_1_4;
+ (id)version3_1_3;
+ (id)version3_1_2;
+ (id)version3_1_1;
+ (id)version3_1_0;
+ (id)version3_0_0;
+ (id)version2_5_0;
+ (id)versionWithString:(id)arg1;
+ (id)allKnownVersions;
+ (id)currentVersion;
- (NSString *)description;
- (unsigned long long)versionUpdateComponent;
- (unsigned long long)versionMinorComponent;
- (unsigned long long)versionMajorComponent;
- (id)nameWithoutUpdate;
- (id)name;
- (NSUInteger)hash;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)other;
- (id)initWithVersionMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 update:(unsigned long long)arg3;

@end

