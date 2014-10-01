

#import <DVTFoundation/DVTPortalOperation.h>

@class NSString;

@interface DVTFetchOrCreateAppIDOperation : DVTPortalOperation
{
    NSString *_fetchedOrCreatedAppIDID;
}

@property(copy, nonatomic) NSString *fetchedOrCreatedAppIDID; // @synthesize fetchedOrCreatedAppIDID=_fetchedOrCreatedAppIDID;

@end

