

#import <Foundation/Foundation.h>

@interface DVTCheapReusableSubstring : NSString
{
    NSString *_realString;
    unsigned long long _realStringLength;
    NSRange _subrange;
    unsigned long long _hashValue;
    BOOL _hashValueValid;
}

- (NSRange)rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3;
- (BOOL)isEqualToString:(id)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (NSUInteger)hash;
- (void)setRealString:(id)arg1 subrange:(NSRange)arg2;
- (id)initWithRealString:(id)arg1 subrange:(NSRange)arg2;

@end

