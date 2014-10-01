

#import <Foundation/Foundation.h>

@class IDELocalizationXLIFFComparisonIssueLocation, NSString;

@interface IDELocalizationXLIFFComparisonFile : NSObject
{
    BOOL _foundInProject;
    NSString *_original;
    IDELocalizationXLIFFComparisonIssueLocation *_location;
}

@property BOOL foundInProject; // @synthesize foundInProject=_foundInProject;
@property(readonly) IDELocalizationXLIFFComparisonIssueLocation *location; // @synthesize location=_location;
@property(readonly) NSString *original; // @synthesize original=_original;
- (long long)compare:(id)arg1;
- (id)initWithOriginal:(id)arg1 oldLocation:(id)arg2 newLocation:(id)arg3 foundInProject:(BOOL)arg4;

@end

