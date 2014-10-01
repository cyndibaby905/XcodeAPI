

#import <Foundation/Foundation.h>

@class NSMutableSet, NSSet, NSString;

@interface IDEXcodeServerManager : NSObject
{
    NSMutableSet *_servers;
    NSString *_computerName;
}

+ (id)sharedServerManager;
@property(retain, nonatomic) NSString *computerName; // @synthesize computerName=_computerName;
@property(retain, nonatomic) NSSet *servers; // @synthesize servers=_servers;
- (id)typeIdentifier;
- (id)_botsFilePath;
- (void)removeLegacyServer:(id)arg1;
- (id)_readServersFromUserDefaults;
- (void)refresh;
- (void)dealloc;
- (id)init;

@end

