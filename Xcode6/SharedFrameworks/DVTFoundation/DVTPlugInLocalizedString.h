

#import <Foundation/Foundation.h>

@class DVTExtension;

@interface DVTPlugInLocalizedString : NSString
{
    NSString *_key;
    DVTExtension *_extension;
    NSString *_value;
}

- (void)getCharacters:(unsigned short *)arg1 range:(NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)_populate;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKey:(id)arg1 forExtension:(id)arg2;

@end

