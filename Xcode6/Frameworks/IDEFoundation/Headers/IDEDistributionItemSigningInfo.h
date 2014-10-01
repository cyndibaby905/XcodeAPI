

#import <Foundation/Foundation.h>

@class DVTCodesignParameterSnapshot;

@interface IDEDistributionItemSigningInfo : NSObject
{
    DVTCodesignParameterSnapshot *_codesignParameterSnapshot;
}

@property(readonly) DVTCodesignParameterSnapshot *codesignParameterSnapshot; // @synthesize codesignParameterSnapshot=_codesignParameterSnapshot;
- (NSString *)description;
- (id)initWithCodesignParameterSnapshot:(id)arg1;

@end

