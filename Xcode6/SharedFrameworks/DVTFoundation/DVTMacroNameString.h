

#import <Foundation/Foundation.h>

@interface DVTMacroNameString : NSString
{
    NSString *_contents;
    unsigned long long _hashValue;
    unsigned long long _regNumber;
}

+ (void)initialize;
+ (id)macroNameStringForString:(id)arg1 createIfNeeded:(BOOL)arg2;
- (NSString *)description;
- (unsigned long long)macroRegistrationNumber;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)getCharacters:(unsigned short *)arg1 range:(NSRange)arg2;
- (BOOL)isEqual:(id)other;
- (NSUInteger)hash;
- (id)replacementObjectForCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)init;
- (id)initWithContents:(id)arg1 registrationNumber:(unsigned long long)arg2;

@end

