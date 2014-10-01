

#import <Foundation/Foundation.h>

@class NSSet, NSString;

@interface DVTFirstLaunchPackage : NSObject
{
    NSString *_displayName;
    NSString *_description;
    NSString *_path;
    NSSet *_downloadables;
}

@property(readonly) NSSet *downloadables; // @synthesize downloadables=_downloadables;
@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) NSString *description; // @synthesize description=_description;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
- (id)_initWithPath:(id)arg1 packageInfo:(id)arg2;

@end

