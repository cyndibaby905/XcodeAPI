

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString;

@interface IDEBuildableProductSupportMixIn : NSObject <DVTInvalidation>
{
    id <IDEBuildableProduct> _buildableProduct;
}

+ (void)initialize;
- (id)toolTip;
- (id)displayName;
- (id)filePathForBuildParameters:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithBuildableProduct:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

