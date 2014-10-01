

#import <Foundation/Foundation.h>

@class NSString;

@interface DVTBuildVersion : NSObject
{
    NSString *_buildVersion;
    unsigned long long _buildVersionMajorNumber;
    NSString *_buildVersionMajorLetter;
    unsigned long long _buildVersionMinorNumber;
    NSString *_buildVersionMinorLetter;
}

+ (id)buildVersionWithString:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)other;
- (long long)compare:(id)arg1;
@property(readonly) NSString *buildVersionMinorLetter;
@property(readonly) unsigned long long buildVersionMinorNumber;
@property(readonly) NSString *buildVersionMajorLetter;
@property(readonly) unsigned long long buildVersionMajorNumber;
- (void)_parseBuildVersionIfNecessary;
- (id)name;
- (id)initWithString:(id)arg1;

@end

