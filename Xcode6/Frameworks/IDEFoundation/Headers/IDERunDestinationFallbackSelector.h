

#import <Foundation/Foundation.h>

@interface IDERunDestinationFallbackSelector : NSObject
{
}

+ (id)bestDestinationSelectableWithPreviousDestinationSelectable:(id)arg1 availableDestinationSelectables:(id)arg2;
+ (id)bestDestinationWithPreviousDestinationSelectable:(id)arg1 scheme:(id)arg2;
+ (id)bestDestinationWithPreviousDestination:(id)arg1 scheme:(id)arg2;

@end

