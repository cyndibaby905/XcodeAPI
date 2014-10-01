

#import <Foundation/Foundation.h>

@class DVTDocumentLocation, DVTFindDescriptor, DVTFindResult;

@protocol DVTTextFindable <NSObject>
- (DVTFindResult *)findStringMatchingDescriptor:(DVTFindDescriptor *)arg1 backwards:(BOOL)arg2 from:(DVTDocumentLocation *)arg3 to:(DVTDocumentLocation *)arg4;

@optional
@property unsigned long long supportedMatchingOptions;
- (long long)compareFindableLocation:(DVTDocumentLocation *)arg1 withLocation:(DVTDocumentLocation *)arg2;
@end

