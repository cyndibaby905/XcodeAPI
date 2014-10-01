

#import <Foundation/Foundation.h>

@class NSString;

@interface DVTOSVersion : NSObject
{
    NSString *_displayName;
    unsigned long long _osVersion;
}

@property(readonly) unsigned long long osVersion; // @synthesize osVersion=_osVersion;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initWithOSVersion:(unsigned long long)arg1 andDisplayName:(id)arg2;

@end

