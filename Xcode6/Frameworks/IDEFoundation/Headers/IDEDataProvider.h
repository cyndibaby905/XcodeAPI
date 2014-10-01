

#import <Foundation/Foundation.h>

@interface IDEDataProvider : NSObject
{
}

+ (id)sharedDataProvider;
- (id)captureAttributes:(id)arg1 forPIDs:(id)arg2;
- (id)supportedAttributes;

@end

