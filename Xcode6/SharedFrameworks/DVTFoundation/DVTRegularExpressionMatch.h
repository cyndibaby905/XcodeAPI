

#import <Foundation/Foundation.h>

@class NSData, NSString;

@interface DVTRegularExpressionMatch : NSObject <NSCoding>
{
    NSRange _searchRange;
    NSString *_candidateString;
    unsigned long long _groupCount;
    NSRange *_ranges;
    NSData *_rangeData;
}

+ (id)_NSErrorForUErrorCode:(int)arg1 withDescription:(id)arg2;
@property(retain) NSData *rangeData; // @synthesize rangeData=_rangeData;
@property NSRange *ranges; // @synthesize ranges=_ranges;
@property unsigned long long groupCount; // @synthesize groupCount=_groupCount;
@property(copy) NSString *candidateString; // @synthesize candidateString=_candidateString;
@property NSRange searchRange; // @synthesize searchRange=_searchRange;
- (NSString *)description;
- (id)stringByExpandingTemplate:(id)arg1;
- (NSRange)rangeForGroupAtIndex:(unsigned long long)arg1;
- (id)substringForGroupAtIndex:(unsigned long long)arg1;
- (BOOL)isEqual:(id)other;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURegularExpression:(struct URegularExpression *)arg1 candidateString:(id)arg2 searchRange:(NSRange)arg3;

@end

