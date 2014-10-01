

#import <Foundation/Foundation.h>

@class DVTDotSeparatedVersion, NSString;

@interface DVTDownloadableDependency : NSObject <NSCoding>
{
    NSString *_identifier;
    DVTDotSeparatedVersion *_minVersion;
}

@property(readonly) DVTDotSeparatedVersion *minVersion; // @synthesize minVersion=_minVersion;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (id)propertyList;
- (id)initWithPropertyList:(id)arg1 error:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSString *)description;
- (id)initWithIdentifier:(id)arg1 minVersion:(id)arg2;

@end

