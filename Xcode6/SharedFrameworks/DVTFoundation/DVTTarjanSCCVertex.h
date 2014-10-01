

#import <Foundation/Foundation.h>

@interface DVTTarjanSCCVertex : NSObject
{
    unsigned long long index;
    unsigned long long lowlink;
    BOOL inStack;
    id userObject;
}

- (id)initWithUserObject:(id)arg1;

@end

