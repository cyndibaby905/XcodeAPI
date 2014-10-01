

#import <Foundation/Foundation.h>

@class NSString;

@interface DVTDotSeparatedVersion : NSObject <NSCopying, NSCoding>
{
    long long _components[8];
    NSString *_description;
}

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSString *)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compareMajorMinorVersion:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)_compare:(id)arg1 withPrecision:(unsigned long long)arg2;
- (BOOL)isEqual:(id)other;
- (NSUInteger)hash;
@property(readonly) unsigned long long componentCount;
- (long long)componentAtIndex:(unsigned long long)arg1;
- (id)initWithString:(id)arg1;

@end

