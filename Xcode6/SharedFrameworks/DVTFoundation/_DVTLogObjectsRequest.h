

#import <Foundation/Foundation.h>

@class DVTPointerArray;

@interface _DVTLogObjectsRequest : NSObject
{
    DVTPointerArray *_remainingObjects;
    double _initialRequestTimeInterval;
    double _lastRequestTimeInterval;
}

@property double lastRequestTimeInterval; // @synthesize lastRequestTimeInterval=_lastRequestTimeInterval;
@property double initialRequestTimeInterval; // @synthesize initialRequestTimeInterval=_initialRequestTimeInterval;
@property(retain) DVTPointerArray *remainingObjects; // @synthesize remainingObjects=_remainingObjects;

@end

