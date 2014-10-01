

#import <Foundation/Foundation.h>

@class NSString;

@protocol DVTCodesignableDevice <NSObject>
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *deviceIdentifier;
@property(readonly, copy, nonatomic) NSString *platformIdentifier;
@property(readonly, nonatomic) BOOL supportsProvisioning;
@end

