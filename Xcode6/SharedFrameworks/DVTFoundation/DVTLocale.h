

#import <Foundation/Foundation.h>

@class NSString;

@interface DVTLocale : NSObject <NSCopying, NSCoding>
{
    NSString *_displayName;
    NSString *_localeIdentifier;
}

+ (id)localeWithLocaleIdentifier:(id)arg1;
+ (id)systemLanguages;
+ (id)availableLocales;
+ (id)globalLocale;
+ (id)baseLocale;
+ (id)autoupdatingCurrentLocale;
+ (id)currentLocale;
+ (id)_xcodeLocale;
+ (id)systemLocale;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)other;
- (BOOL)isEqualToLocale:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)rootLanguage;
- (id)localeComponents;
@property(readonly) NSString *localeIdentifier;
- (NSString *)description;
- (id)_initWithLocaleIdentifier:(id)arg1;
- (id)_initWithLocaleIdentifier:(id)arg1 displayName:(id)arg2;
- (id)init;

@end

