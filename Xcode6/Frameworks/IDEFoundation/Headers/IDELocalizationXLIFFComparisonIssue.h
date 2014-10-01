

#import <Foundation/Foundation.h>

@class IDELocalizationXLIFFComparisonIssueLocation, NSString;

@interface IDELocalizationXLIFFComparisonIssue : NSObject
{
    int _category;
    NSString *_message;
    IDELocalizationXLIFFComparisonIssueLocation *_location;
}

@property(readonly) IDELocalizationXLIFFComparisonIssueLocation *location; // @synthesize location=_location;
@property(readonly) int category; // @synthesize category=_category;
@property(readonly) NSString *message; // @synthesize message=_message;
- (long long)compare:(id)arg1;
- (NSString *)description;
- (id)initWithMessage:(id)arg1 category:(int)arg2 oldLocation:(id)arg3 newLocation:(id)arg4;

@end

