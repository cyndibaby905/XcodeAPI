

#import <Foundation/Foundation.h>

@class NSAttributedString, NSString;

@interface DVTFindDescriptor : NSObject <NSCopying, NSCoding>
{
}

+ (id)keyPathsForValuesAffectingDisplayAttributedString;
- (id)firstMatchingResultInString:(id)arg1 backwards:(BOOL)arg2 inRange:(NSRange)arg3 withWordFindingBlock:(CDUnknownBlockType)arg4 docLocationCreationBlock:(CDUnknownBlockType)arg5;
- (id)firstMatchingResultInString:(id)arg1 backwards:(BOOL)arg2 inRange:(NSRange)arg3 docLocationCreationBlock:(CDUnknownBlockType)arg4;
@property(readonly) BOOL caseSensitive;
@property(readonly) NSString *displayString;
@property(readonly) NSAttributedString *displayAttributedString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

