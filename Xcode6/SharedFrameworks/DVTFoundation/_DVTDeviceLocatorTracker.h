

#import <Foundation/Foundation.h>

@class DVTDeviceLocator, DVTDeviceManager, DVTObservingToken;

@interface _DVTDeviceLocatorTracker : NSObject
{
    DVTDeviceLocator *_deviceLocator;
    DVTDeviceManager *_deviceManager;
    DVTObservingToken *_observation;
}

@property(readonly) DVTDeviceLocator *deviceLocator; // @synthesize deviceLocator=_deviceLocator;
- (void)stopLocatingAndObserving;
- (void)startLocating;
- (void)startObserving;
- (id)initWithDeviceLocator:(id)arg1 forDeviceManager:(id)arg2;

@end

