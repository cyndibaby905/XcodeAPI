

#import <Foundation/Foundation.h>

@class IDELocationScenario, NSNumber;

@interface IDELocation : NSObject
{
    NSNumber *_latitude;
    NSNumber *_longitude;
    IDELocationScenario *_scenario;
}

@property(readonly) IDELocationScenario *scenario; // @synthesize scenario=_scenario;
@property(readonly) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(readonly) NSNumber *latitude; // @synthesize latitude=_latitude;
- (NSString *)description;
- (id)initWithLatitude:(id)arg1 longitude:(id)arg2;

@end

