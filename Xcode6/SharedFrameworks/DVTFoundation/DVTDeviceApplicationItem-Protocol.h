

#import <Foundation/Foundation.h>

@class NSSet, NSString;

@protocol DVTDeviceApplicationItem <NSObject>
@property(readonly) BOOL isLeaf;
@property(readonly) NSSet *children;
@property(readonly) NSString *name;

@optional
@property(readonly, copy) NSString *installedPath;
@end

