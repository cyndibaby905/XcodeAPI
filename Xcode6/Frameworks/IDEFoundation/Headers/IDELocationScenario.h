

#import <Foundation/Foundation.h>

@class DVTFilePath, NSArray, NSMutableArray, NSNumber, NSString;

@interface IDELocationScenario : NSObject
{
    NSString *_identifier;
    NSArray *_locations;
    BOOL _autorepeat;
    NSNumber *_speed;
    DVTFilePath *_filePath;
    BOOL _hasLoadedContent;
    BOOL _valid;
    BOOL _isCurrentLocation;
}

+ (id)builtInScenarioWithIdentifier:(id)arg1;
+ (id)defaultScenarios;
+ (id)currentLocationScenario;
@property(readonly) BOOL isCurrentLocationScenario; // @synthesize isCurrentLocationScenario=_isCurrentLocation;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSNumber *speed; // @synthesize speed=_speed;
@property(readonly) BOOL autorepeat; // @synthesize autorepeat=_autorepeat;
@property(readonly, getter=isDefaultScenario) BOOL defaultScenario;
- (NSString *)description;
@property(readonly) BOOL isValid;
@property(readonly) NSString *name;
@property(readonly) NSArray *locations; // @dynamic locations;
- (id)_locationsFromReferencedGPXFileWithError:(id *)arg1;
- (id)initWithWorkspace:(id)arg1 referencingFilePath:(id)arg2;
- (id)initWithIdentifier:(id)arg1 referencingFilePath:(id)arg2;
- (id)initWithIdentifier:(id)arg1 locations:(id)arg2 speed:(id)arg3 autorepeat:(BOOL)arg4;
- (id)initWithIdentifier:(id)arg1 locations:(id)arg2;

// Remaining properties
@property(readonly) NSMutableArray *mutableLocations; // @dynamic mutableLocations;

@end

