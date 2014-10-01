

#import <Foundation/Foundation.h>

@class DVTDeviceType, DVTPlatform, NSMutableSet, NSSet, NSString;

@interface DVTDeviceLocator : NSObject
{
    NSMutableSet *_locatedDevices;
}

+ (id)deviceLocator;
+ (void)initialize;
- (void)deleteDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)matchDevice:(id)arg1 againstOptions:(id)arg2 genericOnly:(BOOL)arg3;
- (BOOL)matchDevice:(id)arg1 againstOptions:(id)arg2 genericOnly:(BOOL)arg3 allowAliases:(BOOL)arg4;
- (BOOL)validateDeviceSpecifierOptions:(id)arg1 genericOnly:(BOOL)arg2 allowMultipleMatches:(BOOL)arg3 error:(id *)arg4;
@property(readonly) DVTDeviceType *deviceType; // @dynamic deviceType;
- (id)knownDeviceAtDeviceLocation:(id)arg1;
- (void)stopLocating;
- (BOOL)startLocatingWithError:(id *)arg1;
- (void)startLocating;
@property(readonly, copy) NSSet *platforms;
@property(readonly, copy) DVTPlatform *platform;
@property(readonly, copy) NSString *deviceLocationScheme; // @dynamic deviceLocationScheme;
- (id)init;

// Remaining properties
@property(readonly, copy) NSSet *locatedDevices; // @dynamic locatedDevices;
@property(readonly, copy) NSMutableSet *mutableLocatedDevices; // @dynamic mutableLocatedDevices;

@end

