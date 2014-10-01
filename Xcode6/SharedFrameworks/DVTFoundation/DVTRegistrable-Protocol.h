

#import <Foundation/Foundation.h>

@class DVTVersion, NSArray, NSString;

@protocol DVTRegistrable <NSObject>
@property(readonly) NSString *identifier;

@optional
@property(readonly) NSString *displayDescription;
@property(readonly) NSString *displayName;
@property(readonly) DVTVersion *version;
@property(readonly) NSArray *aliases;
@end

