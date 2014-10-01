

#import <Foundation/Foundation.h>

@class NSString;
@protocol IDEGroupCore;

@protocol IDEContainerItemCore <NSObject>
@property(readonly) id <IDEContainerCore> parentContainer;
@property(copy) NSString *path;
@property(retain) id <IDEGroupCore> parentGroup;
@end

